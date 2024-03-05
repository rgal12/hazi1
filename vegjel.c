#include <stdio.h>

//Beolvas számokat 0 végjelig, majd kiírja összegüket

int main()
{

    int szam;
    int sum = 0;

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
      
        sum += szam;

    } while (szam != 0);

    printf("Elemek osszege: %d",sum);
    



    return 0;
}