#include "iostream"

using namespace std;


int main () {
int *p ;
cout << "The value of p is: "<< p << endl; //  '0x104ac4c20' garbage value
cout << "The address of p is: " << &p << endl; // '0x7ff7bb448380'
cout <<"The size of p is: "<< sizeof p <<endl; // 8
p = nullptr;
cout <<"The value of p is: "<< p << endl; // 0

//--------------------------------------------------------------------//
int p1 = 5;
int *test_pointer = &p1;
double *p2 = nullptr;
unsigned long long *p3 = nullptr;
vector<string> *p4 = nullptr;
string *p5 = nullptr;
//When you define a pointer, it can only point to the variable of the same data type.

cout <<"The size of p1 is: "<< sizeof p1 <<endl; // 8
cout <<"The size of p2 is: "<< sizeof p2 <<endl; // 8
cout <<"The size of p3 is: "<< sizeof p3 <<endl; // 8
cout <<"The size of p4 is: "<< sizeof p4 <<endl; // 8
cout <<"The size of p5 is: "<< sizeof p5 <<endl; // 8

//The size of a variable may differ based on its data type but the size of the pointer does not depend on the datatype of what it points to.

cout << *test_pointer << endl; // will print the value stored in the variable it is pointing at i.e 5
//The astesrisk is used to both declared and dereference(acces the value stored in) a pointer.
cout << p2 << endl;
cout << p3 << endl;
cout << p4 << endl;
cout << p5 << endl;


//-----------------------------------------------------------------------//

//What a pointer points to can be changed 

double high_temp = 100.7;
double low_temp = 37;

double *temp_pointer ;

temp_pointer = &high_temp; // points to high temp
temp_pointer = &low_temp; // points to low temp
temp_pointer = nullptr;

  return 0;
}

