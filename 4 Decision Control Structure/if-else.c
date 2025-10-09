#include <stdio.h>
int main(){
  int age;
  printf("Welcome to ARTo..\n Please Enter Your Age:\n");
  scanf("%d",&age);

  printf("Your age is %d\n",age);
  if (age>=18)
  {
    printf("you are eligible for  a license.\n");
  } else{
    printf("you are too young, please apply after you are 18\n");
  }
  
  return 0;
}