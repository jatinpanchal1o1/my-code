#for end="";
from __future__ import print_function

#for input;
n = int(input("Enter the value: "))

#for loop
j = 0
for i in range(n):
    while j<=i:
        print("#", end="")
        j += 1
    print()    