#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
contact temp;
int posi;
int positmp;

int main(){
    opcion = 0;
    posi = 0;
    positmp = 0;

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
        case 6:
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
    //Almacenar datos ingresados por el usuario
    printf("Nombre: ");
    scanf("%s",&temp.nombre);

    printf("\nNumero: ");
    scanf("%d",&temp.numero);

    printf("\nDireccion: ");
    scanf("%s",&temp.direccion);

    printf("\nTe agrada? (S/N): ");
    scanf("%s",&temp.like);

    //Comprobar errores, si no hay, guardar en lista
    if((temp.like == 'S') || (temp.like == 'N')){
        lista[posi] = temp;
        posi++;
    }else{
        printf("Error en seleccion S o N. Contacto no guardado");
    }
}

void blanco(){
    for(positmp = 0; positmp <= posi ; positmp++){
        if(lista[positmp].like == 'S'){
            printf("Nombre: %s\n",lista[positmp].nombre);
            printf("Numero: %d\n",lista[positmp].numero);
            printf("Direccion: %s\n",lista[positmp].direccion);
        }
    }
}

void negro(){
    for(positmp = 0; positmp <= posi ; positmp++){
        if(lista[positmp].like == 'N'){
            printf("Nombre: %s\n",lista[positmp].nombre);
            printf("Numero: %d\n",lista[positmp].numero);
            printf("Direccion: %s\n",lista[positmp].direccion);
        }
    }
}

void borrar(){
    char nametmp[20];
    char fase = 0;
    printf("¿Cual contacto desea borrar?\n");
    scanf("%s",&nametmp);
    for(positmp = 0; positmp <= posi ; positmp++){
        switch (fase)
        {
        case 0: //Buscar el contacto y eliminar sus datos
            if(!strcmp(nametmp,lista[positmp].nombre)){
                fase = 1;
                strcpy(lista[positmp].nombre,"Null");
                lista[positmp].numero = 0;
                strcpy(lista[positmp].direccion,"Null");
                lista[positmp].like = 'X';
            }
            break;
        case 1: //Mover contactos
            lista[positmp-1] = lista[positmp];
            break;
        default:
            break;
        }
    }
    if(fase == 0){
        printf("Contacto no encontrado");
    }else{
        printf("Eliminado exitoso");
    }

}

void buscar(){


}