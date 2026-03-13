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

    printf ("%i:%i:%i\n", agora. horas,
                        agora. minutos,
                        agora. segundos);
    
}