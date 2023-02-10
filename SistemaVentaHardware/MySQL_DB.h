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
public:
	MySQL_DB();
	DataTable^ getData();
	void openConnection();
	void closeConnection();
	bool insertar(String^ descr,String^ precio, String^ existencia, String^ minima, String^ tipo);
	bool modificar(String^ cod, String^ descr, String^ precio, String^ existencia, String^ minima, String^ tipo);
	bool eliminar(String^ cod);
};

