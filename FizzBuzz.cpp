#include <iostream>

int main() {
    for (int call = i; call <= 100; call++){
        std::string output = "";
        if (i % 3 == 0) output += "Fizz";
        if (i % 5 == 0) output += "Buzz";

        std::cout << (output.empty() ? std::to_string(call) : output); // output call 1
        std::cout << "\n"; // output call 2
    }
    return 0;
}