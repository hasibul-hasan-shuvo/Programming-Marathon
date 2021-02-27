/** Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36 **/

#include<bits/stdc++.h>

using namespace std;

void sazol();

int main()
{
  sazol();
  
	return 0;
}

void sazol() {
  int a, b, x, y;
  
  while(scanf("%d%d", &a, &b) == 2) {
    x = a, y = b;
    
    if(a > b) swap(a, b);
    
    int mxCycle = 0;
    for(int i = a; i <= b; ++i) {
      int cycle = 1;
      int n = i;
      
      while(n != 1) {
        ++cycle;
        if(n & 1) n = 3 * n + 1;
        else n /= 2;
      }
      
      mxCycle = max(mxCycle, cycle);
    }
    
    printf("%d %d %d\n", x, y, mxCycle);
  }
}
