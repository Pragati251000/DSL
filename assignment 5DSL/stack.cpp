#include <iostream>
using namespace std;

#define MAX 5

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop." << endl;
        } else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        }
    }

    
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (choice != 4);

    return 0;
}
