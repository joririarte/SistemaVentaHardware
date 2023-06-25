#include "pch.h"
#include "MySQL_DB.h"

MySQL_DB::MySQL_DB()
{
    this->connectionString = "datasource=localhost;username=root;password=1234;database=registros;";
    this->conn = gcnew MySqlConnection(this->connectionString);
}

bool MySQL_DB::call_Procedures(String^ sql)
{
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    try
    {
        return cursor->ExecuteNonQuery() > 0;
    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
        return false;
    }
    return false;
}

DataTable^ MySQL_DB::get_Table(String^ sql)
{
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}

DataTable^ MySQL_DB::getData()
{
    String^ sql = "call Listar_Items()";
    return this->get_Table(sql);
}


DataTable^ MySQL_DB::getTipos()
{
    String^ sql = "call Listar_Tipos()";
    return this->get_Table(sql);
}

void MySQL_DB::openConnection()
{
    this->conn->Open();
}

void MySQL_DB::closeConnection()
{
    this->conn->Close();
}

bool MySQL_DB::insertar(String^ descr, String^ precio, String^ existencia, String^ minima, String^ tipo)
{
    return this->call_Procedures("call Insertar_Item('" + descr + "'," + precio + "," + tipo + "," + existencia + "," + minima + ")");
}

bool MySQL_DB::modificar(String^ cod, String^ descr, String^ precio, String^ existencia, String^ minima, String^ tipo)
{
    return this->call_Procedures("call Modificar_Item(" + cod + ",'" + descr + "', " + precio + ", " + tipo + "," + existencia + ", " + minima + ")");
}

bool MySQL_DB::eliminar(String^ cod)
{
    return this->call_Procedures("call Eliminar_Logico_Item(" + cod + ")");
}

bool MySQL_DB::actualizar_item_existencias(String^ itemID, String^ cant)
{
    String^ sql = "call Actualizar_Item_Existencias(" + itemID + "," + cant + ")";
    return this->call_Procedures(sql);
}

bool MySQL_DB::nueva_Venta()
{
    String^ sql = "call Nueva_Venta()";
    return this->call_Procedures(sql);
}

bool MySQL_DB::cerrar_Venta(String^ venta_id)
{
    String^ sql = "call Cerrar_Venta(" + venta_id + ")";
    return this->call_Procedures(sql);
}

bool MySQL_DB::eliminar_Venta(String^ venta_id)
{
    String^ sql = "call Eliminar_Venta(" + venta_id + ")";
    return this->call_Procedures(sql);
}

DataTable^ MySQL_DB::getVentas()
{
    String^ sql = "call Listar_Ventas()";
    return this->get_Table(sql);
}

DataTable^ MySQL_DB::getVenta(String^ venta_id)
{
    String^ sql = "call Get_Venta(" + venta_id + ")";
    return this->get_Table(sql);
}

DataTable^ MySQL_DB::getCarrito(String^ venta_id)
{
    String^ sql = "call Listar_Carrito(" + venta_id + ")";
    return this->get_Table(sql);
}

bool MySQL_DB::agregar_al_carrito(String^ item_cod, String^ venta_id, String^ cantidad)
{
    return this->call_Procedures("call Agregar_al_Carrito(" + item_cod + "," + venta_id + "," + cantidad + ")");
}

bool MySQL_DB::eliminar_del_carrito(String^ item_cod, String^ venta_id)
{
    return this->call_Procedures("call Eliminar_del_Carrito(" + item_cod + "," + venta_id + ")");
}

String^ MySQL_DB::contar_carrito(String^ venta_id)
{
    String^ cant;
    String^ sql = "call Contar_Carrito(" + venta_id+")";
    DataTable^ tabla = this->get_Table(sql);
    array <DataRow^>^ rows = tabla->Select();
    cant = rows[0]["cantidad"]->ToString();
    return cant;
}
