#include <iostream>
#include <random>
#include <string>

int main() {
	srand(static_cast<unsigned int>(time(0)));

	int blockLoopNumber = rand() % (101) + 0;

	for (int i = 1; i <= 100; ++i) {
		if (i != blockLoopNumber) {
			if (i % 3 == 0 && i % 5 == 0) {
				std::cout << "FizzBuzz\n";
			}
			else if (i % 3 == 0) {
				std::cout << "Fizz\n";
			}
			else if (i % 5 == 0) {
				std::cout << "Buzz\n";
			}
			else {
				std::cout << i << "\n";
			}
		}

	}
	for (int i = 1; i <= 100; ++i) {
		if (i % 10 == 0) {
			std::cout << i << "10x" << std::endl;
		}
	}

	for (int call = 1; call <= 100; call++) {
		std::string output = "";
		if (call % 3 == 0) output += "Fizz";
		if (call % 5 == 0) output += "Buzz";

		std::cout << (output.empty() ? std::to_string(call) : output); // output call 1
		std::cout << "\n"; // output call 2
	}
	return 0;
}