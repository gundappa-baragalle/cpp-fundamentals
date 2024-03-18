'''
The way to learn a new programming language is to write programs. In this chapter, we’ll write a program to solve a simple problem for a bookstore.
Our store keeps a file of transactions, each of which records the sale of one or more copies of a single book. Each transaction contains three data elements:
     0-201-70353-X 4 24.99
The first element is an ISBN (International Standard Book Number, a unique book identifier), the second is the number of copies sold, and the last is the price at which each of these copies was sold. From time to time, the bookstore owner reads this file and for each book computes the number of copies sold, the total revenue from that book, and the average sales price.
'''
def record_new_transaction():
  print("\n\n\n--------------------------------------------")
  print("-----------RECORD NEW TRANSACTION-----------")
  print("--------------------------------------------")
  transactions.append([])
  transactions[len(transactions)-1].append(input("What is the book ISBN? : "))
  transactions[len(transactions)-1].append(int(input("Number of copies sold? : ")))
  transactions[len(transactions)-1].append(float(input("Price at which each of these copies was sold? : ")))
  print("--------------------------------------------\n\n\n")
def show_all_transactions():
  print("\n\n\n--------------------------------------------")
  print("--------------ALL TRANSACTIONS--------------")
  print("--------------------------------------------")
  print('["ISBN","Number of copies sold","Price of each of these copies"]')
  for i in range(len(transactions)):
    print(transactions[i])
  print("--------------------------------------------\n\n\n")
def summarise_all_transactions():
  summary=[]
  for i in range(len(transactions)):
    add=True
    for j in range(len(summary)):
      if(transactions[i][0]==summary[j][0]):
        add=False
        break
    if(add):
      summary.append([])
      summary[len(summary)-1].append(transactions[i][0])
      total_copies_sold=0;
      total_revenue_from_the_book=0;
      for k in range(len(transactions)):
        if(transactions[k][0]==transactions[i][0]):
          total_copies_sold=total_copies_sold+transactions[k][1]
          total_revenue_from_the_book=total_revenue_from_the_book+ (transactions[k][1]*transactions[k][2])
      summary[len(summary)-1].append(total_copies_sold)
      summary[len(summary)-1].append(total_revenue_from_the_book)
      summary[len(summary)-1].append(total_revenue_from_the_book/total_copies_sold)
  print("\n\n\n--------------------------------------------")
  print("---------SUMMARY OF ALL TRANSACTIONS--------")
  print("--------------------------------------------")
  print('["ISBN","Total Copies Sold","Total revenue from the book","The average sales price of the book"]')
  for i in range(len(summary)):
    print(summary[i])
  print("--------------------------------------------\n\n\n")
transactions=[]
print("Hey, Welcome to Transactions.app!")
input_prompt=""
while(input_prompt!="Close"):
  input_prompt=input("What you want me to do?\n1.Record new transaction\n2.Show all transactions\n3.Summarise all transactions\n:")
  if(input_prompt=="Record new transaction" or input_prompt=="1"):
    record_new_transaction()
  elif(input_prompt=="Show all transactions"or input_prompt=="2"):
    show_all_transactions()
  elif(input_prompt=="Summarise all transactions" or input_prompt=="3"):
    summarise_all_transactions()
  elif(input_prompt=="Close" or input_prompt=="4"):
    break
  else:
    continue
