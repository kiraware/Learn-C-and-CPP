//* typesize.c -- prints out type sizes */
#include <stdio.h>
int main(void)
{
/* c99 provides a %zd specifier for sizes */
printf("Type int has a size of %zd bytes.\n", sizeof(int));
printf("Type char has a size of %zd bytes.\n", sizeof(char));
printf("Type long has a size of %zd bytes.\n", sizeof(long));
printf("Type long long has a size of %zd bytes.\n",
sizeof(long long));
printf("Type double has a size of %zd bytes.\n",
sizeof(double));
printf("Type long double has a size of %zd bytes.\n",
sizeof(long double));

printf("Type int has a size of %d bytes.\n", sizeof(int));
int a;
printf("%d  %d  %d  ",sizeof a, sizeof(a), sizeof(int));

printf("%lu   %uluu     %llu",100000000UL,100000000UL,1000000000000000000ULL);
return 0;
}