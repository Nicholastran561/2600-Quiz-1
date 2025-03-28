#include <string.h> 
#include <stdlib.h> 
#include "employee.h"

int main(void){ 
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char * phoneNumberToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind); 

    //defined in employeeTable.c 
    extern Employee EmployeeTable[]; 
    extern const int EmployeeTableEntries;  

    PtrToEmployee matchPtr; //Declaration 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID is NOT found in the record\n"); 
    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 

    printf("\nQuiz Portion\n\n");

    //Example of not found phone number
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "909-555-1232"); 
    
    if (matchPtr != NULL) 
        printf("Employee Phone Number 909-555-1232 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone Number 909-555-1232 is NOT found in the record\n"); 

    //Example of found phone number
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "909-555-1235"); 
    
    if (matchPtr != NULL) 
        printf("Employee Phone Number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone Number 909-555-1235 is NOT found in the record\n"); 
    
    //Example of found salary
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.33); 

    if (matchPtr != NULL) 
        printf("Employee Salary 6.33 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary 6.33 is NOT found in the record\n"); 
    
    //Example of not found salary
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34); 
    if (matchPtr != NULL) 
        printf("Employee Salary 6.34 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary 6.34 NOT found in the record\n"); 
    
    return EXIT_SUCCESS;
} 