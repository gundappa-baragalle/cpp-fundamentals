sum_of_all_unknown_number_of_integers = 0
print("Please enter as many integers as you want on seperate lines followed by control+d(on mac) or control+z(on windows)")
while (True):
  try:
    input_integer=int(input())
    sum_of_all_unknown_number_of_integers+=input_integer
  except EOFError:
    break
print("The sum of all numbers you entered is :", sum_of_all_unknown_number_of_integers)

