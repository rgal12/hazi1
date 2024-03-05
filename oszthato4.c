#include <stdio.h>

//beolvasunk egy számot, kiírja az adott számig a 4-gyel oszthatóakat

int main()
{

    int n;
    printf("n: ");
    scanf("%d",&n);

    if (n < 4) {
        printf("A beirt szamig egyetlen szam sem oszthato 4-gyel!\n");
    }

    for (int i = 4; i <= n; ++i)
    {
        if (i % 4 == 0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}