#include <stdio.h>

//Beolvassuk n1 és n2
//ha n1 nagyobb > ha n2 < ha egyenlők = jelet ír ki

int main()
{
    int n1;
    int n2;

    printf("n1: ");
    scanf("%d",&n1);
    printf("n2: ");
    scanf("%d",&n2);

    if (n1 > n2)
    {
        printf(">\n");
    }
    else if (n2 > n1)
    {
        printf("<\n");
    }
    else
    {
        printf("=\n");
    }
    

    return 0;
}