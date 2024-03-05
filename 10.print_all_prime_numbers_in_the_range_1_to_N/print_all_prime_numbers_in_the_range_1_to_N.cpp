/*
Write code to print all prime numbers in the range 1 to N.
*/

#include <iostream>

int main(){
  unsigned long long int input_number;
  bool is_prime;
  std::cout<<"Please enter any natural number: ";
  std::cin>>input_number;
  std::cout<< "The prime numbers in the range of 1 to "<<input_number<<" are as follow:\n";
  for(unsigned long long int number_in_range_1_to_N=2;number_in_range_1_to_N<=input_number;number_in_range_1_to_N++){
    is_prime=true;   
    for(int i=2;i<number_in_range_1_to_N;i++){
      if(number_in_range_1_to_N%i==0){
        is_prime=false;
        break;
      }
    }
    if(is_prime){
    std::cout<<number_in_range_1_to_N<<"\n";
    }
  } 
  return 0;
}
