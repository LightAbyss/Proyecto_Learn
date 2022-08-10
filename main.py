#funcion para imprimir el menu
def menu():
	print("1. Crear contacto")
	pritnt("2. Lista blanca")
	print("3. Lista negra")
	print("4. Borrar contacto")
	print("5. Buscar contacto")
	print("6. Salir")
#Declaracion de variables
nombres = []
numero = []
estado = []
menu_sel = 0
#Inicio del main
menu()
while menu_sel != 6:
	menu_sel = input("Seleccione una opcion entre 1 y 6")
	#Guardar contacto
	if menu_sel == 1:
		name = input("Nombre:")
		nombres.append(name)
		num = input("Numero:")
		numero.append(num)
		like = input("Te agrada? (si/no)")
		if like == "si":
			estado.append(True)
		elif like == "no"
			estado.append(False)
		else
			print("Error")
	elif  menu_sel == 2:

	elif menu_sel == 3:

	elif menu_sel == 4:

	elif menu_sel == 5:

	elif menu_sel != 6:
		menu()
