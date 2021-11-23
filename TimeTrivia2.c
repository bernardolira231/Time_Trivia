#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void datos_usuario(char *nombre);
void intro(char *nombre);
void jardin_botanico();
void aula_magna();
void biblioteca();
void talleres();
void tvu();
void samurai();
void cambio();

int main(){
    char nombre[20];
    char inicio;
    printf("Bienvenido jugador. ¿Estas listo para iniciar?(S/N) ");
    scanf ("%c", &inicio);

    if (inicio == 's' || inicio == 'S'){
        datos_usuario(&nombre);
        intro(&nombre);
    }
}

void datos_usuario(char *nombre){
    printf("¿Cual es tu nombre viajero? ");
    scanf("%s", nombre);
}

void intro(char *nombre){
    char listo;
    printf ("\n\nHola %s, en este viaje recorreras 5 lugares, para ayudar a distintas personas que encontraras en ellos\n", nombre);

    printf("El primer lugar que visitaremos  es el Jardin Botanico, donde te encontraras a un sabio samurai del ano 800\n\n\n");
    jardin_botanico();
}

void jardin_botanico(){
    int opc = 0, repeat = 0;
    printf ("Viajaste al Jardin Botanico en el año 800, ¿Con quien decide hablar?\n");
    printf("1.- Samurai\n2.- Gariboy");
    printf("\nHaz tu eleccion: ");
    scanf("%d", &opc);

    if(opc == 1){
        samurai();
        repeat = 1;
    }
    if(opc == 2){
        printf("Chispas perdiste dos puntos, pero valoramos tu buen gusto\n");
    }

    while(repeat == 0){
        printf("Oh veo que gariboy no fue la clave pero te dejare volver a decidir conquien hablar\n");
        printf("1.- Samurai\n2.- Gariboy");
        printf("\nHaz tu eleccion: ");
        scanf("%d", &opc);

        if(opc == 1){
            samurai();
            repeat = 1;
        }
        if(opc == 2){
            printf("Chispas perdiste dos puntos, pero valoramos tu buen gusto\n");
        }
    }
}

void samurai(){

    int obj = 0, respuesta = 0, repeat = 0;

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
            repeat = 2;
        }

        if(respuesta == 2 || respuesta == 3){
            printf("Esa no es la respuesta correcta pierdes un punto");
            repeat = 1;
        }

        if(repeat == 2){
            printf("Respondiste correctamente, sin embargo ese objeto no es el que perdi, por favor recoge otro\n");
            printf("\n2.- Katana \n3.- Piedra\n");
            printf("Cual recogeras: ");
            scanf("%d", &obj);

            if(obj == 2){
                printf("¿Cual es el codigo etico de los samurai?");
                printf("\n1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido\n");
                printf("R: ");
                scanf("%d", &respuesta);

                if(respuesta == 3){
                    printf("Has acertado ganas un punto\n");
                    repeat = 0;
                }

                if(respuesta == 2 || respuesta == 1){
                    printf("Esa no es la respuesta correcta pierdes un punto");
                    repeat = 1;
                }

                while(repeat == 1){
                    printf("Cual es el codigo etico de los samurai?");
                    printf("1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido");
                    printf("R: ");
                    scanf("%d", &respuesta);

                    if(respuesta == 3){
                        printf("Has acertado ganas un punto\n");
                        repeat = 0;
                    }

                    if(respuesta == 2 || respuesta == 1){
                        printf("Esa no es la respuesta correcta pierdes un punto");
                        repeat = 1;
                    }           
                }
            }

            if(obj == 3){
                printf("¿Que le dice un techo a otro techo?\n");
                printf("1) Te echo de menos\n2) Somos tejanos\n3) Somos iguales\n");
                printf("R: ");
                scanf("%d", &respuesta);

                if(respuesta == 1){
                    printf("Has acertado ganas un punto\n");
                    repeat = 2;
                }

                if(respuesta == 2 || respuesta == 3){
                    printf("Esa no es la respuesta correcta pierdes un punto");
                    repeat = 1;
                }

                if(repeat == 2){
                    printf("Respondiste correctamente, sin embargo ese objeto no es el que perdi, por favor recoge otro\n");
                    printf("\n2.- Katana\n");
                    printf("Cual recogeras: ");
                    scanf("%d", &obj); 

                    if(obj == 2){
                        printf("¿Cual es el codigo etico de los samurai?");
                        printf("\n1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido\n");
                        printf("R: ");
                        scanf("%d", &respuesta);

                        if(respuesta == 3){
                            printf("Has acertado ganas un punto\n");
                            repeat = 0;
                        }

                        if(respuesta == 2 || respuesta == 1){
                            printf("Esa no es la respuesta correcta pierdes un punto");
                            repeat = 1;
                        }

                        if(repeat == 0){
                            cambio();
                            obj = 4;
                        }

                        while(repeat == 1){
                            printf("¿Cual es el codigo etico de los samurai?\n");
                            printf("\n1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido\n");
                            printf("R: ");
                            scanf("%d", &respuesta);

                            if(respuesta == 3){
                                printf("Has acertado ganas un punto\n");
                                repeat = 4;
                            }

                            if(respuesta == 2 || respuesta == 1){
                                printf("Esa no es la respuesta correcta pierdes un punto");
                                repeat = 1;
                            }           

                            if(repeat == 4){
                                cambio();
                                obj = 4;
                            }
                        }
                    }
                }
            }
        }
        while(repeat == 1){
            printf("¿Que le dice un techo a otro techo?\n");
            printf("1) Te echo de menos\n2) Somos tejanos\n3) Somos iguales\n");
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
    if(obj == 2){
        printf("¿Cual es el codigo etico de los samurai?");
        printf("\n1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido\n");
        printf("R: ");
        scanf("%d", &respuesta);

        if(respuesta == 3){
            printf("Has acertado ganas un punto\n");
            repeat = 0;
        }

        if(respuesta == 2 || respuesta == 1){
            printf("Esa no es la respuesta correcta pierdes un punto");
            repeat = 1;
        }
        
        if(repeat == 0){
            cambio();
            obj = 4;
        }

        while(repeat == 1){
            printf("¿Cual es el codigo etico de los samurai?");
            printf("1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido");
            printf("R: ");
            scanf("%d", &respuesta);

            if(respuesta == 3){
                printf("Has acertado ganas un punto\n");
                repeat = 0;
            }

            if(respuesta == 2 || respuesta == 1){
                printf("Esa no es la respuesta correcta pierdes un punto");
                repeat = 1;
            }           
        }
    }

    if(obj == 3){
        printf("¿Que le dice un techo a otro techo?\n");
        printf("1) Te echo de menos\n2) Somos tejanos\n3) Somos iguales\n");
        printf("R: ");
        scanf("%d", &respuesta);

        if(respuesta == 1){
            printf("Has acertado ganas un punto\n");
            repeat = 2;
        }

        if(respuesta == 2 || respuesta == 3){
            printf("Esa no es la respuesta correcta pierdes un punto");
            repeat = 1;
        }

        if(repeat == 2){
            printf("Respondiste correctamente, sin embargo ese objeto no es el que perdi, por favor recoge otro\n");
            printf("\n1.- Cactus \n2.- Katana\n");
            printf("Cual recogeras: ");
            scanf("%d", &obj);

            if(obj == 2){
                printf("¿Cual es el codigo etico de los samurai?");
                printf("\n1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido\n");
                printf("R: ");
                scanf("%d", &respuesta);

                if(respuesta == 3){
                    printf("Has acertado ganas un punto\n");
                    repeat = 0;
                }

                if(respuesta == 2 || respuesta == 1){
                    printf("Esa no es la respuesta correcta pierdes un punto");
                    repeat = 1;
                }

                while(repeat == 1){
                    printf("¬øCual es el codigo etico de los samurai?");
                    printf("1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido");
                    printf("R: ");
                    scanf("%d", &respuesta);

                    if(respuesta == 3){
                        printf("Has acertado ganas un punto\n");
                        repeat = 0;
                    }

                    if(respuesta == 2 || respuesta == 1){
                        printf("Esa no es la respuesta correcta pierdes un punto");
                        repeat = 1;
                    }           
                }
            }

            if(obj == 1){
                printf("\n¿Cuantas personas caben en una manguera?\n");
                printf("1) Un chorro\n2) 3.1416\n3) 299.792,458 kilómetros por segundo\n");
                printf("R: ");
                scanf("%d", &respuesta);

                if(respuesta == 1){
                    printf("Has acertado ganas un punto\n");
                    repeat = 2;
                }

                if(respuesta == 2 || respuesta == 3){
                    printf("Esa no es la respuesta correcta pierdes un punto");
                    repeat = 1;
                }

                if(repeat == 2){
                    printf("Respondiste correctamente, sin embargo ese objeto no es el que perdi, por favor recoge otro\n");
                    printf("\n2.- Katana\n");
                    printf("Cual recogeras: ");
                    scanf("%d", &obj); 

                    if(obj == 2){
                        printf("¿Cual es el codigo etico de los samurai?");
                        printf("\n1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido\n");
                        printf("R: ");
                        scanf("%d", &respuesta);

                        if(respuesta == 3){
                            printf("Has acertado ganas un punto\n");
                            repeat = 0;
                        }

                        if(respuesta == 2 || respuesta == 1){
                            printf("Esa no es la respuesta correcta pierdes un punto");
                            repeat = 1;
                        }

                        if(repeat == 0){
                            cambio();
                            printf("///");
                            obj = 4;
                        }

                        while(repeat == 1){

                            printf("¿Cual es el codigo etico de los samurai?");
                            printf("1) Takataka\n2) El derecho al respeto ajeno es la paz\n3) Bushido");
                            printf("R: ");
                            scanf("%d", &respuesta);

                            if(respuesta == 3){
                                printf("Has acertado ganas un punto\n");
                                repeat = 0;
                            }

                            if(respuesta == 2 || respuesta == 1){
                                printf("Esa no es la respuesta correcta pierdes un punto");
                                repeat = 1;
                            }           
                        }
                    }
                }
            }
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

void cambio(){
    printf("Lograste tu mision en esta era\nProseguiremos con la siguiente...\n\n\n");
}
