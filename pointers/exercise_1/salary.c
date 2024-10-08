/* You can copy and run this on www.programiz.com/c-programming/online-compiler/ */

#include <stdio.h>

int main() {
    /* Create a program to change the value of a variable
       using a pointer.
       ** Get input value for a double variable salary
       ** Assign the address of salary to a double pointer.
       Now use the pointer to
       ** print the value of salary,
       ** increase the salary by 2 times,
       ** print the new salary.
    */
    double salary = 30000.00;
    double* salPtr = &salary; //Can be double *salPtr = &salary;

    // *salPtr = &salary; // Invalid. 
    // Should be the value stored in salary not its memory address

    // salPtr = salary; // Invalid. 
    // Should be the memory address of salary, not the value stored.

    printf("Salary: %lf\n", *salPtr);

    // Will override the value of the variable pointed to the dereferenced pointer
    *salPtr = salary * 2; 
    
    printf("Double Salary: %lf\n", *salPtr);

    return 0;
}
