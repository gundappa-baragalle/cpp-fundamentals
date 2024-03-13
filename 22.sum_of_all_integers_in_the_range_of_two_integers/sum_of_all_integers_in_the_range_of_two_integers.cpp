/*
*Exercise 1.12: What does the following for loop do? What is the final value of sum?
*   int sum = 0;
*   for (int i = -100; i <= 100; ++i)
*     sum += i;
*/

#include <iostream>

int main(){
  int sum_of_all_integers_in_the_range_of_two_integers=0,first_integer=0,second_integer=0;
  std::cout<<"Please enter any two integers seperated by a space and hit enter"<<std::endl;
  std::cin>>first_integer>>second_integer;
  if(second_integer<first_integer){
    second_integer+=first_integer;
    first_integer=second_integer-first_integer;
    second_integer=second_integer-first_integer;
  }
  for(int i=first_integer;i<=second_integer;i++){
    sum_of_all_integers_in_the_range_of_two_integers+=i;
  }
  std::cout<<"\n--------------------------\n";
  std::cout<<"----------OUTPUT----------\n";
  std::cout<<"--------------------------\n";
  std::cout<<"The sum of all intgers in the range of two intgers "<<first_integer<<" and "<<second_integer<<" is "<<sum_of_all_integers_in_the_range_of_two_integers<<std::endl; 
  return 0;
}
