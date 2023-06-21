/* Write a function to display all members in the above array of structures*/
#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displaystudents(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    
    struct Student students[] = {
        {1001, "umesh", 100.00},
        {1002, "nivas", 95.50},
        {1003, "arjun", 89.75}
    };

    int numStudents = sizeof(students) / sizeof(students[0]);

    displaystudents(students, numStudents);

    return 0;
}