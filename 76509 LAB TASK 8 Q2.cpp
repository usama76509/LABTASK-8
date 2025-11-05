#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n--- Simple Menu ---" << endl;
        cout << "1. Hello" << endl;
        cout << "2. Goodbye" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Hello" << endl;
                break;
            case 2:
                cout << "Goodbye" << endl;
                break;
            case 3:
                cout << "Exit" << endl;
                break;
            default:
                cout << "this is default case" << endl;
        }
    } while (choice != 3);

    return 0;
}

