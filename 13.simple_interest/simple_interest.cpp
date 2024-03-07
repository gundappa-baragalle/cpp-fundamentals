#include <iostream>

int main(){
  unsigned long long int principle,rate_in_per_month_per_100,time_in_months;
  float simple_interest; 
  std::cout<<"What is the principle: ";
  std::cin>>principle;
  std::cout<<"What is the rate per month per 100: ";
  std::cin>>rate_in_per_month_per_100;
  std::cout<<"What is the time in months: ";
  std::cin>>time_in_months;
  simple_interest=(principle*time_in_months*rate_in_per_month_per_100)/100.0;
  std::cout<<"The simple interest for the above given data is : "<<simple_interest<<"\n";
  return 0;
}
