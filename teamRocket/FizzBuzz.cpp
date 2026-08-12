#include <iostream>

int main() {
	int FCount = 0;
	int ICount = 0;
	int BCount = 0;
	int UCount = 0;
	int ZCount = 0;
	char lowercase = 'a';


	for (int i = 1; i <= 100; ++i) {
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "FizzBuzz\n";
			FCount += 1;
			ICount += 1;
			BCount += 1;
			UCount += 1;
			ZCount += 4;
		}
		else if (i % 3 == 0) {
			std::cout << "Fizz\n";
			FCount += 1;
			ICount += 1;
			ZCount += 2;
		}
		else if (i % 5 == 0) {
			std::cout << "Buzz\n";
			BCount += 1;
			UCount += 1;
			ZCount += 2;
		}
		else {
			std::cout << i << "\n";
		}
		for (int i = 0; i < 26; i++)//26 -> number of letter in the alphabet
		{
			int value = 0;
			switch (lowercase + i)
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
				std::cout << static_cast<char>(lowercase + i) << ' -> ' << value << std::endl;
				value = 0;
		}
	}
	return 0;
}
