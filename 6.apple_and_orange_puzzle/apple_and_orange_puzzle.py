'''
Q. There are three closed and opaque cardboard boxes. One is labeled "APPLES", another is labeled "ORANGES", and the last is labeled "APPLES AND ORANGES". You know that the labels are currently misarranged, such that no box is correctly labeled. You would like to correctly rearrange these labels. To accomplish this, you may draw only one fruit from one of the boxes. Which box do you choose, and how do you then proceed to rearrange the labels?
'''
#Solution
#At a time one of the two arrangement should be commented

#1st possible arrangement
#APPLES=["orange","orange","orange","orange","orange","orange"]
#ORANGES=["apple","apple","apple","orange","orange","orange"]
#APPLEANDORANGES=["apple","apple","apple","apple","apple","apple"]

#2nd possible arrangement
APPLES=["apple","apple","apple","orange","orange","orange"] 
ORANGES=["apple","apple","apple","apple","apple","apple"]
APPLEANDORANGES=["orange","orange","orange","orange","orange","orange"]

#This variable is to stimulate the randome picking of a fruit from the box; We can use random generator instead of manually you taking a random number from user the number
random_pick=input("Give a number between 1-6 which I will use to Pick a random Fruit: ")

if(APPLEANDORANGES[int(random_pick)]=="orange"):
  TEMP=ORANGES
  ORANGES=APPLEANDORANGES
  APPLEANDORANGES=APPLES
  APPLES=TEMP
else:
  TEMP=APPLES
  APPLES=APPLEANDORANGES
  APPLEANDORANGES=ORANGES
  ORANGES=TEMP

#Let's see the rearrangement 
print(APPLES)
print(ORANGES)
print(APPLEANDORANGES)
