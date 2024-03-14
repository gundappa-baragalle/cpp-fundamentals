#include <iostream>

int main()
{
  int current_value = 0,input_value = 0;
  if (std::cin >> current_value)
  {
    int count = 1;
    while (std::cin >> input_value)
    {
      if (current_value == input_value)
      {
        ++count;
      }
      else
      {  
        std::cout << current_value << " occurs " << count << " times " << std::endl;
        current_value = input_value;
        count = 1;
      }
    }
    std::cout << current_value << " occurs " << count << " times " << std::endl;
  }

  return 0;
}
