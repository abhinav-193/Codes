str=input(("Enter the name:"))
str=str.split(" ")
w=''
for word in str[0:(len(str)-1)]:
     w=w+word[0]+"."
x=input("Press 1 if you are male else press 2 if you are female:")
x=int(x)
if (x==1):
 print("Thank you,Mr.",w+str[len(str)-1])
elif(x==2):
 print("Thank you,Ms.",w+str[len(str)-1])
elif(x!=1 or x!=2):
  print("Thank you,", w + str[len(str) - 1])

