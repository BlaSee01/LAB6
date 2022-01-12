#include <stdio.h>
#include <stdlib.h>

void counting(int x){
    for(int i = x ; i > 0 ; i--){
        printf("%d " , i);
    }
}

int main()
{

    counting(5);

    return 0;
}
