// Working with strings in an array
//import <iostream>;
#include <iostream>
//import <array>; // for std::size()
#include <array> //Change this for the new version c++

int main()

{
  const size_t max_length{ 80 };      // Maximum string length (including \0) //starts at 1
  char stars[][max_length] //starts at 0
  
  {
                          "Aries 1",  "Aries 5",
                          "Aries 2",   "Aries 6 6 6",
                          "Aries 3",   "Aries 7",
                          "Aries 4",    "Aries 8 lalala"
  };

  size_t choice{};

  std::cout << "Pick a lucky star! Enter a number between 1 and "
    << std::size(stars) << ": ";
  std::cin >> choice;

  if (choice >= 1 && choice <= std::size(stars))

  {

      //The index is specified as choice-1 because the choice values start from 1, 
      //whereas the index values need to start from 0. This is quite a common idiom 
      //when you’re programming with arrays.

    std::cout << "Your lucky star is " << stars[choice - 1] << std::endl; 
  }

  else
  
  {
    std::cout << "Sorry, you entered number that is not in luck starts :) ." << std::endl;
  }
}
