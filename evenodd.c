#include<stdio.h>
int main()
{
int D;
scanf("%d",&D);
  if(D<0)
  {
    printf("invalid");
  }
  else
  {
    if(D%2==0)
printf("Even");
else
printf("Odd");
  }
return 0;
}
