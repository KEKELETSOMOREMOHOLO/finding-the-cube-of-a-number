#include<stdio.h>
#include<math.h>

int main()
{
  int a;
  
  printf("Enter a number to check its cube: \n);
  scanf("%d",&a);
         
  int cube = a*a*a;
  printf("The cube of %d is %d",a,cube);
         return 0;
}
