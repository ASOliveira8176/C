#include <stdio.h>//Página 59
#include <locale.h>
void StrCpy (char *destino, char *origem){
    while (*origem){
        *destino=*origem;
        origem++;
        destino++;
    }
    *destino='\0';
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    char str1[100], str2[100], str3[100];
    printf(" Entre com uma string: ");
    fflush(stdin);
    gets(str1);
    StrCpy(str2, str1);
    StrCpy(str3, "Você digitou a string ");
    printf("%s%s", str3, str2);
    free(stdin);
    return 0;
}
