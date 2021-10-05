# program to calculate geometric sum of progression 1/n.
def geometric_sum(n):
  if n < 0:
    return 0
  else:
    return 1 / (pow(2, n)) + geometric_sum(n - 1)

n = int(input('Enter value of n:'))
print(geometric_sum(n))
