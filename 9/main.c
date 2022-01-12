#include <stdio.h>
#include <stdlib.h>

void gra(){
    time_t t; srand((unsigned) time(&t));
    printf("Witam. System wybiera liczbe z zakresu 1-100, a twoim zadaniem jest trafic jaka to liczba. Moze trafisz [;D]\n");

    int licznik = 0;
    int los = rand()%100;
    int a;

    do{
    licznik++;
    printf("\nPodaj liczbe: ");
    scanf("%d" , &a);
    printf("\n");
    if(a==los){
        printf("Zgadles! Proba nr %d!" , licznik);
        break;
    }else if(a>los){
        printf("Szukana jest MNIEJSZA!\n");
    }else{
        printf("Szukana jest WIEKSZA!\n");
    }
    }while(a!=los);
}

int main()
{

    gra();

    return 0;
}
