#pragma once
using namespace std;
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

ref class MySQL_DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
	bool call_Procedures(String^);
	DataTable^ get_Table(String^);
public:
	MySQL_DB();
	DataTable^ getData();
	DataTable^ getTipos();
	void openConnection();
	void closeConnection();
	//ITEMS - STOCK
	bool insertar(String^ descr,String^ precio, String^ existencia, String^ minima, String^ tipo);
	bool modificar(String^ cod, String^ descr, String^ precio, String^ existencia, String^ minima, String^ tipo);
	bool eliminar(String^ cod);
	//VENTAS - CARRITO
	bool nueva_Venta();
	bool cerrar_Venta(String^);
	bool eliminar_Venta(String^);
	DataTable^ getVentas();
	DataTable^ getVenta(String^);
	DataTable^ getCarrito(String^);
	bool agregar_al_carrito(String^, String^, String^);
	bool eliminar_del_carrito(String^, String^);
	String^ contar_carrito(String^);
};

