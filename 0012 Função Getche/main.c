#include <stdio.h>//Página 10
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char Letra;
    Letra=getch();
    printf("Você pressionou a tecla: %c", Letra);
    return 0;
}
