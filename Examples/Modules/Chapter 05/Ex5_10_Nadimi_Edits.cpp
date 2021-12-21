// Classifying the letters in a C-style string
//Nadimi Edits_10_20_2021

//----Goal: Find out how many vowels and consonants are used in any userinput-----------
//Step1-Define array size (100)
//Step2-Define string
//Step3-Define output and take input by making a loop looking if the input is alphabet, if yes, convert to lower case. Then check number of vowels and consonants

//import <iostream>; //Uncomment this for the new version of C++; functions for input/output operations

#include <iostream> //functions for input/output operations

#include <cctype> //classifies (and transform) individual characters. For example, isupper() checks whether a character is uppercase or not.

int main() //main function which returns integer as a output 

{
  const int max_length {100};   // Defines Array size e.g. 100 
  char text[max_length] {};     // Array to hold input string; starts at 0

  std::cout << "Enter a line of text:" << std::endl; //std::endl Inserts a newline character into the output sequence

  // Read a line of characters including spaces
  std::cin.getline(text, max_length);
  std::cout << "You entered:\n" << text << std::endl;

  size_t vowels {};            // Count the numbers of vowels from the user input 
  size_t consonants {};        // Count the consonants from the user input 

  //'\0' is the null character which marks the end of the string
  // != (not equal to)
  // i++ (add one after conducting the first operation)


  for (int i {}; text[i] != '\0'; i++) 

  {
    if (std::isalpha(text[i]))         // If it is a letter...std::isalpha(check that a character is an alphabet or not) 
    {
      switch (std::tolower(text[i])) //By default, the characters from a to z (ascii value 97 to 122) are lowercase characters.
      {                                // ...check lowercase...
        case 'a': case 'e': case 'i': case 'o': case 'u':
          ++vowels;                    // ...it is a vowel
          break;

        default:
          ++consonants;                    // ...it is a consonant
      }
    }
  }
  std::cout << "Your input contained " << vowels << " vowels and "
            << consonants << " consonants." << std::endl;
}
