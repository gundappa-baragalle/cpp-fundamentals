#include <iostream>

int main(){
    int input_number;
	std::cin>>input_number;
    for(int row=1;row<=input_number; row++){
		if(row%2==1){
			for(int odd_row_column=1;odd_row_column<=row;odd_row_column++){
				std::cout<<1;
			}
		} 
		else{
			std::cout<<1;
			for(int even_row_column=2;even_row_column<=row-1;even_row_column++){
				std::cout<<0;
			}
			std::cout <<1;
		}
		std::cout <<"\n";
	}
	return 0;
}
