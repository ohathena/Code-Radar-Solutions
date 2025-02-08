#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n], topStudent;
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%f", &students[i].marks);
        
        while (getchar() != '\n');
        fgets(students[i].name, sizeof(students[i].name), stdin);
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }
    }

    topStudent = students[0];

    for (i = 1; i < n; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    printf("\nTop Scorer:\n");
    printf("Roll Number: %d, ", topStudent.roll);
    printf("Name: %s, ", topStudent.name);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}
