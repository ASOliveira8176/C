#include <stdio.h>// Página 16
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a=0, contar=0;
    char Palavra[50];
    printf("Digite uma palavra: ");
    gets(Palavra);
    for (Palavra[a];Palavra[a]!='\0';a++){
        if (Palavra[a]=='a'){
            Palavra[a]='b';
            contar++;
        }
    }
    printf(" O número de caracteres modificados foi de %i caracterses! ", contar);
    printf("\n A string modificada ficou assim: \n %s", Palavra);
    return 0;
}
