#include <stdio.h>
#include <stdlib.h>

void wypisz (int x) {
if (x < 1) return;
wypisz(x - 1);
printf("%d " , x);
}

int main()
{
    wypisz(20);
    return 0;
}
