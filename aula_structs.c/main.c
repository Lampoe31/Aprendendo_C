#include <stdio.h>
#include <locale.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main (){
    setlocale(LC_ALL, "Portuguese");

    struct horario teste (struct horario x);

    struct horario agora;
    agora. horas = 8;
    agora. minutos = 40;
    agora. segundos = 43;   

    struct horario proxima; 

    proxima = teste (agora);

    printf ("%i:%i:%i\n", proxima. horas,
                          proxima. minutos,
                          proxima. segundos);

    return 0;
}