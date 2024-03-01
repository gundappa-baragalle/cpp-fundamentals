#include <iostream>
int main(){
  int input_n;
  int sum=0;
  int i=2;
  std::cin>>input_n;
  while(i<=input_n){
    sum=sum+i;
    i=i+2;
  }
  std::cout<<sum<<std::endl;
  return 0;
}
