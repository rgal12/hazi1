#include <stdio.h>

//Beolvasunk 1 számot, az adott számtól 1-ig kiírja visszafele az összes páratlan számot 

int main()
{

    int n;
    printf("n: ");
    scanf("%d",&n);

    for (int i = n; i > 0; --i)
    {
        if (i % 2 == 1)
        {
            printf("%d\n",i);
        }
        
    }

    return 0;
}