/*
Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.
*/

#include <iostream>

int main(){
  int input_natural_number=0;
  std::cout<<"Please enter a natural number"<<std::endl;
  std::cin>>input_natural_number;
  //{
  std::cout<<"\n--------------------------\n";
  std::cout<<"----------OUTPUT----------\n";
  std::cout<<"--------------------------\n";
  //}
  while(input_natural_number>=0){
    std::cout<<input_natural_number<<std::endl;
    --input_natural_number;
  }
  return 0;
}
