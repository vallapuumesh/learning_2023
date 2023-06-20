/* Write a program using structures to calculate the difference between two time periods using a user-defined function.*/
#include <stdio.h>
#include <stdlib.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct time calculatetime(struct time t1, struct time t2);

int main() {
    struct time starttime, endtime, difference;

    
    printf("Enter the starting time:\n");
    printf("enter Hours: ");
    scanf("%d", &starttime.hours);
    printf("enter Minutes: ");
    scanf("%d", &starttime.minutes);
    printf("enter Seconds: ");
    scanf("%d", &starttime.seconds);

    
    printf("\nEnter the ending time:\n");
    printf(" enterHours: ");
    scanf("%d", &endtime.hours);
    printf("enter Minutes: ");
    scanf("%d", &endtime.minutes);
    printf("enter Seconds: ");
    scanf("%d", &endtime.seconds);

    
    difference = calculatetime(starttime, endtime);

   
    printf("\nTime difference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}

struct time calculatetime(struct time t1, struct time t2) {
    struct time diff;

    
    int starttimeSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int endtimeSeconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    
    int diffSeconds = abs(starttimeSeconds - endtimeSeconds);

    
    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}