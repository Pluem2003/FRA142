#include <iostream>  
using namespace std;  
#include<tuple>

//Function Changing Value in Number by Using Value (Call by Value)
tuple <int, int> callByValue(int var1, int var2){
    return make_tuple(var2, var1);
}

//Function Changing Value in Number by Using Pointer (Call By Reference)
void callByReference(int *var1, int *var2){
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main()
{
    int varValue1 = 1;
    int varValue2 = 2;

    cout<<"\nvarValue1:"<<varValue1<<endl;
    cout<<"varValue2:"<<varValue2<<endl;

    tie(varValue1, varValue2) = callByValue(varValue1, varValue2);

    cout<<"\nvarValue1:"<<varValue1<<endl;
    cout<<"varValue2:"<<varValue2<<endl;

    int varRef1 = 1;
    int varRef2 = 2;

    cout<<"\nvarRef1:"<<varRef1<<endl;
    cout<<"varRef2:"<<varRef2<<endl;

    callByReference(&varRef1, &varRef2);
    
    cout<<"\nvarRef1:"<<varRef1<<endl;
    cout<<"varRef2:"<<varRef2<<endl;

    return 0;
}
