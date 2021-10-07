import string
import random
s=[]
low_case=string.ascii_lowercase
upper_case=string.ascii_uppercase
digits=string.digits
punc=string.punctuation
s.extend(low_case)
s.extend(upper_case)
s.extend(digits)
s.extend(punc)
#random.shuffle(s)
x=input("Enter the length of your password")
if(x.isdigit() is True):
    x=int(x)
else:
    print("Please enter string next time!")
    exit(1)
print("".join(random.sample(s,x)))
