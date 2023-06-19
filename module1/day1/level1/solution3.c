#include<stdio.h>
int main()
{
   int rollno;
   char * name[50];
   float physics,maths,chemistry;
   float total,percentage;
   printf("enter the roll number:");
   scanf("%d",&rollno);
   printf("enter the name:");
   scanf("%s",&name);
   printf("enter the  physics marks:");
   scanf("%f",&physics);
   printf("enter the maths marks ");
   scanf("%f",&maths);
   printf("enter the chemistry marks:");
   scanf("%f",&chemistry);
   
    total=(physics+maths+chemistry);
    percentage=(total/300)*100;
    printf("total marks :%f\n",total);
    printf("percentage of total marks :%f\n",percentage);
    
    printf("\n");
    printf("Summary:\n");
    printf("Roll No: %d\n", rollno);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics);
    printf("Math Marks: %.2f\n", maths);
    printf("Chemistry Marks: %.2f\n", chemistry);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;

}