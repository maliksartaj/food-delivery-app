#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    stack<int> originalStack;
    stack<int> primeStack;
    stack<int> nonPrimeStack;
    originalStack.push(10);
    originalStack.push(17);
    originalStack.push(4);
    originalStack.push(7);
    originalStack.push(22);
    originalStack.push(5);

   
    while (!originalStack.empty()) {
        int value = originalStack.top();
        originalStack.pop();
        if (isPrime(value)) {
            primeStack.push(value);
        } else {
            nonPrimeStack.push(value);
        }
    }
   
    cout << "Prime values in the stack:" << endl;
    while (!primeStack.empty()) {
        cout << primeStack.top() << " ";
        primeStack.pop();
    }
    cout << endl;
    cout << "Non-prime values in the stack:" << endl;
    while (!nonPrimeStack.empty()) {
        cout << nonPrimeStack.top() << " ";
        nonPrimeStack.pop();
    }
    cout << endl;

    return 0;
}
