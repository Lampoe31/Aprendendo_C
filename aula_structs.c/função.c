#include <stdio.h>
#include <locale.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

struct horario teste (struct horario x){

    printf ("%i:%i:%i\n", x. horas,
                          x. minutos,
                          x. segundos);

    x. horas = 80;
    x. minutos = 90;
    x. segundos = 100;

    return x;
};
