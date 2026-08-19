#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};
// example by value
void set_age_by_value(struct Student s, int new_age){
    s.age = new_age;
}
// example by pointers
void set_age_by_pointers(struct Student *s, int new_age){
    s->age = new_age;
}

int main(){
    struct Student student1;
    strcpy(student1.name, "Ali");
    student1.age = 20;

    printf("before: %s, %d\n", student1.name, student1.age);

    // by value
    set_age_by_value(student1, 25);
    printf("after by value: %s, %d\n", student1.name, student1.age);

    // by pointers
    set_age_by_pointers(&student1, 25);
    printf("after by pointer: %s, %d\n", student1.name, student1.age);

    return 0;

}
