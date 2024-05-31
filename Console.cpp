#include "Console.h"
#include <iostream>
#include <ctime>
#include <string>

// constructor
Console::Console(std::string n, int cLine, int tLines, int id) : name(n), currentLine(cLine), totalLines(tLines), processId(id) {
	// Get current timestamp
	std::time_t now = std::time(nullptr);
	struct tm timeInfo;
	localtime_s(&timeInfo, &now);
	char timeStr[64];
	std::strftime(timeStr, sizeof(timeStr), "%m/%d/%Y, %I:%M:%S %p", &timeInfo);
	timestamp = timeStr;
}

std::string Console::getName() const {
	return name;
}
void Console::drawMain() {

	std::cout << "  ____ ____   ___  ____  _____ ______   __\n"
		" / ___/ ___| / _ \\|  _ \\| ____/ ___\\ \\ / /\n"
		"| |   \\___ \\| | | | |_) |  _| \\___ \\\\ V / \n"
		"| |___ ___) | |_| |  __/| |___ ___) || |  \n"
		" \\____|____/ \\___/|_|   |_____|____/ |_|  \n";

	std::cout << "\033[1;32m"; // 1;32m represents bold green text
	std::cout << "Hi, Welcome to the CSOPESY command line!" << std::endl;

	std::cout << "\033[1;33m"; // 1;33m represents bold yellow text
	std::cout << "Type 'exit' to quit, 'clear' to clear the screen" << std::endl;
	std::cout << "\033[0m"; // Reset text color to default


}
void Console::drawProcess() {
	system("cls");
	std::cout << "Process: " << name << std::endl;
	std::cout << "ID: " << processId << std::endl;
	std::cout << "Current instruction line: " << currentLine << std::endl;
	std::cout << "Total line of instruction: " << totalLines << std::endl;
	std::cout << "Timestamp: " << timestamp << std::endl;

}


