/** Problem link: https://www.hackerrank.com/challenges/staircase/problem **/

#include<bits/stdc++.h>
using namespace std;

void showvike();
void raj();
void raihan();
void sazol();

int main()
{
	raj();
  sazol();
  raihan();
	showvike();
  return 0;
}
void sazol() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - 1 - i; ++j) {
            printf(" ");
        }
        for(int j = 0; j <= i; ++j) {
            printf("#");
        }
        puts("");
    }
}

void raihan(){
	int n;
	scanf("%d",&n);
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			if( y<=n-x )printf(" ");
			else printf("#");
		}
		printf("\n");
	}
}

void raj(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			if(i>=j)cout<<"#";
			else cout<<" ";
		}
		cout<<endl;
  }
}

void showvike() {
	int n;

	while(scanf("%d", &n) == 1)
		for(int I = 0; I < n; I++)
		{
			for(int K = I; K < n - 1; K++)
				printf(" ");

			for(int K = 0; K <= I; K++)
				printf("#");{

			printf("\n");
		}
}
