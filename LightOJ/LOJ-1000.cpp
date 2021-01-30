/** Problem link: https://lightoj.com/problem/greetings-from-lightoj **/

#include<cstdio>

void jayem();
void raihan();
int main()
{
    jayem();
    raihan();
    return 0;
}
void raihan(){
    int n;
	scanf("%d",&n);
    for(int x=0;x<n;x++){
        int t1,t2;
        scanf("%d%d",&t1,&t2);
        printf("Case %d: %d\n",x+1,t1+t2);
    }
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
