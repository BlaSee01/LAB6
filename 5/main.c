#include <stdio.h>
#include <stdlib.h>

int power(int a, int b){
    int s = 1;
    for(int i = 1 ; i <= b ; i++){
        s*=a;
    }
    return s;
}

int main()
{
    printf("%d" , power(2,4));
    return 0;
}
