/*Write a function to initialize all members in the above array of structures*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &(students[i].rollno));

        printf("Name: ");
        scanf("%19s", students[i].name);

        printf("Marks: ");
        scanf("%f", &(students[i].marks));

        printf("\n");
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = malloc(numStudents * sizeof(struct Student));

    initializeStudents(students, numStudents);

    // Print the array of structures
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);

    return 0;
}