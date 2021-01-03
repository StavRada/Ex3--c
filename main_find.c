#include "find_text.h"
#include <stdio.h>
int main(int argc, char const *argv[]) {
  char arr[WORD];
  int n=getword(arr);
  char x=getchar();
  switch (x)
   {
       case 'a':print_lines(arr);
               break;
       case 'b':print_similar_words(arr);
                break;
       default:
                break;
   }
  return 0;
}
