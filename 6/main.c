#include <stdio.h>
#include <stdlib.h>

int power2(int a, int b){
    if(b==0) return 1;
    if(b<0) return 0;
    if(b==1){
        return a;
    }else{
        return a*power2(a,b-1);
    }
}

int main()
{
    printf("%d" , power2(2,4));
    return 0;
}
