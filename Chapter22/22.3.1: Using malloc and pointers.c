#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int* numPtr1 = NULL;
   int* numPtr2 = NULL;

   /* Your solution goes here  */

   *numPtr1 = 44;
   *numPtr2 = 99;

   printf("numPtr1 = %d, numPtr2 = %d\n", *numPtr1, *numPtr2);

   free(numPtr1);
   free(numPtr2);

   return 0;
}
