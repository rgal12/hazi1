#include <stdio.h>

//Számok összege 1-től 100-ig

int main()
{

    int sum = 0;

    for (int i = 1; i <= 100; ++i)
    {
        sum += i;
    }

    printf("A szamok osszege 1-tol 100-ig: %d",sum);
    


    return 0;
}