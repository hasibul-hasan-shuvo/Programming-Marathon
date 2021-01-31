/** Problem link: https://lightoj.com/problem/greetings-from-lightoj **/

#include<bits/stdc++.h>
using namespace std;

void showvike();

int main()
{
	showvike();

	return 0;
}

void showvike() {
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
}
