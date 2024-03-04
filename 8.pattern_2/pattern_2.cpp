/*
Write code to print the following pattern 
1 
232 
34543 
4567654 
567898765
*/

#include <iostream>
int main(){
  int number_of_rows;
  std::cin>>number_of_rows;
  int number_to_be_printed;
  for(int row=1;row<=number_of_rows;row++){
    number_to_be_printed=row;
    for(int increasing_column=1;increasing_column<=row;increasing_column++){
      std::cout<<number_to_be_printed<<" ";
      number_to_be_printed++;
    }
    number_to_be_printed-=2;
    for(int decreasing_column=1;decreasing_column<row;decreasing_column++){
      std::cout<<number_to_be_printed<<" ";
      number_to_be_printed--;
    }
    std::cout<<"\n";
  }
  return 0;
}
