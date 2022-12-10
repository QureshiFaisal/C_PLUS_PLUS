#include "iostream"
#include "string"
#include "typeinfo"

using namespace std;

void print_guest_list(std::string guest_list[], size_t guest_list_size);
void clear_guest_list(std::string guest_list[], size_t guest_list_size, int value);

int main (){
string guest_list [] = {"Larry", "Moe", "Curly"};
size_t guest_list_size = {3};
int value = 0;

print_guest_list(guest_list , guest_list_size);
clear_guest_list(guest_list, guest_list_size, value);
print_guest_list(guest_list , guest_list_size);
  return 0;
}

 void print_guest_list(std::string guest_list[], size_t guest_list_size){
  cout << "Hello" << endl;
  for(size_t i = 0; i <guest_list_size; ++i)
     cout << guest_list[i] << " ";
     cout << endl;

}

void clear_guest_list(std::string guest_list[], size_t guest_list_size, int value){
  cout << "The guest list after clearing is : " << endl ;
for(size_t i = 0; i < guest_list_size; ++i)
 guest_list[i] = value ;


}