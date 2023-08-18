#include <stdio.h>

int main() {

  char ch;
  float first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &ch);
  printf("Enter two operands: ");
  scanf("\n%f %f", &first, &second);

  switch (ch) {
    case '+':
      printf("%f + %f = %f", first, second, first + second);
      break;
    case '-':
      printf("%f - %f = %f", first, second, first - second);
      break;
    case '*':
      printf("%f * %f = %f", first, second, first * second);
      break;
    case '/':
      printf("%f / %f = %f", first, second, first / second);
      break;

    default:
      printf("Error! operator is not correct");
  }

  return 0;
}