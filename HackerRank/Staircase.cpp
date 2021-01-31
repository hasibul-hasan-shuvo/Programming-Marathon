/** Problem link: https://www.hackerrank.com/challenges/staircase/problem **/

#include<bits/stdc++.h>
using namespace std;

void showvike();

int main()
{
	showvike();

	return 0;
}

void showvike() {
	int n;

	while(scanf("%d", &n) == 1)
		for(int I = 0; I < n; I++)
		{
			for(int K = I; K < n - 1; K++)
				printf(" ");

			for(int K = 0; K <= I; K++)
				printf("#");

			printf("\n");
		}
}
