#include <iostream>

int main(){
  int sum_of_all_numbers_between_two_integers=0,first_integer=0,second_integer=0;
  std::cout<<"Please enter two integers seperated by a space and hit enter"<<std::endl;
  std::cin>>first_integer>>second_integer;
  if(second_integer<first_integer){
    second_integer+=second_integer;
    first_integer=second_integer-first_integer;
    second_integer-=first_integer;
  }
  std::cout<<"\n--------------------------\n";
  std::cout<<"----------OUTPUT----------\n";
  std::cout<<"--------------------\n";
  for(int i=first_integer;i<=second_integer;i++){
    std::cout<<i<<std::endl;
  }
  return 0;
}
