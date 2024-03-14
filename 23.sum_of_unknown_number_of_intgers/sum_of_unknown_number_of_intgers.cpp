#include <iostream>

int main(){
  int sum_of_all_unknown_number_integers=0,input_integer=0;
  std::cout<<"Please enter as many integers as you want followed by control+d(on mac) or control+c(on windows)"<<std::endl;
  while(std::cin>>input_integer){
    sum_of_all_unknown_number_integers+=input_integer;
  }
  std::cout<<"The sum of all numbers you entered is " <<sum_of_all_unknown_number_integers<<std::endl;
  return 0;
}
