#include <stdio.h>//Página 60

int StrEnd(char *s, char *t){
    int cont=0, a=0;
    while (s[a]!='\0'){
        if (s[a]== t[cont]){
            cont++;
        }else{
            cont=0;
        }
        a++;
    }a=0;
    while (t[a]!='\0'){
        a++;
    }
    if (cont==a){
        printf(" 1 ");
    }else{
        printf(" 0 ");
    }
}
int main(){
    int a;
    char stringa[20], stringb[10];
    printf("Digite uma string: ");
    fflush(stdin);
    gets(stringa);
    printf("Agora digite outra string: ");
    gets(stringb);
    StrEnd(&stringa, &stringb);
    return 0;
}
