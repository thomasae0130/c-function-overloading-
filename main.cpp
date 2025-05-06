#include <iostream>
#include <string>
#include "header.hpp"
using namespace std;

int intNum = 0;
double doubleNum = 0;
int main() {
    cout << "pick a Number!" << "\n";
    string num;
     cin >> num;
     dataTypeCheck(num);
     overloadExecution();

    return 0;
}