/*
Exercise 1.22: Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item input, output;
    std::cout << "Enter your first transaction details: ";
    std::cin >> output;
    std::cout << "Enter your next transaction details: ";
    // output += input;
    while (std::cin >> input)
    {
        while (input.isbn() != output.isbn())
        {
            std::cerr << "The ISBN number of this transaction is not same as previous ones! " << std::endl;
            std::cout << "Re-Enter your last transaction details: ";
            std::cin >> input;
        }

        output += input;
        std::cout << "Enter your next transaction details: ";
    }
    std::cout << std::endl
              << "The sum of all transactions is: " << output << std::endl;
    return 0;
}
