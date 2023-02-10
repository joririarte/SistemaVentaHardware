#include "pch.h"
#include "MySQL_DB.h"

MySQL_DB::MySQL_DB()
{
    this->connectionString = "datasource=localhost;username=root;password=1234;database=registros;";
    this->conn = gcnew MySqlConnection(this->connectionString);
}

DataTable^ MySQL_DB::getData()
{
    String^ sql = "select * from stock";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
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
    String^ sql = "insert into stock(Descripcion, Precio, Existencias,Minima,tipo) values('" + descr + "'," + precio + "," + existencia + "," + minima + "," + tipo+")";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql,this->conn);
    try
    {
       return cursor->ExecuteNonQuery()>0;
    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
        return false;
    }

}

bool MySQL_DB::modificar(String^ cod, String^ descr, String^ precio, String^ existencia, String^ minima, String^ tipo)
{
    String^ sql = "update stock set Descripcion='" + descr + "', Precio=" + precio + ", Existencias=" + existencia + ", Minima=" + minima + ", Tipo=" + tipo + " where Codigo=" + cod;
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    try
    {
        return cursor->ExecuteNonQuery()>0;
    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
        return false;
    }
}

bool MySQL_DB::eliminar(String^ cod)
{
    String^ sql = "delete from stock where Codigo=" + cod;
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
