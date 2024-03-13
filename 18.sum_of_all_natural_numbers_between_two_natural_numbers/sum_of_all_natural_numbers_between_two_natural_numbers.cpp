#include <iostream>

int main(){
  int first_natural_number=0,second_natural_number=0,sum_of_all_numbers_between_two_natural_numbers=0,i=0;
  std::cout<<"Please enter two natural numbers seperated by space and hit enter"<<std::endl;
  std::cin>>first_natural_number>>second_natural_number;
  if(second_natural_number<first_natural_number){
    first_natural_number+=second_natural_number;
    second_natural_number=first_natural_number-second_natural_number;
    first_natural_number=first_natural_number-second_natural_number;
  }
  i=first_natural_number;
  while(i<=second_natural_number){
    sum_of_all_numbers_between_two_natural_numbers+=i;
    ++i;
  }
  std::cout<<"The sum of all natural numbers between "<<first_natural_number<<" and "<<second_natural_number<<" is "<<sum_of_all_numbers_between_two_natural_numbers<<std::endl;
  return 0;
}
