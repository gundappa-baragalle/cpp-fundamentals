/*
Exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
*/

#include <iostream>

int main(){
  int first_integer=0,second_integer=0;
  std::cout<<"Please Enter any two integers seperated by a space and hit enter"<<std::endl;
  std::cin>>first_integer>>second_integer;
  if(second_integer<first_integer){
    first_integer=first_integer+second_integer;
    second_integer=first_integer-second_integer;
    first_integer=first_integer-second_integer;
  }
  std::cout<<"\n--------------------------\n";
  std::cout<<"----------OUTPUT----------\n";
  std::cout<<"--------------------------\n";
  while(first_integer<=second_integer){
    std::cout<<first_integer<<std::endl;
    ++first_integer; 
  }
  return 0;
}
