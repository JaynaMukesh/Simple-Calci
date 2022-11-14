#include <stdio.h>
#include <math.h>
int main(void) {
  float val1, val2, answer;
  char operator;

  printf("Enter the calculation: ");
  scanf("%f %c %f", &val1, &operator, & val2);

  switch (operator) {
  case '+':
    answer = val1 + val2;
    break;
  case '-':
    answer = val1 - val2;
    break;
  case '/':
    answer = val1 / val2;
    break;
  case '*':
    answer = val1 * val2;
    break;
    default:
    printf("Error!");
  }
  printf("Answer: %g", answer);
  return 0;
}