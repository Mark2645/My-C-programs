//c functions.
#include<stdio.h> 
int multiply (int x, int y) {
  int ans;
  ans=x*y;
  return ans;//multiplication function
}
int addition(int b, int c)
{
int z;
z= b+c;
return z;//addition function
}
int main () {
  int result, sum, a ,b;
  printf("enter two numbers\n");
  scanf("%d\n%d", &a, &b);
  result =multiply (a,b);
  sum= addition( a,b);
  printf("the ans is %d\n", result);
    printf("the ans is %d\n", sum);
  return 0;
}