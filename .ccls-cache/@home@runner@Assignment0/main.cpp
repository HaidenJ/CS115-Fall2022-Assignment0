/* Opening Comment
Haiden Jensen name 8/31/2022 rough date m/d/y
CS 115 course number
section num
8/31/2022 rough date?
*/
//includes
#include <iostream>
#include <string>

#include <iomanip>
using namespace std;
using namespace std;

//prototypes
void checkDictionary (string user_input,string dictionary[], unsigned int dictionary_size);
void checkWord (string user_input, string dictionary_word);
//Part A
int main() {
  const int ZERO = 0;
  const unsigned int DICTIONARY_SIZE = 13;//constant var
  //adding a # string array
  string dictionary[DICTIONARY_SIZE] =
{
"a",
"act",
"apple",
"box",
"breeze",
"cat",
"cot",
"cow",
"cut",
"dog",
"elf",
"freeze",
"gem",

};
  
  cout << "Welcome to the Word Match program!" << endl << endl; //welcome and 2 newlines
  cout << "Enter a word with underscores: "; // prompt

  string user_input; //declaring string var
  cin >> user_input; // read in string

  for(unsigned int i = 0; i < DICTIONARY_SIZE; i++)// for each item in the dictionary array
{
checkWord ( user_input, dictionary[i]);
}
  cout << endl << "You entered \"" << user_input << "\"" << endl;
  
  return 0; // ending program
}
/*********** FUNCTION ***********/
void checkDictionary (string user_input,string dictionary[], unsigned int dictionary_size){
  
}
// print dictionary_word if all its characters match
// those in user_word
void checkWord (string user_input, string dictionary_word){
  
if(user_input.length() > 0 && user_input.length() == dictionary_word.length())
  {
    int matched =0;
    for(int j = 0; j < user_input.length(); j++){
    if(user_input.at(j) == dictionary_word.at(j)||user_input.at(j) == '_'){
      matched++;
    }
      if (matched == user_input.length()){
        cout << dictionary_word << endl;
      }
    }
  }

 
  }