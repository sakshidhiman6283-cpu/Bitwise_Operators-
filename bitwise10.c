#include <stdio.h>

int main()
{

   int num = 10;
   int pos = 1;

   if (num & (1 << pos))
   printf("Bit is SET\n");
   else
   printf("Bit is CLEAR\n");

    return 0;
}