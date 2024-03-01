#include <iostream>
int main(){
  int input_n;
  int sum=0;
  std::cin>>input_n;
  for(int i=2;i<=input_n;i=(i+2)){
    sum=sum+i;
  }
  std::cout<<sum<<std::endl;
  return 0;
}
