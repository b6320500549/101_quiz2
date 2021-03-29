#include<stdio.h>
int main()
{
    long num,m,x,z,n[7],i=10,j=0,k=0,h=0,g=0;
    scanf("%ld",&num);
    if(num>0&&num<10)
        m=num;
    else
    {
        m=9;
        for(x=10; x<=num; x++)
        {
            g=0; z=x;
            for(j=0; z>0;  z=z/i,j++)
                n[j]=z%i;
            for(h=0; h<j/2; h++)
            {
                if(n[h]==n[(j-1)-h])
                    g++;
                if(g==j/2)
                    m++;
            }
        }
    }
    printf("%ld",m);
    return 0;
}