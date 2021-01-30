/** Problem link: https://www.hackerrank.com/challenges/staircase/problem **/

#include<bits/stdc++.h>
using namespace std;

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

int main()
{
	raj();
	return 0;
}