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

DataTable^ MySQL_DB::getData()
{
    String^ sql = "call Listar_Items()";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}


DataTable^ MySQL_DB::getTipos()
{
    String^ sql = "call Listar_Tipos()";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tipos = gcnew DataTable();
    data->Fill(tipos);
    return tipos;
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
    return this->call_Procedures("call Eliminar_Item(" + cod + ")");
}

DataTable^ MySQL_DB::getCarrito(String^ venta_id)
{
    String^ sql = "call Listar_Carrito(" + venta_id + ")";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
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
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    array <DataRow^>^ rows = tabla->Select();
    cant = rows[0]["cant"]->ToString();
    return cant;
}

String^ MySQL_DB::sumar_carrito(String^ venta_id)
{
    String^ monto;
    String^ sql = "call Sumar_Monto_Carrito(" + venta_id + ")";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    array <DataRow^>^ rows = tabla->Select();
    monto = rows[0]["monto"]->ToString();
    return monto;
}
