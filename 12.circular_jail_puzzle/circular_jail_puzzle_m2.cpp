/*
There is a circular jail with 100 cells numbered 1-100. Each cell has an inmate and the door is locked. One night the jailor gets drunk and starts running around the jail in circles. In his first round he opens each door. In his second round he visits every 2nd door (2,4,6---) and shuts the door. In the 3rd round he visits every 3rd door (3,6,9---) and if the door is shut he opens it, if it is open he shuts it. This continues for 100 rounds (i.e. 4,8,12 ---; 5,10,15 ---; ---; 49,98 etc.) and exhausted the jailor falls down. How many prisoners found their doors open after 100 rounds?
*/

#include <iostream>
#include <cmath>

int main(){
  unsigned long long int total_cells_in_circular_jail;
  std::cout<<"Number of cells in the circular jail: ";
  std::cin>>total_cells_in_circular_jail;
  unsigned long long int count_of_perfect_squares=sqrt(total_cells_in_circular_jail);
  std::cout<<"Total number of cells or prisoners with door open: "<<count_of_perfect_squares<<"\n";
  return 0;
}

