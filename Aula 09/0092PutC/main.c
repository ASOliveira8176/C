#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char string [50];
    fp= fopen("Teste01.txt", "w");//Arquivo ASCII para escrita e file open
    if (!fopen){
        printf("Erro ao abrir o arquivo.");
        exit (0);
    }
    printf("Digite algo para gravar no arquivo:");
    gets(string);
    for (int i=0; string[i]; i++){
        putc(string[i], fp);//Grava o que foi digitado no arquivo
    }
    fclose(fp);
    return 0;
}
