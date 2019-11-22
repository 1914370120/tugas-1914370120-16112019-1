#include<stdio.h>

int main()
{
    int hasil=1,bil;
    printf("masukkan bilangan fatorial:");
    scanf("%d",&bil);
    int faktorial;
    for(faktorial=1; faktorial<=bil; faktorial++)
    {
        hasil=faktorial*hasil;
    }
    printf("faktorial dari %d! = 5*4*3*2*1 = %d",bil,hasil);
}
