#include "iostream"

using namespace std; 
double farenheit_to_celsius();

double calc_farenheit_to_celcius(double);


int main (){
 farenheit_to_celsius();
  return 0;
}

double farenheit_to_celsius(){
double farenheit;
cout << "Enter the temperature in farenheit " << endl;
cin >> farenheit;
cout << "The temperature is celcius is " << calc_farenheit_to_celcius(farenheit) << endl;

}

double calc_farenheit_to_celcius(double farenheit) {
double result = (farenheit - 32) * 0.56;
return result;
}
