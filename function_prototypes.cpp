#include "iostream"

using namespace std;

double calc_area(double radius);
void area_of_a_circle();


const double pi = 3.14;

int main () {
    area_of_a_circle();
    return 0;
}
double calc_area(double radius) {
  return pi * radius * radius ;
}


void area_of_a_circle (){
double radius ;
cout << "Enter the radius of the circle " << endl;
cin >> radius;
cout << "Are of the circle with raidus " << radius << " is " << calc_area(radius) << endl;

}

