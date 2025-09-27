#include <stdio.h>//Página 24
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    int i, j;
    printf(" Digite dois números inteiros: ");
    scanf("%d %d", &i, &j);
    printf("\n %d == %d é %d", i, j, i==j);
    printf("\n %d != %d é %d", i, j, i!=j);
    printf("\n %d <= %d é %d", i, j, i<=j);
    printf("\n %d >= %d é %d", i, j, i>=j);
    printf("\n %d < %d é %d", i, j, i<j);
    printf("\n %d > %d é %d", i, j, i>j);
    return 0;
}
