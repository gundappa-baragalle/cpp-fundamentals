#include <iostream>

int main(){
  int input_number;
  std::cin>>input_number;
  for(int row=1; row<=input_number; row++){
    if(row%2==1){
      for(int column_for_odd_row=1;column_for_odd_row<=row;column_for_odd_row++){
        std::cout<<1;
      }
    }
    else{
      for(int column_for_even_row=1; column_for_even_row<=row;column_for_even_row++){
        if(column_for_even_row==1 || column_for_even_row==row){
          std::cout<<1;
        }
        else{
          std::cout<<0;
        }
      }
    }
    std::cout<<"\n";
  }
  return 0;
}
