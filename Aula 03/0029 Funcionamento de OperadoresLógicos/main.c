#include <stdio.h>//Página 25
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf(" Digite dois números, sendo 0 ou 1: ");
    scanf("%d %d", &a, &b);
    printf("\n %d AND %d é %d ", a, b, a&&b);
    printf("\n %d OR %d é %d ", a, b, a||b);
    printf("\n %d NOT é %d \a", a, !a);
    return 0;
}
