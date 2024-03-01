/*
Here we can see that more than one variables are being used without reporting any error. That is because they are declared in the different namespaces and scopes.
*/

#include <iostream>
  namespace first{
    int value;
  }
  int value=2;
int main(){
  //Globally declared 'value' variable will be printed
  std::cout<<value<<std::endl;
  //The variable declared in the first namespace will be set to value 1
  first::value = 1;
  //'value' variable will be created in local scope
  double value;
  value = 3;
  std::cout<<first::value<<std::endl;
  std::cout<<value<<std::endl;
  return 0;
}
