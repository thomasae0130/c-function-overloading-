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

int stringCheck(string& num) {
        while(true) {
          try {
            double value  = stod(num);
            cout << "Good Boy" << "\n";
            break;
          } catch (const invalid_argument& e) {
            cout << "input a integer or decimal." << "\n";
            cin >> num;
          }
        }
          return 0;   
}

int dataTypeCheck(string& num) {

    /*
    .find is native to the string library and locates and returns the index value of the searched for item if it exists
    when using as a comparison != to return a boolean statement if the item is found the index value it returns is interpreted a true and if it isnt as false 
     string::npos is a constant  when the item is not found returns a boolean of false 
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

        greaterThanZero == true ? doubleNum = stod(num) : intNum = stoi(num);
        
    } else {
        intNum = stoi(num);
    }
    
    return 0;
}


int overloadExecution () {
    
    doubleNum > 0 ? cout << "Your number is " <<  multiplyNumber(doubleNum) << "\n" : cout << "Your number is " <<  multiplyNumber(doubleNum) << "\n";
    return 0; 

}