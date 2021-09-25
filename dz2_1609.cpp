#include <stdio.h>

main()
{
    float n, a;
    float max = 0;
    float sum = 0;
    float srzn = 0;
    float min = 10000000000000;
    float pr = 1;
    printf("Enter - ");
    scanf("%f", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%f", &a);
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
        sum+=a;
        pr*=a;
    }
    srzn = sum/n;
    printf("\n");
    printf("Max - %f\n", max);
    printf("Min - %f\n", min);
    printf("Sum - %f\n", sum);
    printf("Srzn - %f\n", srzn);
    printf("Pr - %f\n", pr);
}
