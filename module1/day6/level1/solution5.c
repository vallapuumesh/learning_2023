/*Write a function to perform a search operation on the array of structures based on name of the student*/
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchstudentname(const struct Student* students, int numStudents, const char* targetName) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, targetName) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
            found = 1;
        }
    }

    if (!found) {
        printf("Student not found with the name: %s\n", targetName);
    }
}

int main() {
    struct Student students[] = {
        {1001, "umesh", 100.00},
        {1002, "nivas", 95.50},
        {1003, "arjun", 89.75}
    };

    int numStudents = sizeof(students) / sizeof(students[0]);

    char targetName[20];
    printf("Enter the name of the student to search: ");
    scanf("%19s", targetName);

    searchstudentname(students, numStudents, targetName);

    return 0;
}
