// Author: Evelyn Moore
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

void print_n(const char *s, int n){
  if (n<=1){
    printf("%s",s);
  }
  else {
    printf("%s",s);
    n = n-1;
  }
}
int main(void) {
  int n = atof(readline("Enter an int: "));
  char *s = readline("Enter a string: ");
  printf("sum is %d", sum_n(n));
  return 0;
}