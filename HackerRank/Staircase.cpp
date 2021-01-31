/** Problem link: https://www.hackerrank.com/challenges/staircase/problem **/

#include <bits/stdc++.h>
using namespace std;

void ove()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("#");
        printf("\n");
    }
}

int main()
{
    ove();
    return 0;
}
