#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements;

public:
    void push(int value) {
        elements.push_back(value);
    }

    /
    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop.\n";
        }
    }

    // Function to peek at the top element of the stack
    int peek() const {
        if (!elements.empty()) {
            return elements.back();
        } else {
            std::cout << "Stack is empty. Cannot peek.\n";
            // You might want to handle this differently based on your requirements
            // For example, you could throw an exception or return a special value.
            return -1; // Assuming -1 represents an invalid value in the stack
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }

    // Function to get the size of the stack
    size_t size() const {
        return elements.size();
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.peek() << std::endl;

    myStack.pop();
    std::cout << "Top element after pop: " << myStack.peek() << std::endl;

    return 0;
}
