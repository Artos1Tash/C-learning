#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;

    // Get the current time in seconds since the epoch
    time(&rawtime);

    // Convert the raw time to local time
    timeinfo = localtime(&rawtime);

    // Print the formatted local time
    printf("Current local time: %s", asctime(timeinfo));

    return 0;
}
