/*
Take N nummbers and output there square.
*/

#include <iostream>

int main(){
  int total_input_numbers;
  int input_number;
  for(std::cin>>total_input_numbers;total_input_numbers>=1;total_input_numbers--){
    std::cin>>input_number;
    std::cout<<input_number*input_number<<"\n";
  }
  return 0;
}
