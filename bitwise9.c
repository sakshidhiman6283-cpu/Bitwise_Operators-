#include <stdio.h>

int main()
{

   int num = 10;
   int pos = 1;

   num = num ^ (1 << pos);

   printf("Result = %d\n", num);

    return 0;
}