#include <iostream>
#include <random>
#include <string>


int main() {
	srand(static_cast<unsigned int>(time(0)));
	int blockLoopNumber = rand() % (101) + 0;
	int FCount = 0;
	int ICount = 0;
	int BCount = 0;
	int UCount = 0;
	int ZCount = 0;
	char lowercase = 'a';


	for (int number = 1; number <= 100; ++number) {//! This is the FIZZBUZZ loop
		if (number % 10 == 0) {
			std::cout << number << ": 10x" << std::endl;
		}
		else if (number % 3 == 0 && number % 5 == 0) {
			std::cout << number << ": FizzBuzz\n";
			FCount += 1;
			ICount += 1;
			BCount += 1;
			UCount += 1;
			ZCount += 4;
		}
		else if (number % 3 == 0) {
			std::cout << number << ": Fizz\n";
			FCount += 1;
			ICount += 1;
			ZCount += 2;
		}
		else if (number % 5 == 0) {
			std::cout << number << ": Buzz\n";
			BCount += 1;
			UCount += 1;
			ZCount += 2;
		}
		else {
			std::cout << number << ":\n";
		}
		for (int letter = 0; letter < 26; ++letter)//26 -> number of letter in the alphabet, this is Noah's challenge, nested loop to output how many times a letter was used.
		{
			int value = 0;
			switch (lowercase + letter)
			{
			case 'f': value = FCount;
				break;
			case 'i': value = ICount;
				break;
			case 'b': value = BCount;
				break;
			case 'u': value = UCount;
				break;
			case 'z': value = ZCount;
				break;
			default: break;
			}
			std::cout << static_cast<char>(lowercase + letter) << " -> " << value << '.' << ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}
	/*for (int i = 1; i <= 100; ++i) {
		if (i != blockLoopNumber) {
			std::string output = "";
			if (i % 3 == 0) output += "Fizz";
			if (i % 5 == 0) output += "Buzz";

			std::cout << (output.empty() ? std::to_string(i) : output); // output call 1
			std::cout << "\n"; // output call 2
		}

	}*/
	/*for (int i = 1; i <= 100; ++i) {
		if (i % 10 == 0) {
			std::cout << i << "10x" << std::endl;
		}
	}*/

	//for (int call = 1; call <= 100; call++) {
	//	std::string output = "";
	//	if (call % 3 == 0) output += "Fizz";
	//	if (call % 5 == 0) output += "Buzz";

	//	std::cout << (output.empty() ? std::to_string(call) : output); // output call 1
	//	std::cout << "\n"; // output call 2
	//}




