/*
QUESTION:
The way to learn a new programming language is to write programs. In this chapter, we’ll write a program to solve a simple problem for a bookstore.
Our store keeps a file of transactions, each of which records the sale of one or more copies of a single book. Each transaction contains three data elements:
     0-201-70353-X 4 24.99
The first element is an ISBN (International Standard Book Number, a unique book identifier), the second is the number of copies sold, and the last is the price at which each of these copies was sold. From time to time, the bookstore owner reads this file and for each book computes the number of copies sold, the total revenue from that book, and the average sales price.
i.e We need to read a file of sales transactions and produce a report that shows, for each book, the total number of copies sold, the total revenue, and the average sales price. We’ll assume that all the transactions for each ISBN are grouped together in the input

HOW TO RUN : ./a.out <data/transactions >data/summary_of_transactions
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item input_transaction;
    if (std::cin >> input_transaction)
    {
        Sales_item summary_of_the_book = input_transaction;
        while (std::cin >> input_transaction)
        {
            if (input_transaction.isbn() == summary_of_the_book.isbn())
            {
                summary_of_the_book += input_transaction;
            }
            else
            {
                std::cout << summary_of_the_book << std::endl;
                summary_of_the_book = input_transaction;
            }
        }
        std::cout << summary_of_the_book << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
