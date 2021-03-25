#include<stdio.h>
int main()
{
  int m=0,num,i,j,k,a,d,c=0,e;
  int s[100];
  scanf("%d",&num);
  if(num>0&&num<=1000000)
  {
   for(d=1;d<=num;d++)
  {
   a=d;
   j=0,k=0;
  for(i=0;i<100;i++)
  {
    s[i]=0;
  }
  for(i=2;a!=1;)
  {
      if(a%i==0)
      {
      a=a/i;
      s[j]=i;
      j++;
      }
      else
       i++;
  }
  e=s[0];
  for(i=0;s[i]!=0;i++)
  {
     if(s[i]==e)
         k++;
  }
  if(k>2)
  {
      if(d==num)
      c++;
  }
  else
      m++;
  }
  if(c>0)
  printf("Not Cube Free");
  else
  printf("%d",m);
  }

  return 0;
}
