#include <stdio.h>
int main()
{
  int age;
  char is_indian;
  printf("Welcome to ARTo..\n Please Enter Your Age:\n");
  scanf("%d", &age);
  printf("Are you an Indian(Y/N): ");
  scanf(" %c",&is_indian);

  if (is_indian=='Y'&& age>=18 && age<70)
  {
  printf("you are eligible for  a license.\n");
  }else{
    printf("you are not eligible.\n");
  }








  // printf("Your age is %d\n", age);

  // if (is_indian=='Y')
  // {
      
  // if (age < 18)
  // {
  //   printf("you are too young, please apply after you are 18\n");
  // }
  // else if (age > 70)
  // {
  //   printf("you are senior,you can not apply anymore.\n");
  // }else{
  //   printf("you are eligible for  a license.\n");
  // }
  // }else{
  //   printf("only Indian citizens can appply");
  // }


  return 0;
}