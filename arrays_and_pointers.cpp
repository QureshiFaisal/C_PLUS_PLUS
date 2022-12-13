#include "iostream"

using namespace std;

int main (){
//WHEN YOU PRINT OUT THE ENTIRE ARRAY WITH IT'S NAME IT GIVES THE ADDRESS OF THE 1ST ELEMENT BY REFERENCE.
//WHEN YOU ACCESS AN ELEMENT THROUGH IT'S INDEX THEN IT GIVES THE VALUE OF THAT ELEMENT

int scores [] = {100,95,89};
cout << scores << endl; // gives the address of the first element of the array
cout << *scores << endl; // gives the value of the element af the first index
cout << scores[0] << endl; // gives the value of the first element of the array
//The name of the array outputs the address of the first element, which means it stores a variable by reference, thus it can be de-referenced using an asterisk.

int *scores_ptr = scores ; 
cout << scores_ptr << endl ;// gives the address of the first element in the array
cout << scores_ptr[0] << endl ;// gives the value of the first element of the array


cout << *scores_ptr << endl ; // will print '100' i.e the first element
cout << *(scores_ptr  + 1) << endl ; // will print '95' i.e the second element of the array

//ARITHMETIC OPERATIONS USING POINTERS OF AN ARRAY
int n = ((scores_ptr + 2) - (scores_ptr + 1)); // will print '1' , will give the difference of the elements between the two operands
cout << n << endl;

//COMPARISION OPERATORS USING POINTERS

string first_name = "Faisal";
string last_name = "Faisal";


string *p1 = &first_name;
string *p2 = &last_name;
string *p3 = &first_name;

cout << p1 << endl;
cout << p3 << endl;

cout << (*p1 == *p2) << endl;// false
cout << (*p1 == *p3) << endl;// true

 return 0;

}