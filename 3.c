#include<stdio.h>
#include<string.h>
int main()
{
   int n[3];
   int num,m,x,z,i=10,j=0;
   scanf("%d",&num);
   if(num>0&&num<10)
   {
       m=num;
   }
   else if(num<100)
   {
       m=9;
       for(x=10;x<=num;x++)
       {
           z=x;
           n[j]=z%i;
           z=z/i;
           if(n[j]==z)
            m++;
       }
   }
   printf("%d",m);
   return 0;
}
