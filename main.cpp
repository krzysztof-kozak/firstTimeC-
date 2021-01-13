#include <iostream>
// using namespace std;
using std::cout;
using std::endl;
using std::string;
using std::cin;

// int main() {
//   std::cout << "Hello World!" << std::endl;
// }

 void addTwoNumbers(int a, int b) {
  const int result = a + b;
  cout << a << " + " << b << " is " << result <<  endl;
  cout << "quick maths" << endl;
}

int multiplyNumberBy2(int number) {
  return number * 2;
}

int main() {
  char myName[] = "Kris"; // C style character string
  string myName2 = "Kris"; // C++ class

  cout << "Kris ma " << myName2.length() << " znaki" <<endl;

  int myNumber = 2;
  int age{0};
  float myNumber2 = 2.05;
  bool myBoolean = false;
  long long myBigNumber = 1e7;
  float unassignedFloat;

  const int someNumber = 5;

  cout << age << endl;
  cout << endl;
  // cout << "Podaj wiek" << endl;
  // cin >>  age;
  // cout << "Podales " << age;

  
  cout <<"Unassigned float has the value of " << unassignedFloat << endl;;

  for(int i = 1; i <= 10; i++) {

    if (i % 2 == 0) {
      cout << i << " Dzieli sie przez 2" << endl << endl;
    } else {
      cout << i << " Nie dzieli sie przez 2" << endl << endl;
    }
  }

  int numbersArray[] = {2, 4, 6, 8, 10};
  const int arrayLength = sizeof(numbersArray) / sizeof(numbersArray[0]);

  for (int i = 0; i < arrayLength; i++) {
    cout << "Index: " << i << ", value: " << numbersArray[i] <<endl;
  }
  cout << endl;


  
    int counter = 0;
    while (counter <= 5) {
      cout << "Counter: " << counter <<endl;
      counter++;
    }
    cout << endl;
  
  {
    int counter = 5;
    do {
      cout << "Counter: " << counter <<endl;
      counter--;
    } while(counter >= 0);
  }



  string sentence = "Very cool sentence";

  for(int i = 0; i < sentence.length(); i++) {
    cout << sentence.at(i);
  }
  cout << endl;

  addTwoNumbers(5, 4);
  cout << multiplyNumberBy2(8) << endl;


}