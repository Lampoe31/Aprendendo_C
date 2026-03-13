#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;

    agora. horas = 8;
    agora. minutos = 40;
    agora. segundos = 43;

    struct horario depois;

    depois. horas = agora. horas + 10;
    depois. minutos = agora. horas + agora. minutos;
    depois. segundos = 43 - 3;

    printf ("%i:%i:%i\n", depois. horas,
                          depois. minutos,
                          depois. segundos);
    
}