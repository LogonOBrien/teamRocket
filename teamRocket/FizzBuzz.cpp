#include <iostream>
#include <string>

int main() {
    for (int call = 1; call <= 100; call++){
        std::string output = "";
        if (call % 3 == 0) output += "Fizz";
        if (call % 5 == 0) output += "Buzz";

        std::cout << (output.empty() ? std::to_string(call) : output); // output call 1
        std::cout << "\n"; // output call 2
    }
    return 0;
}