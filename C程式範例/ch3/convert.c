/* convert.c -- automatic type conversions */
#include <stdio.h>
int main(void)
{
   unsigned char ch;
   int i;
   float fl;
   fl = i = ch = 'A';                  /* line 8  */
   printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
   ch = ch + 1;                        /* line 10 */
   i = fl + 2 * ch;                    /* line 11 */
   fl = 2.0 * ch + i;                  /* line 12 */
   printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
   ch = 5212205;                    /* line 14 */
   printf("Now ch = %c\n", ch);
   return 0;
}
