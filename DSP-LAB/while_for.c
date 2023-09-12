#include<stdio.h>
int main()
{
  int cnt=1,num;
  printf("Enter the number:\n");
  scanf("%d",&num);
  while(cnt<=10)
  {
    printf("%d  \n",num*cnt);
    //cnt;
    cnt++;
  }
  printf("\n");
  for(cnt=10;cnt>=1;cnt--)
  {
    printf("%d \n",num*cnt);
  }
  printf("\n");
  int x,fact=1;
  do {
  printf("enter the positive no\n");
  scanf("%d",&x);
  for(;x<=0;++x)
  fact=fact*x;
  }while(x<0);
  
  printf("factorial:%d\n",fact);
  return 0;
  }
