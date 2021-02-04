/** Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36 **/

#include<cstdio>
void raihan();
int main(){
    raihan();
    return 0;
}
void raihan(){
    int i,j;
    while(scanf("%d%d", &i,&j) != EOF){
        int f,l,max=0;
        f = (i<j)?i:j;
        l = (i>j)?i:j;
        for(int count;f<=l;f++){
            int n=f;
            count=1;
            while(n!=1){
                if(n&1)n=3*n+1;
                else if(!(n&1)) n >>= 1;
                count++;
            }
            max = max>count?max:count;
        }
        printf("%d %d %d\n",i,j,max);
    }
}
