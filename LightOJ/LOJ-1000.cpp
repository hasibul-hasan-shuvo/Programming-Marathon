/** Problem link: https://lightoj.com/problem/greetings-from-lightoj **/

#include<bits/stdc++.h>
using namespace std;

void ove()
{
    int t, a, b, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d", &a, &b);
        printf("Case %lld: %lld\n", i, a+b);
    }
}

int main()
{
    ove();
    return 0;
}
