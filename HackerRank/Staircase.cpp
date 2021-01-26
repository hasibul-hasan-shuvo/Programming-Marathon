/** Problem link: https://www.hackerrank.com/challenges/staircase/problem **/

#include<iostream>

int main()
{
	int n;
	std::cin >> n;
	for(int x=1;x<=n;x++){
		for(int y=1,c=n-x;y<=n;y++){
			if( y<=c )std::cout << " ";
			else std::cout << "#";
		}
		std::cout << "\n";
	}
}
