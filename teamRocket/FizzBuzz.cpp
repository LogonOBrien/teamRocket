#include <iostream>
#include <random>


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
	return 0;
}