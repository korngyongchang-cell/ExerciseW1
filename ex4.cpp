#include <iostream>
#include <string>
struct Student{
    // declare 3 member variables:
    // - a string for the student's name
    // - an int for the student's age
    // - a float for the student's GPA

};

void printStudent(Student* s){
    // use the pointer (s) to print the student's info
    // Hint: use s->memberName to access each field
    // Expected output:
    // Name: Alice
    // Age:  20
    // GPA:  3.5    

}

void updateGPA(Student*s, float newGPA){
    // use the pointer (s) to update the student's GPA
    // Hint: assign newGPA to the gpa field through the pointer


}
int main (){
    // STEP 1: Create a Student variable and initialize it
    //         with a name, age, and GPA of your choice

    // STEP 2: Create a pointer (Student*) that points to your student
    //         Hint: use the & operator to get the address

    // STEP 3: Call printStudent() and pass your pointer to print the info

    // STEP 4: Call updateGPA() to change the GPA to a new value

    // STEP 5: Call printStudent() again to confirm the GPA was updated

}