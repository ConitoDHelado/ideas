#include <stdio.h>
#include <time.h>

int main(void)

{
    time_t universal_time = time(NULL);
    struct tm *date = localtime(&universal_time);
    if (date->tm_year == 123 && date->tm_mon == 0 && date->tm_mday == 6)
    {
        printf("Yasmina\n");
    }
    else
    {
        printf("Loading...\n");
    }
}
