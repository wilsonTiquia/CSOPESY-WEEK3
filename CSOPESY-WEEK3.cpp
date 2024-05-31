#include "ConsoleManager.h"
#include <iostream>

int main() {
    ConsoleManager manager;

    // Display the initial main menu
    manager.drawMainMenu();

    std::string input;

    while (true) {

        std::cout << "Enter a command: ";
        std::getline(std::cin, input);

        if (input == "exit" && manager.getCurrentConsoleName() == "MAIN_MENU") {

            break;
        }
        manager.handleInput(input);
        // Handle user input





    }

    return 0;
}