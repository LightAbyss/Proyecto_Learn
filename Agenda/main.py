#Juan Pablo Corredor Castro
#Agenda digital

#funcion para imprimir el menu
def menu():
	print("1. Crear contacto")
	print("2. Lista blanca")
	print("3. Lista negra")
	print("4. Borrar contacto")
	print("5. Buscar contacto")
	print("6. Salir")
#Declaracion de variables
nombres = []
numero = []
direccion = []
estado = []
menu_sel = 0
#Inicio del main
menu()
while menu_sel != 6:
	menu_sel = int(input("Seleccione una opcion entre 1 y 6\n"))
	print(menu_sel)
	#Guardar contacto
	if menu_sel == 1:
		name = input("Nombre:")
		num = input("Numero:")
		dir = input("Direccion:")
		like = input("Te agrada? (si/no)\n")
		
		if like == "si":
			nombres.append(name)
			numero.append(num)
			direccion.append(dir)
			estado.append(True)
		elif like == "no":
			nombres.append(name)
			numero.append(num)
			direccion.append(dir)
			estado.append(False)
		else:
			print("Error")
	#Generar lista blanca de nombres
	elif  menu_sel == 2:
		for x in range(len(estado)):
			if estado[x-1]:
				print(nombres[x-1])

	#Generar lista negra de nombres
	elif menu_sel == 3:
		for x in range(len(estado)):
			if not(estado[x-1]):
				print(nombres[x-1])
	#Borrar contacto
	elif menu_sel == 4:
		print("Cual contacto deseas borrar? (Digitar nombre)\n")
		print(str(nombres))
		name = input("Nombre:")
		if name in nombres:
			for x in range(len(nombres)):
				if nombres[x-1] == name:
					nombres.pop(x-1)
					numero.pop(x-1)
					direccion.pop(x-1)
					estado.pop(x-1)
					print("Eliminado correctamente")
			
		else:
			print("Contacto no encontrado")
	
	elif menu_sel == 5:
		name = input("Nombre:")
		if name in nombres:
			for x in range(len(nombres)):
				if nombres[x-1] == name:
					print("Nombre: ",nombres[x-1],"\n")
					print("Numero: ",numero[x-1],"\n")
					print("Direccion: ",direccion[x-1],"\n")
					if estado[x-1]:
						print("Te agrada")
					else:
						print("No te agrada")
		else:
			print("Contacto no encontrado")
	elif menu_sel != 6:
		menu()
