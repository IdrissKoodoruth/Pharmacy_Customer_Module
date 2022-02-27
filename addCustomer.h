#ifndef CUSTOMER_ADD_FILE
#define CUSTOMER_ADD_FILE
#include <stdio.h>
#include <stdlib.h>


void customeradd()
{
    FILE *ptr;
    char data[60];
    int i;
    printf("Input a customer:");
    gets(data);

    ptr = fopen("C:/Users/idris/Desktop/UOM_Classes/Semester_1_Y_2/Software_Engineering/Pharmacygpw/Customers.txt", "a") ;


    fputs(data, ptr) ;
    fputs("\n", ptr) ;

    fclose(ptr) ;

}
#endif
