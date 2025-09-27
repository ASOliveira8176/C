#include <stdio.h>//Página 38
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int a=0, b=0;
    char stringa[26], stringb[26];
    printf(" Digite uma palavra: ");
    gets(stringa);
    while (stringa[a]!='\0'){
        a++;
    }
    for (b=0;stringa[b]!='\0';b++){
        a--;
        stringb[b]=stringa[a];
    }
    printf(" A palavra digitada foi: %s", stringa);
    printf("\n O inverso dela é: %s", stringb);
    return 0;
}
