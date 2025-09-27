#include <stdio.h>
#include <stdlib.h>
#include "locale.h"

#define max(A,B) ((A>B) ? (A):(B))
#define min(A,B) ((A<B) ? (A):(B))

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,j,t,r,x,y;
    printf("Digite dois números: ");
    scanf("%d", &i);
    scanf("%d", &j);
    printf("Agora digite mais dois números: ");
    scanf("%d", &t);
    scanf("%d", &r);
    x=max(i,j);
    y=min(t,r);
    printf("%d e %d", x, y);
    return 0;
}
