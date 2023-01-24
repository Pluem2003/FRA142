#include <iostream>  
using namespace std;  

//Function Changing Value in Number by Using Value (Call by Value)
void callByValue(int var){
    var = 100;
}

//Function Changing Value in Number by Using Pointer (Call By Reference)
void callByReference(int *var){
    *var = 200;
}

int main()
{
    int var1 = 1;
    int var2 = 2;

    callByValue(var1);

    callByReference(&var2);

    return 0;
}

