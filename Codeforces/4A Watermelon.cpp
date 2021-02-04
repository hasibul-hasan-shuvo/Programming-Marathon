/** Problem link: https://codeforces.com/problemset/problem/4/A **/

#include<cstdio>
void raihan();
int main()
{
	raihan();
	return 0;
}
void raihan(){
    int n;
    scanf("%d", &n);
    if(n&1 || n==2) printf("NO");
    else printf("YES");
}
