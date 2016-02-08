#include <stdio.h>

int main(void)
{
  // you can declare several variables of the same type
  // by using coma(s)
  int i, j;
  char c;

  i = 98;
  j = 0;
  c = 'd'; // we could also write c = 100, cf man ascii
  /* if statements evaluat boolean expressions.
   * if the evaluation is true, then the block will be executed
   */
  if (i < 50)
    {
      printf("%d < 50 is true\n", i);
    }
  if (i >= 50)
    {
      printf("%d >= 50 is true\n", i);
    }
  if (c < 102)
    {
      printf("%c (%d) < %d (%c) is true\n", c, c, 102, 102);
    }
  if (c >= 102)
    {
      printf("%c (%d) >= %d (%c) is true\n", c, c, 102, 102);
    }
  if (j == 0)
    {
      printf("ZERO!\n");
    }
  if (j < i)
    {
      printf("j (%d) < i (%d)\n", j, i);
    }
  /* An if statement can be followed by an optional else statement,
   * which executes when the boolean expression is false.
   */
  if (i == j)
    {
      printf("i equals j\n");
    }
  else
    {
      printf("i != j\n");
    }
  return (0);
}