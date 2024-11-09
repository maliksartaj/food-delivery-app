#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack<int> myStack;

    
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    
    if (!myStack.empty()) {
        cout << "Top element : " << myStack.top() <<endl;
    } else {
        cout << "Stack is empty." << endl;
    }

  
    if (!myStack.empty()) {
        myStack.pop();
        cout << "Top element after pop: " << myStack.top() << endl;
    } else {
        cout << "Stack is empty after pop operation." << endl;
    }

    return 0;
}
