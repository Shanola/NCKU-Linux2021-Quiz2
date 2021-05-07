#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int power_of_two(uint16_t N)
{
    N |= N >> 1;
	N |= N >> 2;
	N |= N >> 4;
	N |= N >> 8;
	return (N + 1) >> 1;
}

int main()
{
    uint16_t n=0;
	printf("Please input a number: ");
	scanf("%hd", &n);
	printf("Ans = %hd\n", power_of_two(n));
    return 0;
}
