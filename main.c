#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};

struct Student s;

int main() {
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    
    printf("Enter name: ");
    scanf("%s", s.name);
    
    printf("Enter age: ");
    scanf("%d", &s.age);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
    
    return 0;
}
