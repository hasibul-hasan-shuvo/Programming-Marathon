/** Problem link: https://www.hackerrank.com/challenges/staircase/problem **/

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
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			if( y<=n-x )printf(" ");
			else printf("#");
		}
		printf("\n");
	}
}
