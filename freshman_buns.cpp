#include <iostream>
using namespace std;

int main() {
    int choice;

    std::cout << "peep Freshman buns -1\n";
    std::cout << "Slime seniors -2\n";
    std::cout << "Peep Senior buns -3\n";
    std::cout << "Become avik -4\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            cout << "😛😛😛😛😛😛😛😛🤤🤤🤤🤤\n";
            break;
        case 2:
            cout << "No more senior buns😥😭😭😭\n";
            break;
        case 3:
            cout << "😭🤤🤤🤤🤤🤤 boingaloing\n";
            break;
        case 4:
            cout << "Long \n";
            break;
        default:
            std::cout << "Invalid choice.\n";
    }

    return 0;
}