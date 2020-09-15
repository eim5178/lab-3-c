// Author: Evelyn Moore eim5178@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 4
// Breakout: 

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n<=1){
    return 1;
  }
  else {
    return n+sum_n(n-1);
  }
}

void print_n(char *s, int n){
  if (n<=1){
    printf("%s",s);
  }
  else {
    printf("%s\n",s);
    n = n-1;
  }
}
int main(void) {
  int n = atof(readline("Enter an int: "));
  printf("sum is %d", sum_n(n));
  char *s = readline("Enter a string: ");
  return 0;
}