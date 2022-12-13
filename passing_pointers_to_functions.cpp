#include "iostream"

using namespace std;

int func_double(int *int_ptr){ // the paramter needs to be preceded by an asterisk when it accepts an argument by reference i.e address.
  *int_ptr *= 2; // here we de-reference the variable 'value' and double it.
  return *int_ptr;
};

int main (){

int value = 10;
int *int_ptr = &value; // here the pointer points to the address of 'value'

int result = func_double(int_ptr); // we are passing the address of 'value' as an argument.

cout << result << endl;


  return 0;
}