#include <stdio.h>
#define ABS(x) (((x) < 0) ? -(x) : (x));
int main()
{
int num = -5;
int absnum = ABS(num);
printf("Absolute Value of %d is %d\n", num, absnum);
return (0);
}
