/** Problem link: https://lightoj.com/problem/greetings-from-lightoj **/

#include<cstdio>
void raihan();
int main()
{
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
