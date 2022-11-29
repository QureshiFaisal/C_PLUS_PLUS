#include "iostream"

int main()
{
  int favorite_number;
  std::cout << "Enter your favorite number between 1 to 100: ";
  std::cin >> favorite_number;
  std::cout << "Amazing! that is my favorite number too";
  std::cout << "No really!!," << favorite_number << " is my favorite number" << std::endl;

  return 0;
}
/* #inclue - preprocessor
main, cout, cin are identifiers
int, return are keywords
std is standard namespace
:: is the scope resolution operator , when you use extrnal libraries that use the same namespaces
as the standard namespace then this is used to distinguish
>> extraction operator
<< insertion operator*/