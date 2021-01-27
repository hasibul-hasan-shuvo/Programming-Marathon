/** Problem link: https://lightoj.com/problem/greetings-from-lightoj **/

#include <cstdio>

int main()
{
	int t;

	while(scanf("%d", &t) == 1)
	{
		int I = 0;

		while(t--)
		{
			int a, b;

			scanf("%d %d", &a, &b);

			int c = a + b;

			printf("Case %d: %d\n", I + 1, c);

			I++;
		}
	}

	return 0;
}
