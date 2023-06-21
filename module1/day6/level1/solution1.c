/*1. Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

Note: User must be able define the no. of inputs/size of the array during runtime.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseinputString(const char* inputString, struct Student* students, int numStudents) {
    char temp[100];
    char *token;
    int i = 0;
    
    strcpy(temp, inputString);
    token = strtok(temp, " ");
    
    while (token != NULL && i < numStudents) {
        students[i].rollno = atoi(token);
        
        token = strtok(NULL, " ");
        if (token != NULL) {
            strncpy(students[i].name, token, sizeof(students[i].name) - 1);
            students[i].name[sizeof(students[i].name) - 1] = '\0';
        }
        
        token = strtok(NULL, " ");
        if (token != NULL) {
            students[i].marks = atof(token);
        }
        
        i++;
        token = strtok(NULL, " ");
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    
    struct Student* students = malloc(numStudents * sizeof(struct Student));
    
    getchar();  
    
    char inputString[100];
    printf("Enter the student details (rollno name marks): \n");
    
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';  
    
    parseInputString(inputString, students, numStudents);
    
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
    
    free(students);
    
    return 0;
}