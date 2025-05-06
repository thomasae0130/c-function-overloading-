 #include <iostream>
 using namespace std;
 // always use guards within header file to prevent multiple copies of the header file from being created 
 // can fuck with compiler and cause it to create multiple copies of the header file increasing executable file size
 // can also be the causation of runtime errors when the wrong header file is being refrenced of the possible copies
 
 //if not defined 
 #ifndef MAIN_VARIABLES

 // then define 
 #define MAIN_VARIABLES

 // extern short for external just says the variables are defined in another file and to use the ones directly from that file 
 extern int intNum;
 extern double doubleNum;

 // function declartions  
 int multiplyNumber(int intNum);
 double multiplyNumber (double doubleNum);
 int stringCheck(string& num);
 int dataTypeCheck(string& num);
 int overloadExecution();

 // end the block declared by #ifndef
 #endif


