/*
There is a circular jail with 100 cells numbered 1-100. Each cell has an inmate and the door is locked. One night the jailor gets drunk and starts running around the jail in circles. In his first round he opens each door. In his second round he visits every 2nd door (2,4,6---) and shuts the door. In the 3rd round he visits every 3rd door (3,6,9---) and if the door is shut he opens it, if it is open he shuts it. This continues for 100 rounds (i.e. 4,8,12 ---; 5,10,15 ---; ---; 49,98 etc.) and exhausted the jailor falls down. How many prisoners found their doors open after 100 rounds?
*/

#include <iostream>

int main(){
  unsigned long long int number_of_cells;
  std::cout<< "Number of cells in the circular jail: ";
  std::cin>>number_of_cells;
  unsigned long long int number_of_prisoners_with_doors_open=0;
  std::cout<<"The cells whose doors will be open are: \n";
  for(unsigned long long int cell_number=1;cell_number<=number_of_cells;cell_number++){
    unsigned long long int number_of_divisors_of_cell_number=0;
    for(int i=1;i<=cell_number;i++){
      if(cell_number%i==0){
        number_of_divisors_of_cell_number++;
      }
    }
    if(number_of_divisors_of_cell_number%2==1){
      number_of_prisoners_with_doors_open++;
      std::cout<<cell_number<<"\n";
    }
  }
  std::cout<<"Total number of cells or prisoners with doors open are: "<<number_of_prisoners_with_doors_open<<"\n";
  return 0;
}
