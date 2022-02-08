#include<stdio.h>
int input()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  return n;
}
int sum(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
  sum = sum +i;
  
  }
  return sum;
}
void output(int n,int sum)
{
  printf("Sum is %d ", sum);
 
}
int main()
{
  int n,su;
  n = input();
  su = sum(n);
  output(n,su);
  return 0;
}