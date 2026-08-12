#include <iostream>
#include <random>
#include <string>


int main() {
	srand(static_cast<unsigned int>(time(0)));

	int blockLoopNumber = rand() % (101) + 0;

	for (int i = 1; i <= 100; ++i) {
		if (i != blockLoopNumber) {
			std::string output = "";
			if (i % 3 == 0) output += "Fizz";
			if (i % 5 == 0) output += "Buzz";

			std::cout << (output.empty() ? std::to_string(i) : output); // output call 1
			std::cout << "\n"; // output call 2
		}

	}
	for (int i = 1; i <= 100; ++i) {
	if (i % 10 == 0) {
		std::cout << i << "10x" << std::endl;
	}
}
	return 0;
}