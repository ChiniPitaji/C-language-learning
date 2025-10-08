#include <stdio.h>
int main(){
  int num1,num2,sum;
  printf("Welcome to sum calculator!!\n");
  printf("enter your first number: \n");
  scanf("%d",&num1);
  printf("enter your second number: \n");
  scanf("%d",&num2);

  sum=num1+num2;
  printf("The Sum is : %d\n",sum);
  return 0;
}