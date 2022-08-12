#include<stdio.h>
#include<stdlib.h>

void PRINT_N(int);
int main()
{
  int N;
  printf("Enter any number:\n");
  scanf("%d",&N);
  PRINT_N(N);
  return 0;
}

void PRINT_N(int n)
{
  if(n>0)
  {
    
    PRINT_N(n-1);
    printf("\n%d",n);

  }
  printf("\n");
}
