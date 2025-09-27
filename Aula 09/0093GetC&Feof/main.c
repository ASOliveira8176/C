#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    char c;
    fp=fopen ("teste02.txt", "r");//r para leitura
    if (!fp){
        printf("Não foi possível abrir o arquivo.");
        exit (0);
    }
    while((c = getc (fp)) != EOF){//EOF End Of File (fim do arquivo)
        printf("%c", c);
    }
    fclose(fp);//fclose File Close (fechar arquivo)
    return 0;
}
