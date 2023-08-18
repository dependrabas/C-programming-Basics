#include <stdio.h>

int main() {

  float num1, num2, num3;

  printf("Enter First numbers: ");
  scanf("%f", &num1);
  printf("\nEnter second numbers: ");
  scanf("%f", &num2);
  printf("\nEnter third numbers: ");
  scanf("%f", &num3);

  if (num1 >= num2 && num1 >= num3)
    printf("%f is the greatest number.", num1);

  if (num2 >= num1 && num2 >= num3)
    printf("%f is the greatest number.", num2);
  if (num3 >= num1 && num3 >= num2)
    printf("%f is the greatest number.", num3);

  return 0;
}