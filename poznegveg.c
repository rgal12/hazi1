#include <stdio.h>

//Számokat olvasunk be 0 végjelig, kiírja hány pozitív és hány negatív szám volt

int main()
{
    int szam;
    int poz = 0;
    int neg = 0;

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
        if (szam > 0)
        {
            poz += 1;
        }
        else if (szam < 0)
        {
            neg += 1;
        }
        
    } while (szam != 0);
    
    printf("Pozitiv elemek szama: %d\n",poz);
    printf("Negativ elemek szama: %d\n",neg);

    return 0;
}