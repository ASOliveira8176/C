#include <stdio.h>

int main()
{
    int x, *p, **q;
    p= &x;
    q= &p;
    x= 10;
    printf("\n%d\n", **q);// O erro estava no & substituindo os ** antes da variável;
    return 0;
}
