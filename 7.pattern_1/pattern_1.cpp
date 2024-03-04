/*
1. Start
2. Declare integer variables: number_of_rows, value_to_be_printed
3. Read the number of rows from the user (number_of_rows)
4. Set value_to_be_printed to 1
5. For each row from 1 to number_of_rows:
    6. For each column from 1 to the current row number:
        7. Print value_to_be_printed followed by a space
        8. Increment value_to_be_printed by 1
    9. Print a new line
10. End
*/


#include<iostream>
int main(){
  int number_of_rows;
  int value_to_be_printed;
  std::cin>>number_of_rows;
  value_to_be_printed=1;
  for(int row=1;row<=number_of_rows;row++){
    for(int column=1;column<=row;column++){
      std::cout<<value_to_be_printed<<" ";
      value_to_be_printed=value_to_be_printed+1;
    }
    std::cout<<std::endl;
  }
  return 0;
}
