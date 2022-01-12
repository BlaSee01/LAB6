#include <stdio.h>
#include <stdlib.h>

void baum(int x){
    if(x==1){
        printf("*");
    }else{
        for(int i = 0 ; i < x ; i++){
            printf("*");
        }
        printf("\n");
        baum(x-1);
    }
}

int main()
{
    baum(3);
    return 0;
}
