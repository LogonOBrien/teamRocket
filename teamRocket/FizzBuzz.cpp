#include <iostream>

int main() {
    for (int i = 1; i <= 100; ++i) 
    {
        
        // check whether the current number is prime
        bool isPrime = true;

        if (i < 2) 
        {
            isPrime = false;
        }
        else 
        {
            for (int j = 2; j < i; ++j) 
            {
                if (i % j == 0) 
                {
                    isPrime = false;
                    break;
                }
            }
        }


        // Kien's feature:
        // Prime numbers output one character instead of the normal FizzBuzz result
        if (isPrime) 
        {
            std::cout << "P\n";
        }
        else if (i % 3 == 0 && i % 5 == 0) // divisible by both -> FizzBuzz
        {
            std::cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0) // divisible by 3 -> Fizz
        {
            std::cout << "Fizz\n";
        }
        else if (i % 5 == 0) // divisible by 5 -> Buzz
        {
            std::cout << "Buzz\n";
        }
        else 
        {
            std::cout << i << "\n";
        }
    }

    return 0;
}





// divisible by 3 → Fizz, 
//           by 5 → Buzz, 
//           by both → FizzBuzz.
// ## Task:
// If any loop's iteration is a prime number only output 1 character instead of what ever was going to be output that loop.