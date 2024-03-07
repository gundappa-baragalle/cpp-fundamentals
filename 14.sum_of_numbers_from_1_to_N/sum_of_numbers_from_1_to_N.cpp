/*
Write a program to find sum of numberss from 1 to N using while loop.
*/


#include <iostream>

int main(){
  unsigned int N;
  std::cout<<"Please enter a natural number: ";
  std::cin>>N;
  unsigned int sum=0;
  unsigned int i=1;
  while(i<=N){
    sum+=i;
    i++;
  }
  std::cout<<"Sum of numbers from 1 to "<<N<<" is: "<<sum<<"\n";
  return 0;
}
