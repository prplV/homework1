#include <stdio.h>

main()
{
    int day, month, year, bday, bmonth, byear;
    int days, years12, years11, years21, years22;
    int daysgone = 0;
    int byears, bmonthes, tmonthes, bdays, tdays;
    int tyears = 0;
    int china, china1;
    bmonthes = 0;
    tmonthes = 0;
    china = byear;
    printf("Vvedite cegodnyasgnuyu datu (v vide '12 7 2134')");
    printf("\n");
    scanf("%d%d%d", &day, &month, &year);
    printf("\n");
    printf("Vvedite den' vashego roghdeniya (v vide '1 7 1801')");
    printf("\n");
    scanf("%d%d%d",&bday, &bmonth, &byear);
    printf("\n\n");
    years11 = byear/4 + 1;
    years12 = byear - years11;
    years21 = year/4 + 1;
    years22 = year - years21;
    byears = (years11*365)+(years12*366);
    tyears = (years21*365)+(years22*366);
    bdays = bday;
    tdays = day;
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
                    if (((i == 8)or(i==10)or(i==12)))
                    {
                        bmonthes += 31;
                    }
                }
            }
        }
        else
        {
            if (i > 7)
            {
            	bmonthes += 30;
            }
            else
            {
            	bmonthes += 31;
            }
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
	            if ((i == 2)and(year % 4 != 0))
	            {
	                tmonthes += 28;
	            }
	            else
	            {
	                if (((i == 8)or(i==10)or(i==12)))
	                {
	                    tmonthes += 31;
	                }
	            }
	        }
	    }
	    else
	    {
	        if (i > 7)
            {
            	tmonthes += 30;
            }
            else
            {
            	tmonthes += 31;
            }
	    }
    }
    daysgone = (tyears + tmonthes + tdays) - (byears + bmonthes + bdays) - 8;
    printf("1) Vi projili %d dney\n", daysgone);
    if (byear % 4 == 0)
    {
    	printf("2) God rojdeniya - visokosniy\n");
    }
    else
    {
    	printf("2) God rojdeniya - nevisokosniy\n");
    }
    
	while ((china%12==0)and(china>12))
	{
    	china = china / 12;
	}
	china1 = china % 12;
	switch (china1)
	{
		case 1:
		{
			printf("3) God Krysi\n");
			break;
		}
		case 2:
		{
			printf("3) God Byka\n");
			break;
		}
		case 3:
		{
			printf("3) God Tigra\n");
			break;
		}
		case 4:
		{
			printf("3) God Krolyka\n");
			break;
		}
		case 5:
		{
			printf("3) God Drakona\n");
			break;
		}
		case 6:
		{
			printf("3) God Zmey\n");
			break;
		}
		case 7:
		{
			printf("3) God Loshady\n");
			break;
		}
		case 8:
		{
			printf("3) God Kozy\n");
			break;
		}
		case 9:
		{
			printf("3) God Obezyany\n");
			break;
		}
		case 10:
		{
			printf("3) God Petuxa\n");
			break;
		}
		case 11:
		{
			printf("3) God Sobaki\n");
			break;
		}
		case 12:
		{
			printf("3) God Sviny\n");
			break;
		}
		default:
			{
				printf("Error!Wrong byear\n");
				break;
			}
	}
	printf("%d", china1);
}
