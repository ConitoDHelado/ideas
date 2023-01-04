#include <stdio.h>
#include <time.h>
#include<unistd.h>

int main(void)

{
    char reyes;
    int timer;
    time_t universal_time = time(NULL);
    struct tm *date = localtime(&universal_time);   
    {
        printf("¿Es 6 de Enero de 2023?");
        
    }
    for (timer = 0; timer < 4; timer++)
    {
        printf(".");
        fflush(stdout);
        sleep(1);
    
    }       

        if (date->tm_year == 123 && date->tm_mon == 0 && date->tm_mday == 6)
        {
            reyes = 'S';
            printf(" %c", reyes);
            fflush(stdout);
            sleep(1);
            printf("\nEste regalo es para: Yasmina\n");
        }
        else
        {
            reyes = 'N';
            printf(" %c", reyes);
            fflush(stdout);
            sleep(1);
            printf("\nEspera hasta la mañana de Reyes\n");
        }
}