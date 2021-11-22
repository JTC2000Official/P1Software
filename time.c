#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

signed int getTime(void);

int main(void) {
    return EXIT_SUCCESS;
}

/* signed int getTime(void) {
    signed int returnVal;
    time_t now = time(0);
    struct tm *tm;
    if ((tm = localtime (&now)) == NULL) {
        printf ("Error extracting time stuff\n");
    }
    returnVal = "%02d\n", tm->tm_sec;
    return returnVal;
}
*/
