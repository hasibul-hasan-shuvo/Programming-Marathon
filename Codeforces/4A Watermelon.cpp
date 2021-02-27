/** Problem link: https://codeforces.com/problemset/problem/4/A **/

#include<cstdio>

void sazol();

int main()
{
  sazol();
	return 0;
}

void sazol() {
  int w;
  scanf("%d", &w);
 
  if(w <= 2 || w & 1) puts("NO");
  else puts("YES");
}
