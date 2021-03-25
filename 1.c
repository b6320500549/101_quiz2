#include<stdio.h>
int main()
{
  int m,num,i,j=0,k=0,a;
  int s[100];
  scanf("%d",&num);
  for(i=0;i<100;i++)
  {
    s[i]=0;
  }
  for(i=2;num!=1;)
  {
      if(num%i==0)
      {
      num=num/i;
      s[j]=i;
      j++;
      }
      else
       i++;
  }
  for(i=0;s[i]!=0;i++)
  {
     if(s[i]==s[i+1]&&s[i]!=0)
         k++;
  }
  if(k==j-1&&k>1)
    printf("Not Cube Free");
  else
    printf("yes");

  return 0;
}
