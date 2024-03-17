/*
Exercise 1.21: Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item1, item2;
  std::cout << "Enter your first transaction below: " << std::endl;
  std::cin >> item1;
  std::cout << "Enter your second transaction below: " << std::endl;
  std::cin >> item2;
  while (item1.isbn() != item2.isbn())
  {
    std::cerr << "To add two transaction their ISBN needs to be same!" << std::endl;
    int transaction_to_change = 0;
    std::cout << "Which Transaction you want to change ( input 1 or 2):";
    std::cin >> transaction_to_change;
    while (transaction_to_change != 1 and transaction_to_change != 2)
    {
      std::cout << "You input is not valid enter 1 if you want to change first transaction or enter 2 if you want to change second transaction :";
      std::cin >> transaction_to_change;
    }
    if (transaction_to_change == 1)
    {
      std::cout << "Re-Enter your first transaction below: " << std::endl;
      std::cin >> item1;
    }
    else if (transaction_to_change == 2)
    {
      std::cout << "Re-Enter you second transaction below: " << std::endl;
      std::cin >> item2;
    }
  }
  std::cout << "Sume of the input transactions is: " << item1 + item2 << std::endl;
  return 0;
}
