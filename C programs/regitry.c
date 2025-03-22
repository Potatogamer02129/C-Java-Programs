
#include <stdio.h>
#include <string.h>

// Define structure Employee
struct Employee {
    int ID;
    char name[50]; // Increased the size to hold longer names if needed
    float salary;
};

// Function to input details of employees
void inputDetails(struct Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].ID);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); // To read strings with spaces
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
}

// Function to find the employee with the highest salary
struct Employee findHighestSalary(struct Employee employees[], int n) {
    struct Employee highest = employees[0]; // Initialize highest with the first employee
    
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > highest.salary) {
            highest = employees[i];
        }
    }
    
    return highest;
}

int main() {
    int n;
    
    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    // Declare an array of structures for n employees
    struct Employee employees[n];
    
    // Input details for each employee
    inputDetails(employees, n);
    
    // Find the employee with the highest salary
    struct Employee highestPaidEmployee = findHighestSalary(employees, n);
    
    // Display the details of the employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n", highestPaidEmployee.ID);
    printf("Name: %s\n", highestPaidEmployee.name);
    printf("Salary: %.2f\n", highestPaidEmployee.salary);
    
    return 0;

