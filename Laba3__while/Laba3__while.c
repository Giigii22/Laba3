#include <stdio.h>
#include <stdlib.h.>
#include <math.h>
#include <string.h>
#include "func.h"

int main(void)
{
	int n, k;
	int q = 0;
	double eps;
	char ch[1];
	while (1)
	{
		printf("       Menu WHILE \n");
		printf("1. Task 1\n");
		printf("2. Task 2\n");
		printf("3. Task 3\n");
		printf("4. Task 4\n");
		printf("5. Task 5\n");
		printf("6. Exit\n");
		printf("Enter your task:");
		scanf("%d", &q);
		switch (q)
		{
		case 1:
			system("cls");
			printf("       Task 1\n");
			printf("Enter n=");
			scanf("%d", &n);
			printf("Summ=%.5lf\n", summ(n));
			printf("Press any key to exit the menu\n");
			scanf("%s", &ch);
			if (strcmp(ch, "") != 0)
				break;
			else
				exit(EXIT_SUCCESS);
		case 2:
			system("cls");
			printf("       Task 2\n");
			printf("Enter eps=");
			scanf("%lf", &eps);
			printf("Summ=%.5lf\n", summ2(eps));
			printf("Press any key to exit the menu\n");
			scanf("%s", &ch);
			if (strcmp(ch, "") != 0)
				break;
			else
				exit(EXIT_SUCCESS);
		case 3:
			system("cls");
			printf("       Task 3\n");
			printf("Enter n=");
			scanf("%d", &n);
			printf("Enter k=");
			scanf("%d", &k);
			print(n, k);
			printf("\nPress any key to exit the menu\n");
			scanf("%s", &ch);
			if (strcmp(ch, "") != 0)
				break;
			else
				exit(EXIT_SUCCESS);
		case 4:
			system("cls");
			printf("       Task 4\n");
			printf("Enter eps=");
			scanf("%lf", &eps);
			printf("Number of the first element for which a[i]<eps: %d\n", findFirstElement(eps));
			printf("Press any key to exit the menu\n");
			scanf("%s", &ch);
			if (strcmp(ch, "") != 0)
				break;
			else
				exit(EXIT_SUCCESS);
		case 5:
			system("cls");
			printf("       Task 5\n");
			printf("Enter eps=");
			scanf("%lf", &eps);
			printf("Number of the first negative element for which a[i]<eps: %d\n", findFirstNegativeElement(eps));
			printf("Press any key to exit the menu\n");
			scanf("%s", &ch);
			if (strcmp(ch, "") != 0)
				break;
			else
				exit(EXIT_SUCCESS);
		case 6:
			system("cls");
			exit(EXIT_SUCCESS);
		default:
			printf("Wrong input");
			break;
		}

	}
}