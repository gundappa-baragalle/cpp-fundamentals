#include <iostream>
#include <cstdio>
int main(){
  int input;
  std::cout<<"Please enter a number greater than 1: ";
  std::cin>>input;
  for(int i=2;i<input;i++){
    if(input%i==0){
      std::cout<<"the given number '"<<input<<"' is not a prime number"<<std::endl;
      return 0; 
    }
  }
  std::cout<<"The given number '"<<input<<"' is a prime number"<<std::endl;
  return 0;
}

