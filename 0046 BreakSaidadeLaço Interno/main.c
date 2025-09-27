#include <stdio.h>//Página 41
int main (){
    int t, count;
    for (t=0;t<100;++t){
        count=1;
        for(;;){
            printf("%d", count);
            count++;
            if (count==10){
                printf(" ");
                break;
            }
        }
    }
    return 0;
}
