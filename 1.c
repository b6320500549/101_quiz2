#include<stdio.h>
int main()
{
  int num,i,j=0,k=0;;
  int s[100];
  scanf("%d",&num);
  for(i=0;i<100;i++)
  {
    s[i]=0;
  }
  for(i=2;num!=1;)
  {
      num=num/i;
      s[j]=i;
      if(num%i!=0)
       i++;
      j++;
  }
  printf("%d",j);
  for(i=0;s[i]!=0;i++)
  {
     if(s[i]==s[i+1])
        k++;
  }
  if(k==j-1)
    printf("yes");

  return 0;
}
