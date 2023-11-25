#include <stdio.h>

/**
 * description:  a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * putchar can be used only twice
 * return 0;
 */
void print_alphabet_x10(void);

int main()
{
 int count;
 for(count = 0; count < 10; count++){
   print_alphabet_x10();
   putchar('\n');
 }
   return 0;
}

void print_alphabet_x10(void){
 int alpha;
 for(alpha = 97; alpha <= 122; alpha++){
   putchar(alpha);
 }
}
