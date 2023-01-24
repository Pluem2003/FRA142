#include <iostream>
#include <string>

using namespace std;

void variabletypes(){

    char charExample;
    int intExample;
    double doubleExample;
    float floatExample;
    bool booleanExample;

    cout << "-----------------------------------------------------" << endl;
    cout << "Value of intExample : " << intExample << endl;
    cout << "Size of intExample : " << sizeof(intExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Value of doubleExample : " << doubleExample << endl;
    cout << "Size of doubleExample : " << sizeof(doubleExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Value of floatExample : " << floatExample << endl;
    cout << "Size of floatExample : " << sizeof(floatExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    intExample = 100;
    doubleExample = 10.5;
    floatExample = 100.5;

    char charArrayExample[13] = "Hello World!";

    cout << "Character : " << charExample << endl;
    cout << "Size of char variable : " << sizeof(charExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    charExample = 116;
    cout << "Character : " << charExample << endl;
    charExample = 't';
    cout << "Character : " << charExample << endl;
    cout << "Size of char variable : " << sizeof(charExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Character array : " << charArrayExample << endl;
    cout << "Size of character array : " << sizeof(charArrayExample) << " bytes." << endl;
    cout << "Size of character array : " << (sizeof(charArrayExample)/sizeof(char))-1 << " letters." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Value of intExample : " << intExample << endl;
    cout << "Size of intExample : " << sizeof(intExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Value of doubleExample : " << doubleExample << endl;
    cout << "Size of doubleExample : " << sizeof(doubleExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Value of floatExample : " << floatExample << endl;
    cout << "Size of floatExample : " << sizeof(floatExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Value of booleanExample : " << booleanExample << endl;
    booleanExample = (doubleExample < floatExample);
    cout << "Value of booleanExample : " << booleanExample << endl;
    cout << "Size of booleanExample : " << sizeof(booleanExample) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
}

void switchCase(){
    int monthNum = 5;
    switch (monthNum){
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "Febuary" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default: 
            cout << "Out of month name list" << endl;
            break;
    }
}

void ifElse(){
    int conditionVariable = 0;
    cout << "Result of a < 5 : " << (conditionVariable < 5) << endl;
    if (conditionVariable < 5){
        cout << "variable a is lower than 5." << endl;
    }
    else if (conditionVariable > 5){
        cout << "variable a is greater than 5." << endl;
    }
    else{
        cout << "variable a is equal to 5." << endl;
    }
}

void doWhileLoop(){
    int conditionVariable = 5;
    do {
        conditionVariable--;
        cout << "Value of conditionVariable : " << conditionVariable << endl;
    }
    while (conditionVariable > 5);
}

void whileLoop(){
    int conditionVariable = 10;
    while (conditionVariable > 5){
        conditionVariable--;
        cout << "Value of conditionVariable : " << conditionVariable << endl;
    }
}

void forLoop(){
    int conditionVariable = 10;
    for (int forLoopVariable = 0; forLoopVariable < conditionVariable; forLoopVariable++){
        cout << "Value of forLoopVariable : " << forLoopVariable << endl;
    }
}

int main(){
    variabletypes();
    // switchCase();
    // ifElse();
    // doWhileLoop();
    // whileLoop();
    // forLoop();
    return 0;
}