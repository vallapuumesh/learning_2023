/*Write a function to sort the array of structures in descending order based on marks */
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Comparison function for qsort
int compareStudents(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;

    // Sort in descending order based on marks
    if (studentA->marks > studentB->marks) {
        return -1;
    } else if (studentA->marks < studentB->marks) {
        return 1;
    } else {
        return 0;
    }
}

void sortstudents(struct Student* students, int numStudents) {
    qsort(students, numStudents, sizeof(struct Student), compareStudents);
}

int main() {
    // Assume the array of structures is already initialized and populated
    struct Student students[] = {
        {1001, "umesh", 100.00},
        {1002, "nivas", 95.50},
        {1003, "arjun", 89.75}
    };

    int numStudents = sizeof(students) / sizeof(students[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    sortstudents(students, numStudents);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}