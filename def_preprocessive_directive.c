#include <stdio.h>

#define IND 1
#define USA 2
#define UK  3

#define COUNTRY USA

int main()
{
	#if COUNTRY == USA
		printf("Selected country code is: %d\n", COUNTRY);
        // Do some task if country is India
	#elif COUNTRY == IND
		printf("Selected country code is: %d\n", COUNTRY);
        // Do some task if country is USA
	#else
		printf("Selected country code is: %d\n", COUNTRY);
        // Do some task if country is UK
	#endif
	
	return 0;
}
