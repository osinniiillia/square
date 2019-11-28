#include <stdio.h>
#include "SolveSquare.hpp"

int main()
{
	double a,b,c,x1, x2;
	int res;
	printf("ax^2 + bx + c = 0\n");
	printf("a = ");
	scanf("%lg", &a);
	printf("b = ");
	scanf("%lg", &b);
	printf("c = ");
	scanf("%lg", &c);
	
	if((res = solveSquare(a, b, c, &x1, &x2)) == 2)
		printf("x1 = %lg, x2 = %lg\n", x1, x2);
	else
	{
		if(res == 1)
			printf("���� �������: �1 = x2 = %lg\n", x1);
		if(res == 3)
			printf("���������� ����� �������\n");
		if(res == 0)
			printf("��� �������\n");	
	}
 
	return 0;
}