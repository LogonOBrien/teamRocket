#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    srand(time(0));
    int skipNumber = rand() % 100 + 1;

    for (int i = 1; i <= 100; ++i) {

        if (i == skipNumber) {
            continue;
        }

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