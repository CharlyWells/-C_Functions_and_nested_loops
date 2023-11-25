#include <stdio.h>

/**
 * description: a function that prints the alphabet, in lowercase, followed by a new line.
 * returns 0
 */
void print_alphabet(void);
int main()
{
  print_alphabet();
  return 0;
}

void print_alphabet(void){
int alpha;
for(alpha = 97; alpha <=122; alpha++)
  {
     putchar(alpha);
     putchar('\n');
  }
}
