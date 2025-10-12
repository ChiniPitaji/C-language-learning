#include <stdio.h>
int main(int argc, char const *argv[])
{
  int num;
  printf("welcome to printing tables.");
  printf("\n\nPlease enter the number: ");
  scanf("%d",&num);

  for (int i = 0; i <=10; i++)
  {
    printf("%d X %d =%d\n",num,i,num * i);
  }
  
  return 0;
}
