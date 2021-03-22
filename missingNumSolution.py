import math 
def missing_number(n):
   if(n < 2):
     return(((2,5)[n]))
   total = math.floor(math.isqrt(10**n)) + (25 * ((10)**(n-2)))
   if(n%2 == 1):
     total += 1
   return(total)
