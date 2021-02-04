/** Problem link: https://codeforces.com/problemset/problem/4/A **/
#include<stdio.h>

void ove()
{
    int a;
    scanf("%d", &a);
    if(a>2 && a%2==0)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    ove();
    return 0;
}
