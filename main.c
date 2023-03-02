#include<stdio.h>
#include<stdlib.h>

//Definicion de estructura
typedef struct contact{
    char nombre[20];
    int numero;
    char direccion[40];
    char like;
} contact;
//Declaracion de funciones
void menu();
void crear();
void blanco();
void negro();
void borrar();
void buscar();
//Declaracion de variables
int opcion;
contact lista[100];
int posi;

int main(){
    opcion = 0;
    posi = 0;
    while(opcion != 6){
        menu();
        scanf("%d",&opcion);
        switch (opcion){
        case 1:
            crear();
            break;
        case 2:
            blanco();
            break;
        case 3:
            negro();
            break;
        case 4:
            borrar();
            break;
        case 5:
            buscar();
            break;
        default:
            printf("Error, intente otra opcion");
            break;
        }
    }
}

void menu(){
    printf("1. Crear contacto\n");
	printf("2. Lista blanca\n");
	printf("3. Lista negra\n");
	printf("4. Borrar contacto\n");
	printf("5. Buscar contacto\n");
	printf("6. Salir\n");
}

void crear(){


}