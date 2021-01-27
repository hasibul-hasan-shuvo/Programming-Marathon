/** Problem link: https://www.hackerrank.com/challenges/staircase/problem **/

#include <cstdio>

void staircase(int n)
{
	for(int I = 0; I < n; I++)
	{
		for(int K = I; K < n - 1; K++)
			printf(" ");

		for(int K = 0; K <= I; K++)
			printf("#");

		printf("\n");
	}
}

int main()
{
	int n;

	while(scanf("%d", &n) == 1)
		staircase(n);

	return 0;
}
