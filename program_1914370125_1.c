#include<stdio.h>

int main()
{
    int hasil=1, bil;
    printf("masukkan bilangan faktorial: ");
    scanf("%d",&bil);
    int faktorial;
    for(faktorial=1; faktorial<=bil; faktorial++)
    {
     hasil=faktorial*hasil;
    }
    printf("faktorial dari %d! = 5 x 4 x 3 x 2 x 1 = %d",bil,hasil);
   return 0;
}
