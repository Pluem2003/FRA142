#include <iostream>  
using namespace std;  

//Function Changing Value in Number by Using Value (Call by Value)
void Call_by_Value(int var){
    var = 100;
}

//Function Changing Value in Number by Using Pointer (Call By Reference)
void Call_by_Reference(int *var){
    *var = 200;
}

int main()
{
    int var1 = 1;
    int var2 = 2;

    Call_by_Value(var1);

    Call_by_Reference(&var2);

    return 0;
}

