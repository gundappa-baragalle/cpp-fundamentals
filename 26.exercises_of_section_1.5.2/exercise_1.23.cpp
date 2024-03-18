/*
Exercise 1.23: Write a program that reads several transactions and counts how many transactions occur for each ISBN.
How to run : ./a.out < "data/book_sales_for_1.23" >"data/1.23_output"
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currently_counting_transaction, input_transaction;
    // std::cout << "Enter your first transaction details: "; //(WE can uncomment it if we are giving input through terminal and not reading from file
    if (std::cin >> input_transaction)
    {
        currently_counting_transaction = input_transaction;
        int count = 1;
        // std::cout << "Enter your next transaction details: "; //(WE can uncomment it if we are giving input through terminal and not reading from file
        while (std::cin >> input_transaction)
        {
            if (input_transaction.isbn() == currently_counting_transaction.isbn())
            {
                ++count;
            }
            else
            {
                std::cout << "Total transactions with ISBN " << currently_counting_transaction.isbn() << " are " << count << std::endl;
                currently_counting_transaction = input_transaction;
                count = 1;
            }
            // std::cout << "Enter your next transaction details: "; //(WE can uncomment it if we are giving input through terminal and not reading from file
        }
        std::cout << "Total transactions with ISBN " << currently_counting_transaction.isbn() << " are " << count << std::endl;
    }
    return 0;
}
