#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 5
#define MAX_NAME_LENGTH 50
#define MAX_SUBJECT_LENGTH 50

int main() {
    char studentNames[NUM_STUDENTS][MAX_NAME_LENGTH];
    char subjects[NUM_SUBJECTS][MAX_SUBJECT_LENGTH];

    // Input student names
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(studentNames[i], MAX_NAME_LENGTH, stdin);
    }

    // Input subjects
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Enter name for subject %d: ", i + 1);
        fgets(subjects[i], MAX_SUBJECT_LENGTH, stdin);
    }

    // Display student names
    printf("\nStudent Names:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %s", i + 1, studentNames[i]);
    }

    // Display subjects
    printf("\nSubjects:\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: %s", i + 1, subjects[i]);
    }

    return 0;
}