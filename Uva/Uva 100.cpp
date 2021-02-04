/** Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36 **/

void ove()
{
    int i, j, k, a, l, m, s;
    while(scanf("%d %d", &i, &j)!=EOF)
    {
        s = 0;
        printf("%d %d ", i, j);
        if(i>j)
	{
	    k=i; i=j; j=k;
	}

        for(m=i; m<=j; m++)
        {
            a=m;
            l=0;
            while(1)
            {
                if(a==1)
                {
                    l++;
                    break;
                }

                else if(a%2==0)
                {
                    a = a/2;
                    l++;
                }
                else
                {
                    a = 3*a + 1;
                    l++;
                }
            }
            if(l>s)
                s=l;
        }
        printf("%d\n", s);
    }
}

int main()
{
    ove();
    return 0;
}

