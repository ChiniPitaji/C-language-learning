#include <stdio.h>
int main(){
  int age;
  printf("Welcome to ARTo..\n Please Enter Your Age:");
  scanf("%d",&age);

  printf("Your age is %d",age);
  if (age>=18)
  {
    printf("you are eligible for  a license.\n");
  }
  
  return 0;
}