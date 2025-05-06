#include <iostream>
#include <string>
#include "header.hpp"
using namespace std;
int multiplyNumber(int num) {
    return num * 3;
}

double multiplyNumber(double num) {
    return num * 3;
}

int dataTypeCheck(string& num) {

    /*
    .find is native to the string library and locates and returns the index value of the searched for item if it exists
    when using as a comparison != to return a boolean statement if the item is found a index it return its interpreted a true and if isnt as false 
     npos is a constant  when the item is not found returns a boolean of false 
     the != comparison is comparing if the search for value isnt found
     if the value is found then it will return a value of true as it would mean it is infact not equal to npos 
     and false if it is equal to it
    */ 
    bool containsDecimal = (num.find('.') !=  string::npos);

    if (containsDecimal == true) { 

        int decimalIndex = num.find('.');

        bool greaterThanZero = false; 

        for (int i = decimalIndex + 1; i < num.length(); i++) {
            if (num[i] > '0') {
                greaterThanZero = true;
                break;
            }
        }
         
         if (greaterThanZero == true) {
            // string to double
            doubleNum = stod(num);
         } else {
            // string to int 
            intNum = stoi(num);
         }
    } else {
        intNum = stoi(num);
    }
    
    return 0;
}


int overloadExecution () {
    if (doubleNum > 0) {
        cout <<  multiplyNumber(doubleNum) << "\n";
    } else {
        cout << multiplyNumber(intNum) << "\n";
    }
    return 0; 

}