#include <stdio.h>


int main()
{
	int dec = 0, number, base=1, mod, origin;
	printf("Enter the binary number: ") ;
	scanf("%d", &number);
	origin = number;
	while(number != 0)
	{
		mod = number%10;
		dec = dec + mod*base;
		number = number/10;
		base = base*2;

	}
	printf("Decimal equivalent of the binary number %d is: %d", origin, dec);

	return 0;

}