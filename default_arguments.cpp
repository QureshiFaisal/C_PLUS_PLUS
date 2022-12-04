#include "iostream"

using namespace std;

void print_grocery_list (int apples=3, int mangoes=13,int oranges=7);
int modify_grocery_list();


int main (){
modify_grocery_list();
  return 0;
}

void print_grocery_list ( int apples, int mangoes,  int oranges){
  cout << "The Number of mangoes to be bought this month is: " << mangoes << endl;
    cout << "The Number of apples to be bought this month is: " << apples << endl;
      cout << "The Number of oranges to be bought this month is: " << oranges << endl;
}

int modify_grocery_list(){
  print_grocery_list(5);
}