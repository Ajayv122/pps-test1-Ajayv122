#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("Enter three numbers");
  scanf("%d%d%d",a,b,c);

}
void comp(int a,int b,int c, int *big)
{
  if((a>b)&&(a>c))
  *big = a;
  else if((b>a) && (b>c))
  *big = b;
  else 
  *big = c;
}
void output(int big)
{
  printf("Biggest id %d",big);

}
int main()
{
  int x,y,z,big;
  input(&x,&y,&z);
  comp(x,y,z,&big);
  output(big);
  return 0;
}