#include <stdio.h>

#define FLAG_ENABLED  // Comment or uncomment this line to enable/disable the flag

int main() {
#ifdef FLAG_ENABLED
    printf("Flag is enabled!\n");
#else
    printf("Flag is disabled!\n");
#endif

#ifndef FLAG_DISABLED
    printf("Flag is not disabled!\n");
#endif

#ifdef ANOTHER_FLAG
    printf("Another flag is defined!\n");
#else
    printf("Another flag is not defined!\n");
#endif

#ifdef YET_ANOTHER_FLAG
    printf("Yet another flag is defined!\n");
#else
    printf("Yet another flag is not defined!\n");
#endif

    return 0;
}
// program 18
