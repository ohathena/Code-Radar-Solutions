#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};


int compareMarks(const void *a, const void *b) {
    struct Student *sA = (struct Student *)a;
    struct Student *sB = (struct Student *)b;
  
    if (sB->marks > sA->marks) {
        return 1; 
    } else if (sB->marks < sA->marks) {
        return -1; 
    } else {
        return 0; 
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%f", &students[i].marks);
        scanf("%s", students[i].name);  
    }

    qsort(students, n, sizeof(struct Student), compareMarks);

    for (i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
    }

    return 0;
}
