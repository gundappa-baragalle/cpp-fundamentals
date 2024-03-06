#include <iostream>

int main(){
  long long int first_number, second_number;
  std::cout<<"Please enter First Number :";
  std::cin>>first_number;
  std::cout<<"Please enter Second Number :";
  std::cin>>second_number;
  first_number=first_number+second_number;
  second_number=first_number-second_number;
  first_number=first_number-second_number;
  std::cout<<"first_number after swap: "<<first_number<<"\n";
  std::cout<<"second_number after swap: "<<second_number<<"\n";
  return 0;  
}
