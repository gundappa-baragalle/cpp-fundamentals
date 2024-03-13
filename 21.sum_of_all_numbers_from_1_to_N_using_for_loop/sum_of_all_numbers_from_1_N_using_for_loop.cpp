#include <iostream>

int main(){
  int input_natural_number=0,sum_of_all_numbers_from_1_to_input_natural_number=0;
  std::cout<<"Please enter any natural number"<<std::endl;
  std::cin>>input_natural_number;
  for(int i=1;i<=input_natural_number;++i){
    sum_of_all_numbers_from_1_to_input_natural_number+=i;
  }
  std::cout<<"\n--------------------------\n";
  std::cout<<"----------OUTPUT----------\n";
  std::cout<<"--------------------------\n";
  std::cout<<"The sum of all numbers from 1 to "<<input_natural_number<<" is "<<sum_of_all_numbers_from_1_to_input_natural_number<<std::endl; 
  return 0;
}
