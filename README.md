# SistemaVentaHardware
Sistema de gestion de Stock y Venta de Hardware de PC. 
Implementa base de datos SQL con MySQL.

* Implementado: CRUD completo gestión de Stock
* Falta: sistema de venta

# Capturas de Pantalla

## Pantalla Principal
* Muestra un DataGridView con los datos obtenidos de la tabla de MySQL. 
* Contiene textbox para los filtrar por descripcion o tipo.
* Tiene Menús para stock y venta

![Pantalla_Principal](Images/pantalla_principal.png)
![Pantalla_Principal_Filtro_Descripcion](Images/pantalla_principal_filtro_descripcion.png)
![Pantalla_Principal_Filtro_Tipo](Images/pantalla_principal_filtro_tipo.png)

## Menú Stock

### Stock >> Agregar Item
* Contiene textbox para cargar los campos de la tabla. No permite agregar un código, éste se asigna automáticamente al ingresar en la tabla

![Pantalla_Agregar_Item](Images/agregar_item.png)

### Stock >> Modificar Item
* Contiene textbox para modificar los campos de la tabla. 
* Todo es editable salvo el campo código, el cual es único. 
* El item a modificar se selecciona previamente desde la tabla

![Pantalla_modificar_Item](Images/modificar_item.png)

### Stock >> Eliminar Item
* Contiene textbox no editables para mostrar el item seleccionado de la tabla para eliminar. 
* Permite editar el campo código para buscar otro item a eliminar
* Borrado físico, tiene un MessageBox para confirmar el borrado

![Pantalla_eliminar_Item](Images/eliminar_item.png)
