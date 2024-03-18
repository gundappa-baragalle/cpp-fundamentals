/*
Exercise 1.24: Test the previous program by giving multiple transactions representing multiple ISBNs. The records for each ISBN should be grouped together.
How to run : ./a.out < "data/book_sales_for_1.24" >"data/1.24_output"
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currently_counting_transaction, input_transaction;
    std::cout << "Please enter your first transaction details: ";
    if (std::cin >> input_transaction)
    {
        currently_counting_transaction = input_transaction;
        int count = 1;
        std::cout << "Please enter your next transaction details: ";
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
            std::cout << "Please enter your next transaction details : ";
        }
        std::cout << std::endl
                  << "Total transactions with ISBN " << currently_counting_transaction.isbn() << " are " << count << std::endl;
    }

    return 0;
}