#include <iostream>
  using namespace std;

int main() {
    double num1, num2, num3;

    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    
    double smallest = min(num1, min(num2, num3));

    
    double largest = max(num1, max(num2, num3));

   
    double average = (num1 + num2 + num3) / 3;

   
    double deviation = max(abs(num1 - average), max(abs(num2 - average), abs(num3 - average)));

   
    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;
    cout << "Average: " << average <<endl;
    cout << "Deviation: " << deviation << endl;

    return 0;
}
