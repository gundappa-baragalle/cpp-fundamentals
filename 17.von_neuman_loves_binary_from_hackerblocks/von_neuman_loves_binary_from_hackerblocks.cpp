#include <iostream>

int main(){
  int total_number_of_binary_inputs;
  long long int binary_input;
  int binary_place_value;
  int decimal_output;
  for(std::cin>>total_number_of_binary_inputs;total_number_of_binary_inputs>=1;total_number_of_binary_inputs--){
    binary_place_value=1;
    decimal_output=0;
    for(std::cin>>binary_input;binary_input!=0;binary_input/=10){
      decimal_output=decimal_output+((binary_input%10)*binary_place_value);
      binary_place_value=binary_place_value*2;
    }
    std::cout<<decimal_output<<"\n";
  }
  return 0;
}
