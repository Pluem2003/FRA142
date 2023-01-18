#include <iostream>  
using namespace std;  

int main()
{
    //Create Variable and Pointer
    int x = 2;          //assign value in variable
    int *ptr_x;         //define pointer type
    ptr_x = &x;         //stores the address of x to pointer's memory (&x = address of x)

    //Change Variable Value by Pointer 
    *ptr_x = 7;        //change value in x (*ptr_x = dereference ptr_x)  

    //Initial Pointer in Proper  Way
    int *ptr_y = NULL;
    int y = 1.5;
    ptr_y = &y; 

    //Other types of Pointer
    float *f = NULL;
    double *d = NULL;
    char *c = '\0';
    bool *b = NULL;

    return 0;
}



