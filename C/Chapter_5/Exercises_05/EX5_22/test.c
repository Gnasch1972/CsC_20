#include<stdio.h>
#include<math.h>

int main(void)
{
  int number = 10990;
  int r;
  int i;
  int temp;
  int power = 0;
  int divisor;
 
  while(number != 0)
  {
    temp = number;
    number = temp/10;
    power++;
  }
  number = 10990;
  for(i = power -1; i >= 0; i--)
  {
    divisor = (int) pow(10, i);
    printf("Digit = %d\n", number / divisor);
    number  = number % divisor;
    printf("number = %d\n", number);
  }

  return 0;
}
