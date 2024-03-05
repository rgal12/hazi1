#include <stdio.h>

//Kiírja az 1000-nél kisebb 3-mal vagy 5-tel osztható számok összegét

int main()
{

    int LIMIT = 1000;
    int sum = 0;

    for (int i =1;i < LIMIT;++i)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("Az osszeg: %d\n",sum);

    return 0;
}