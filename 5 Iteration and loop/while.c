#include <stdio.h>
int main()
{
  // initialization
  int num = 1;
  while (num <= 10) // condition
  {
    printf("%d\n", num);
    num = num + 1; // updation
  }

  printf(" First Loop has ended\n");

  int num2 = 100;
  while (num2 > 0)
  {
    printf("%d\n", num2);
    num2--;
  }
   printf(" Second Loop has ended\n");

  return 0;
}