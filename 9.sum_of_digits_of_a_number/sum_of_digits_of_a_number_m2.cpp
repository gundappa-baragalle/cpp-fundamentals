/*
Write a program to find sum of digits of a number
*/

#include <iostream>

int main(){
  long long int input_number;
  unsigned int sum_of_digits;
  std::cout<< "Please enter a number whose sum of digits you want me to fing: ";
  std::cin >>input_number;
  if(input_number<0){
    input_number=-input_number;
  }
  sum_of_digits=0;
  while(input_number>0){ 
    sum_of_digits+=input_number%10;
    input_number=input_number/10;
  }
  std::cout<<"The sum of digits of the given number is: "<<sum_of_digits<<"\n";
  return 0;
}
