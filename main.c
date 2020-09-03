#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *tem = readline("Enter temperature in celsius: ");
  double n = atof(tem);
  double c = (n*1.8 + 32);
  printf ("%f in Celsius is equivalent to %f Fahrenheit." n,c);
  return 0;
}