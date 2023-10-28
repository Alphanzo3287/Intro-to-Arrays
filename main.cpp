//Alphanzo Moore
//CIS-5 Online
//October 7, 2023
//Assignment 10A: Intro to Arrays

#include <iostream>
#include <string>

using namespace std;

int main() 
{
  const int SIZE = 5;
  int test1[SIZE];
  string name[SIZE];

 

  for(int index = 0; index < SIZE; index++)
    {
      cout << "Input a name for student number " << index + 1 << endl;
      getline(cin, name[index]);
      

      cout << "Input the score for test 1" << endl;
      cin >> test1[index];

      cin.ignore();
    }

      cout << endl << endl;
  
  for (int index = 0; index < SIZE; index++)
    {
      cout << name[index] << ", your score on test 1 = " << test1[index] << endl;
    }

  system("pause");
    return 0;
}