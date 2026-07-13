#include <stdio.h>

int main()
{

   int num = 14;
   int pos = 2;

   num = num & -(1 << pos);

   printf("Result = %d\n", num);

    return 0;
}