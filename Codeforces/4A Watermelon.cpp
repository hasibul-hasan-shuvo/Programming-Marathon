/** Problem link: https://codeforces.com/problemset/problem/4/A **/

#include <cstdio>

void showvike();

int main()
{
	showvike();

	return 0;
}

void showvike()
{
	int w;

	while(scanf("%d", &w) == 1)
	{
		if((w % 2 == 0) && (w != 2))
			printf("YES\n");

		else
			printf("NO\n");
	}
}
