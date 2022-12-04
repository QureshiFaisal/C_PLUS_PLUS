#include "iostream"

using namespace std;

int find_area( int height);
double find_area(double length, double breadth);

int main (){
cout << "Area of the shape is: " << find_area(3.0,5.0) << endl;

  return 0;
}

int find_area(int height){
return (height * height);
}

double find_area(double length, double breadth){
 return (length * breadth);
}