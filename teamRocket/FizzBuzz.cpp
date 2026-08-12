#include <iostream>

int main() {
    char uppercase = 'A';
    char lowercase = 'a';
    std::cout << static_cast<char>(uppercase + 1) << std::endl;
    std::cout << static_cast<char>(lowercase + 1) << std::endl;

    for (int i = 1; i <= 26; i++)//26 -> number of letter in the alphabet
    {
        char outerLetter = lowercase + i;
        for (int i = 1; i <= 26; i++)
        {
            char innerLetter = uppercase + i;
        }
    }

    for (int i = 1; i <= 100; ++i) {
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
    return 0;
}
