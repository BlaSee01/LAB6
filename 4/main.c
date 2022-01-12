#include <stdio.h>
#include <stdlib.h>

void counting(int x){
    if(x<0) return 0;
    if(x==0){
        printf("0 ");
    }else{
        printf("%d " , x);
        counting(x-1);
    }
}

int main()
{

    counting(10);

    return 0;
}
