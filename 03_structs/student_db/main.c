#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int age;
    float grade;
};

int main(){
    struct Student students[100];
    strcpy(students[0].name, "Abdulkhamid");
    students[0].age = 21;
    students[0].grade = 2.67;

    int count = 1;

    for (int i = 0; i < count; i++){
        printf("%d. %s, %d, %.2f", 
        i + 1, students[i].name, students[i].age, students[i].grade);
    }

    return 0;
}