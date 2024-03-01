#include <iostream>
int main(){
  int input;
  int total_factors_of_input=0;
  std::cin>>input;
  for(int i=2;i<input;i=i+1){
    if(input%i==0){
      total_factors_of_input++;
    }
  }  
  if(total_factors_of_input>0){
    std::cout<<"the given number '"<<input<<"' is not a prime number."<<std::endl;
  }
  else{
  std::cout<<"the given number '"<<input<<"' is a prime number."<<std::endl;
  }
  return 0;
}
