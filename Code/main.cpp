#include <iostream>
#include <string>

using namespace std;

void variabletypes(){

    char charVariable;
    int intVariable;
    double doubleVariable;
    float floatVariable;
    bool booleanVariable;

    cout << "-----------------------------------------------------" << endl;
    cout << "Value of intVariable : " << intVariable << endl;
    cout << "Size of intVariable : " << sizeof(intVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Value of doubleVariable : " << doubleVariable << endl;
    cout << "Size of doubleVariable : " << sizeof(doubleVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Value of floatVariable : " << floatVariable << endl;
    cout << "Size of floatVariable : " << sizeof(floatVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    intVariable = 100;
    doubleVariable = 10.5;
    floatVariable = 100.5;

    char charArrayVariable[] = "Hello World!";
    int intArrayVariable[] = {1, 2, 3, 4};

    cout << "Character : " << charVariable << endl;
    cout << "Size of charVariable : " << sizeof(charVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    charVariable = 116;
    cout << "Character : " << charVariable << endl;
    charVariable = 't';
    cout << "Character : " << charVariable << endl;
    cout << "Size of charVariable : " << sizeof(charVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Value of intVariable : " << intVariable << endl;
    cout << "Size of intVariable : " << sizeof(intVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Value of doubleVariable : " << doubleVariable << endl;
    cout << "Size of doubleVariable : " << sizeof(doubleVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Value of floatVariable : " << floatVariable << endl;
    cout << "Size of floatVariable : " << sizeof(floatVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Value of booleanVariable : " << booleanVariable << endl;
    cout << "Size of booleanVariable : " << sizeof(booleanVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    booleanVariable = (doubleVariable < floatVariable);
    cout << "Value of booleanVariable : " << booleanVariable << endl;
    cout << "Size of booleanVariable : " << sizeof(booleanVariable) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Character array : " << charArrayVariable << endl;
    cout << "Size of character array : " << sizeof(charArrayVariable) << " bytes." << endl;
    cout << "Length of character array : " << (sizeof(charArrayVariable)/sizeof(char))-1 << " letters." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Int array : {" << intArrayVariable[0] << ", " << intArrayVariable[1] << ", " << intArrayVariable[2] << ", " << intArrayVariable[3] << "}" << endl;
    cout << "Size of int array : " << sizeof(intArrayVariable) << " bytes." << endl;
    cout << "Length of int array : " << (sizeof(intArrayVariable)/sizeof(int)) << " numbers." << endl;
    cout << "-----------------------------------------------------" << endl;
}

void switchCase(){

    int monthNum = 2;
    
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
    int conditionVariable = 6;
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
        cout << "Value of conditionVariable : " << conditionVariable << endl;
        conditionVariable++;
    }
    while (conditionVariable > 5 && conditionVariable < 10);
}

void whileLoop(){
    int conditionVariable = 10;
    while (conditionVariable > 5){
        cout << "Value of conditionVariable : " << conditionVariable << endl;
        conditionVariable--;
    }
}

void forLoop(){
    int conditionVariable = 10;
    for (int forLoopVariable = 0; forLoopVariable < conditionVariable; forLoopVariable++){
        cout << "Value of forLoopVariable : " << forLoopVariable << endl;
    }
}

int main(){
    // variabletypes();
    // switchCase();
    // ifElse();
    // doWhileLoop();
    whileLoop();
    // forLoop();
    return 0;
}