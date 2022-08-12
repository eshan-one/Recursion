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
  int s;
  s = x*=2;
  s+=1;
  PRINT_N(s);
}

void PRINT_N(int n)
{
  
  
  

  if(n>1)
  {
   
    printf("\n%d",n-2);

    printf("\n");

    
    PRINT_N((n-2));
  }
    

  
  
}
