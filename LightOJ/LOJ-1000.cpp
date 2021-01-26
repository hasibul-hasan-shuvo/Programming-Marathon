/** Problem link: https://lightoj.com/problem/greetings-from-lightoj **/

#include <iostream>
int main(){
    int n;
	std::cin >> n;
    for(int x=0;x<n;x++){
        int t1,t2;
        std::cin >> t1 >> t2;
        std::cout << "Case " << x+1 << ":" << " " <<t1+t2 << "\n";
    }
}
