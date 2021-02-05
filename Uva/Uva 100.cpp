/** Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36 **/

#include <cstdio>

void showvike();

int main()
{
	showvike();

	return 0;
}

void showvike()
{
	int I, J;

	while(scanf("%d %d", &I, &J) == 2)
	{
		printf("%d %d", I, J);

		if(I > J)
		{
			int t = I;
			I = J;
			J = t;
		}

		int c = 0;

		for(int K = I; K <= J; K++)
		{
			int cc = 1, n = K;

			while(n != 1)
			{
				cc++;

				if(n % 2 != 0)
					n = (3 * n) + 1;

				else
					n = n / 2;
			}

			if(cc > c)
				c = cc;
		}

		printf(" %d\n", c);
	}
}
