#include <stdio.h>//Página 12
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char Palavra[10]="João";
    printf(" String (palavra): %s", Palavra);
    printf("\n A segunda letra da string é: %c", Palavra[1]);
    Palavra[1]='e';
    printf("\n Agora a segunda letra da string é: %c", Palavra[1]);
    printf("\n A string então ficou: %s", Palavra);
    return 0;
}
