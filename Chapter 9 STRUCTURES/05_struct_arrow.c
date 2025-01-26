#include <stdio.h>

struct employee {
    char name[50];
    int age;
    float salary;
};

void show(struct employee emp) {
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    struct employee emp1 = {"John Doe", 30, 55000.50};
    
    show(emp1);
    
    return 0;
}
