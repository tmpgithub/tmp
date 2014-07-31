#include <stdio.h>
#include <tmpsample.h>

#include <time.h>

void printDateAndTime(void) {

    time_t raw_time;    
    time(&raw_time);

    struct tm *current_time = localtime(&raw_time);

    printf("Current date and time: %d/%.2d/%d - %d:%d\n",current_time->tm_mday, 
            current_time->tm_mon, current_time->tm_year + 1900,
            current_time->tm_hour, current_time->tm_min);

    return;
}
