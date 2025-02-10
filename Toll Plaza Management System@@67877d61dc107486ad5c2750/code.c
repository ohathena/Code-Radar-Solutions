#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n], theStudent;
    int i;
    float x = 0.00;
    float y = 0.00;
    float x = 0.00;

    for (i = 1; i <= n; i++) {
        scanf("%s", &students[i].roll);
        scanf("%s", &students[i].name);
        scanf("%f", &students[i].salary);
        // if (students[i].name == "Car") {
        //     x+= students[i].salary;
        // }
        // else if(students[i].name=="Truck"){
        //     y+= students[i].salary;
        // }
        // else if(students[i].name=="Bike"){
        //    z+= students[i].salary;
        // }
     

    }
       printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", x ,y,z );
     

    return 0;
}
