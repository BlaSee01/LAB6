#include <stdio.h>
#include <stdlib.h>

void baum(int x){
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j  <= i ; j++ ){
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    baum(19);
    return 0;
}
