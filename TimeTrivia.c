#include <stdio.h>
#include <stdlib.h>

void datos_usuario(char *nombre);
void seleccion_de_lugar(char *nombre);
void jardin_botanico();
void aula_magna();
void biblioteca();
void talleres();
void tvu();


int main(){
    char nombre[20];
    char inicio;
    printf("Bienvenido jugador. ¿Estas listo para iniciar?(S/N) ");
    scanf ("%c", &inicio);

    if (inicio == 's' || inicio == 'S'){
     
        datos_usuario(&nombre);
        seleccion_de_lugar(&nombre);
    }

    
}

void datos_usuario(char *nombre){
    printf("¿Cual es tu nombre viajero? ");
    scanf("%s", nombre);
}

void seleccion_de_lugar(char *nombre){
    int lugar = 0;
   printf ("\n\nHola %s, a continuacion te daremos cinco opciones que definiran tu futuro.", nombre); 
   printf ("\n\t 1.- Jardin Botanico \n \t 2.- Aula Magna \n \t 3.- Biblioteca \n \t 4.- Talleres \n \t 5.- TVU \n");
   printf ("Elige con cuidado...   ");
   scanf ("%d", &lugar);

    switch (lugar){
        case 1: printf ("Usted eligio el Jardin Botanico\n\n");
                jardin_botanico();
                break;
        case 2: printf ("Usted eligio el Aula Magna");
        break;
        case 3: printf ("Usted eligio la Biblioteca");
        break;
        case 4: printf ("Usted eligio los Talleres");
        break;
        case 5: printf ("Usted eligio ir a TVU");
        break;   
    }

  
}

void jardin_botanico(){

    printf ("Viajaste al Jardin Botanico en el año 800, ¿Con quien decide hablar? ");

}
