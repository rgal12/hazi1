#include <stdio.h>

//számokat olvasunk be 0 végjelig, majd megszámolja hány pozitív szám volt

int main()
{

    int szam;
    int sum = 0;

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);

        if (szam > 0)
        {
            sum += 1;
        }

    } while (szam != 0);
    

    printf("Pozitiv elemek szama: %d",sum);

    return 0;
}