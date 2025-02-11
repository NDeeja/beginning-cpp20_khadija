// Three-way comparison of integers
#include <compare>  // Required when using operator <=> (even for fundamental types)
//import <format>;
#include <iostream>

int main()
{
  std::cout << "Please enter a number: ";

  int value;
  std::cin >> value;

  std::strong_ordering ordering{ value <=> 0 };

  if( value < 0 ) {
    std::cout << std::format("value < 0: {}\n", ordering == std::strong_ordering::less);
  }
  else if(value > 0 ) {
    
  }
  else {

  }
  //std::cout << std::format("value > 0: {}\n", ordering == std::strong_ordering::greater);
  //std::cout << std::format("value == 0: {}\n", ordering == std::strong_ordering::equal);
}
