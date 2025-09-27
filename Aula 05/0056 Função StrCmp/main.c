#include <stdio.h>//Página 48
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char string1[100], string2[100];
    printf(" Digite uma palavra ou frase: ");
    fflush(stdin);
    gets(string1);
    printf(" Agora digite outra palavra ou frase: ");
    gets(string2);
    if (strcmp(string1, string2)){
        printf(" As duas strings são diferentes! ");
    }else{
        printf(" As duas strings são iguais! ");
    }
    return 0;
}
