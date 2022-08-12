#include<stdio.h>
#include<stdlib.h>

void PRINT_N(int);
int f1(int);
int main()
{
  int N;
  printf("Enter any number:\n");
  scanf("%d",&N);
  f1(N);
  
  return 0;
}
// Here we need to create one more function which will 2X the value of n which is entered by the user.
int f1(x)
{
  
  x*=2;

  PRINT_N(x);
}

void PRINT_N(int n)
{
  
  
  

  if(n>=2)
  {

    printf("\n%d",n);
    printf("\n");
    PRINT_N((n-2));
  }
    

  
  
}
