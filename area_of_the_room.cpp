#include "iostream"

using namespace std;

int main (){
  int length = {0};
  int breadth = {0} ;

  cout << "Enter the length: ";
  cin >> length;

  cout << "Enter the width: ";
  cin >> breadth;

  cout << "The area is " << length * breadth << " square feet"<< endl;
}