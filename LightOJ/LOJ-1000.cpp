/** Problem link: https://lightoj.com/problem/greetings-from-lightoj **/

#include<bits/stdc++.h>
using namespace std;

void raj();
void jayem();
void raihan();
int main()
{
	  raj();
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

void raj(){
	int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    int a,b;
    cin>>a>>b;
    cout<<"Case "<<i<<": "<<a+b<<endl;
	}
}