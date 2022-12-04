#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;

int main (){
  // for(size_t i = 0; i <5 ; ++i)
  // cout << rand() << endl;

//Function to generate a random number between min and max'
  size_t count = 10;
  int random_number = 0;
  int min = 1;
  int max = 6;

  cout << "Random Number on my system is: " << RAND_MAX << endl;
  // seeding the number
  srand(time(nullptr));
  
   for (size_t i = 0 ; i < 5 ; ++i){
    random_number = rand() % max + min;
    cout << random_number << endl;
   }
   
  return 0;
}