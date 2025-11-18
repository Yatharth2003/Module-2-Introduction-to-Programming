#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    float marks;
};

int main() {
    struct Student s[3];  
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        getchar(); 
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name       : %s", s[i].name);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("Marks      : %.2f\n", s[i].marks);
    }

    return 0;
}