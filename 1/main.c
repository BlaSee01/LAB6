#include <stdio.h>
#include <stdlib.h>

void counting(int x){
    for(int i = 1 ; i <= x ; i++){
        printf("%d " , i);
    }
}

int main()
{
    counting(13);
    return 0;
}
