#include <iostream>
#include <string>

using namespace std;

void variabletypes(){

    char test1;
    int lenTest2;
    double lenTest3;
    float lenTest4;
    bool test5;

    cout << "-----------------------------------------------------" << endl;
    cout << "length of string object : " << lenTest2 << endl;
    cout << "Size of int variable : " << sizeof(lenTest2) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "length of string object : " << lenTest3 << endl;
    cout << "Size of int variable : " << sizeof(lenTest3) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "length of string object : " << lenTest4 << endl;
    cout << "Size of int variable : " << sizeof(lenTest4) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

    string test2 = "Hello World!";
    lenTest2 = test2.size()/sizeof(char);
    lenTest3 = test2.size()/sizeof(char);
    lenTest4 = test2.size()/sizeof(char);

    test1 = 116;
    cout << "Charactor : " << test1 << endl;
    test1 = 't';
    cout << "Charactor : " << test1 << endl;
    cout << "Size of char variable : " << sizeof(test1) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "String : " << test2 << endl;
    cout << "Size of string object : " << test2.size() << " bytes." << endl;
    cout << "length of string object : " << lenTest2 << " letters." << endl;
    cout << "Size of int variable : " << sizeof(lenTest2) << " bytes." << endl;
    cout << "length of string object : " << lenTest3 << " letters." << endl;
    cout << "Size of int variable : " << sizeof(lenTest3) << " bytes." << endl;
    cout << "length of string object : " << lenTest4 << " letters." << endl;
    cout << "Size of int variable : " << sizeof(lenTest4) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Boolean : " << test5 << endl;
    test5 = (lenTest2 < lenTest3);
    cout << "Boolean : " << test5 << endl;
    cout << "Size of boolean variable : " << sizeof(test5) << " bytes." << endl;
    cout << "-----------------------------------------------------" << endl;

}

void switchCase(){
    int monthNum = 0;
    cout << "Month number : ";
    cin >> monthNum;
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
    int a;
    cout << "Input some counting number : ";
    cin >> a;
    cout << "Result of a < 5 : " << (a < 5) << endl;
    if (a < 5){
        cout << "variable a is lower than 5." << endl;
    }
    else if (a > 5){
        cout << "variable a is greater than 5." << endl;
    }
    else{
        cout << "variable a is equal to 5." << endl;
    }
}

void whileLoop(){
    int i = 0;
    int b = 0;
    cout << "Input some counting number : ";
    cin >> b;
    cout << "b : " << b << endl;
    while (b > 5){
        i++;
        b -= i;
        cout << "b : " << b << endl;
    }
}

void forLoop(){
    int c = 0;
    cout << "Input some counting number : ";
    cin >> c;
    for (int j = 0; j < c; j++){
        cout << "j : " << j << endl;
    }
}

int main(){
    cout << "Welcome to 1st lab in FRA142" << endl;
    variabletypes();
    // switchCase();
    // ifElse();
    // whileLoop();
    // forLoop();
    return 0;
}