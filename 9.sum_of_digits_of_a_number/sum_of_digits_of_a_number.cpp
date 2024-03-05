/*
PSEUDO CODE:
1. Start
2. Declare long long int variable input_number, unsigned long long int variable sum_of_digits_0f_input_number and i 
3. Read the input_number from user
4. Set sum_of_digits_of_input_number to 0
5. If input_number is non negative set i to input_number else set it to -(input_number)
6. while i is not equal to zero
   7. Set sum_of_digits_of_input_number to sum_of_digits_of_input_number+(i%10)
   8. Set i to i/10
9. Print sum_of_digits_of_input_number
10 End 
*/

#include <iostream>

int main(){
  long long int input_number;
  unsigned long long int sum_of_digits_of_input_number;
  unsigned long long int i;
  std::cout<<"Please input a integer value: ";
  std::cin>>input_number; 
  sum_of_digits_of_input_number=0;
  if(input_number<0){
    i=-input_number;
  }
  else{
    i=input_number;
  }
  while(i!=0){
    sum_of_digits_of_input_number+=(i%10);
    i=i/10;
  }
  std::cout<<"\nSum of digits of the number "<<input_number<<" is: "<<sum_of_digits_of_input_number<<"\n";
  return 0;
}
