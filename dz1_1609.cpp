#include <stdio.h>

main()
{
    int day, month, year, bday, bmonth, byear;
    int days, years12, years11, years21, years22;
    int daysgone = 0;
    int byears, bmonthes, tmonthes, bdays, tdays;
    int tyears = 0;
    bmonthes = 0;
    printf("Vvedite cegodnyasgnuyu datu (v vide '12 7 2134')");
    printf("\n");
    scanf("%d%d%d", &day, &month, &year);
    printf("\n");
    printf("Vvedite den' vashego roghdeniya (v vide '1 7 1801')");
    printf("\n");
    scanf("%d%d%d",&bday, &bmonth, &byear);
    years11 = byear/4 + 1;
    years12 = byear - years11;
    years21 = year/4 + 1;
    years22 = year - years21;
    byears = (years11*365)+(years12*366);
    tyears = (years21*365)+(years22*366);
    bdays = bday;
    tdays = day;
    /*
    for (int i = 1; i<=bmonth; i++)
    {
        if (i % 2 == 0)
        {
            if ((i == 2)and(byear % 4  == 0))
            {
                bmonthes += 29;
            }
            else
            {
                if ((i == 2)and(byear % 4  != 0))
                {
                    bmonthes += 28;
                }
                else
                {
                    if (i == 8)
                    {
                        bmonthes += 31;
                    }
                }
            }
        }
        else
        {
            bmonthes += 31;
        }
    }
        for (int i = 1; i<=month; i++)
    {
        if (i % 2 == 0)
        {
            if ((i == 2)and(year % 4  == 0))
            {
                tmonthes += 29;
            }
            else
            {
                if ((i == 2)and(year % 4  != 0))
                {
                    tmonthes += 28;
                }
                else
                {
                    if (i == 8)
                    {
                        tmonthes += 31;
                    }
                }
            }
        }
        else
        {
            tmonthes += 31;
        }
    }
    */
    daysgone = (tyears + tmonthes + tdays) - (byears + bmonthes + bdays);
    printf("Vi projili %d dney\n", daysgone);
    printf("%d iiii %d", bmonthes, tmonthes);
}
