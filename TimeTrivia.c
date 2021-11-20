#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
   printf("Elige con cuidado...   ");
   scanf("%d", &lugar);

    switch (lugar){
        case 1: printf("Usted eligio el Jardin Botanico\n\n");
                jardin_botanico();
                break;
        case 2: printf("Usted eligio el Aula Magna");
                aula_magna();
                break;
        case 3: printf("Usted eligio la Biblioteca");
                biblioteca();
                break;
        case 4: printf("Usted eligio los Talleres");
                talleres();
                break;
        case 5: printf("Usted eligio ir a TVU");
                tvu();
                break;   
    }
}

void jardin_botanico(){

    int opc = 0, repeat = 0;
    printf ("Viajaste al Jardin Botanico en el año 800, ¿Con quien decide hablar?\n");
    printf("1.- Samurai\n2.- Gariboy");
    printf("\nHaz tu eleccion: ");
    scanf("%d", &opc);

    if(opc == 1){
        printf("Hola viajero veo que vienes ...");
        printf("");
        repeat = 1;
    }
    if(opc == 2){
        printf("Chispas perdiste dos puntos, pero valoramos tu buen gusto\n");
    }

    while(repeat == 0){
        printf("Oh veo que gariboy no fue la clave pero te dejare volver a decidir conquien hablar\n");
    }
}

void aula_magna(){}

void biblioteca(){}

void talleres(){}

void tvu(){}
