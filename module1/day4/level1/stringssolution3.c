//compute total seconds
#include <stdio.h>
int main()
{
    int hours ,minutes,seconds;
    
    printf("enter the hours:");
    scanf("%d",&hours);
    
    printf("\n");
    
    printf("enter the minutes :");
    scanf("%d",&minutes);
    
    printf("\n");
    
    printf("enter the seconds:");
    scanf("%d",&seconds);
    
    printf("\n");
    
    int total =(hours * 3600)+(minutes * 60)+(seconds);
    printf("total seconds: %d",total);
    
    return 0;
    
}