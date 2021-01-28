/** Problem link: https://lightoj.com/problem/greetings-from-lightoj **/

#include<cstdio>

void jayem();
int main()
{
    	jayem();
	return 0;
}

void jayem()
{
    int tcase,a,b,i;

    scanf("%d",&tcase);

    for(i=1;i<=tcase;i++)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
}