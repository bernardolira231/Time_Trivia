#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void datos_usuario(char *nombre);
void seleccion_de_lugar(char *nombre);
void jardin_botanico(int *score);
void aula_magna();
void biblioteca();
void talleres();
void tvu();
void samurai(int *score);


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
    int lugar = 0, score = 5;
   printf ("\n\nHola %s, a continuacion te daremos cinco opciones que definiran tu futuro.", nombre); 
   printf ("\n\t 1.- Jardin Botanico \n \t 2.- Aula Magna \n \t 3.- Biblioteca \n \t 4.- Talleres \n \t 5.- TVU \n");
   printf("Elige con cuidado...   ");
   scanf("%d", &lugar);

    switch (lugar){
        case 1: printf("Usted eligio el Jardin Botanico\n\n");
                jardin_botanico(&score);
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

void jardin_botanico(int *score){

    int opc = 0, repeat = 0;
    printf ("Viajaste al Jardin Botanico en el año 800, ¿Con quien decide hablar?\n");
    printf("1.- Samurai\n2.- Gariboy");
    printf("\nHaz tu eleccion: ");
    scanf("%d", &opc);

    if(opc == 1){
        samurai(*score);
        repeat = 1;
    }
    if(opc == 2){
        printf("Chispas perdiste dos puntos, pero valoramos tu buen gusto\n");
        *score = *score - 2;
    }

    while(repeat == 0){
        printf("Oh veo que gariboy no fue la clave pero te dejare volver a decidir conquien hablar\n");
        printf("1.- Samurai\n2.- Gariboy");
        printf("\nHaz tu eleccion: ");
        scanf("%d", &opc);

        if(opc == 1){
            samurai(*score);
            repeat = 1;
        }
        if(opc == 2){
            printf("Chispas perdiste dos puntos, pero valoramos tu buen gusto\n");
            *score = *score - 2;
        }
    }
}

void aula_magna(){}

void biblioteca(){}

void talleres(){}

void tvu(){}

void samurai(int *score){

    int obj = 0, respuesta = 0, repeat = 0;
    printf("%d\n", *score);

    printf("Hola viajero veo que escogiste venir al jardin botanico, en este lugar tu mision sera encontrar partes de mi armadura que perdi en la batalla contra el gariclan, para poder recoger los objetos que veas tendras que resolver un acertijo.\nBuscando por el jardin encontraste estos objetos cual quieres recoger");
    printf("\n1.- Cactus \n2.- Katana \n3.- Piedra\n");
    printf("Cual recogeras: ");
    scanf("%d", &obj);

    if(obj == 1){
        printf("\n¿Cuantas personas caben en una manguera?\n");
        printf("1) Un chorro\n2) 3.1416\n3) 299.792,458 kilómetros por segundo\n");
        printf("R: ");
        scanf("%d", &respuesta);

        if(respuesta == 1){
            printf("Has acertado ganas un punto\n");
        }

        if(respuesta == 2 || respuesta == 3){
            printf("Esa no es la respuesta correcta pierdes un punto");
            repeat = 1;
        }
        while(repeat == 1){
            printf("\n¿Cuantas personas caben en una manguera?\n");
            printf("1) Un chorro\n2) 3.1416\n3) 299.792,458 kilómetros por segundo\n");
            printf("R: ");
            scanf("%d", &respuesta);

            if(respuesta == 1){
                printf("Has acertado ganas un punto\n");
                repeat = 0;
            }

            if(respuesta == 2 || respuesta == 3){
                printf("Esa no es la respuesta correcta pierdes un punto");
                repeat = 1;
            }
        }
    }
}
