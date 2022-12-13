#include "iostream"

using namespace std;

int main (){
//THE DATA POINTED TO BY THE POINTERS IS CONSTANT AND CANNOT BE CHANGED.
//THE POINTER ITSLEF CAN CHANGE AND POINT SOMEWHERE ELSE.

int high_score = 85;
int low_score = 55;

 const int *score_ptr = &high_score; // const keyword will ensure that the value of high_score cannot be changed.
 
 //*score_ptr = 86 ---- ERROR ---
 score_ptr = &low_score;
 cout << *score_ptr << endl;// will print 55.


 
  return 0;
}