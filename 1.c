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
 int e = s[0];
 for(i=0;s[i]!=0;i++)
  {
     if(s[i]==e)
         k++;
  }
  if(k>2)
    printf("Not Cube Free");
  else
    printf("%d",num);

  return 0;
}
