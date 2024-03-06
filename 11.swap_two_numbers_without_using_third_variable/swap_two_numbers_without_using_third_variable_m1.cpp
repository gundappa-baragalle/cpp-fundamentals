#include <iostream>
int main(){
  long long int first_number;
  long long int second_number;
  std::cout<<"Please give a number for first_number: ";
  std::cin>>first_number;
  std::cout<<"Please give a number for second_number: ";
  std::cin>>second_number;
  long long int i;
  bool first_number_negative=false;
  bool second_number_negative=false;
  if(first_number<0){
    first_number_negative=true;
    first_number=-first_number;
  }
  if(second_number<0){
    second_number_negative=true;
    second_number=-second_number;
  }
  
  for(i=1;first_number/i!=0;i=i*10){
    
  }
  std::cout<<i;
  second_number*=i;
  second_number+=first_number;
  first_number=second_number/i;
  second_number=second_number%i;
  if(first_number_negative){
    second_number=-second_number;
  }
  if(second_number_negative){
    first_number=-first_number;
  }
  std::cout<<"First_number After Swap: "<<first_number<<"\n";
  std::cout<<"Second_number After Swap: "<<second_number<<"\n";
  return 0;
}
