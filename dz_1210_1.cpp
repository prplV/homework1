#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int mas[100][100];
	int ms[100];
	int n = 0;
	int m = 0;
	int p = 0;
	scanf("%d%d", &n, &m);
	srand(time(NULL));
	
	//zapolneniye massiva1 randomnimy chislamy
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = rand()%101;
		}
	}
	
	//show massiv1
	for (int i = 0; i < m; i++)
	{	
		for (int j = 0; j < n; j++)
		{
			printf("%4d", mas[i][j]);
		}
		printf("\n\n");
	}
	
	
	printf("\n\n");
	
	//dobavleniye elementov massiva1 v massiv2
	for (int i = 0; i < m; i++)
	{	
		for (int j = 0; j < n; j++)
			{
				ms[p++] = mas[i][j];
			}
	}
	
	//show massiv2
	for (int i = 0; i < n*m; i++)
	{
		printf("%4d", ms[i]);
	}
	
	//sortirovka massiva2
	for (int i = 0; i < m*n; i++)
	{
		for (int j = 0; j < (m*n)-1; j++)
		{
			if (ms[j] > ms[j+1])
			{
				int z = ms[j];
				ms[j] = ms[j+1];
				ms[j+1] = z;
			}
		}
	}
	
	printf("\n\n");
	
	//show massiv2
	for (int i = 0; i < n*m; i++)
	{
		printf("%4d", ms[i]);
	}
	
	//obnuleniye p
	p=0;
	
	//dobavleniye elementov massiva2 v massiv1
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				mas[i][j] = ms[p++];
			}
		}
		else
		{
			for (int j = n-1; j >= 0; j--)
			{
				mas[i][j] = ms[p++];
			}
		}
	}
	
	printf("\n\n");
	printf("\n\n");
	
	//show massiv1
	for (int i = 0; i < m; i++)
	{	
		for (int j = 0; j < n; j++)
		{
			printf("%4d", mas[i][j]);
		}
		printf("\n\n");
	}
	
}
