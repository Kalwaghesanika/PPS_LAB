#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
return a + b;
}

// Overloaded function to add two double values
double add(double a, double b) {
return a + b;
}

int main() {
  
// Using the add function with integer arguments
int intResult = add(2, 4);
cout << "Sum of integers 2 and 4: " << intResult << endl;

// Using the add function with double arguments
double doubleResult = add(2.2, 4.4);
cout << "Sum of doubles 2.2 and 4.4: " << doubleResult << endl;

return 0;
}