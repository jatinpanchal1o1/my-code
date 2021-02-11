n=0
#for input;
while n<=0:
    n = int(input("Enter the value: "))
#for loop
for i in range(n,0,-1):
    for j in range(i):
        print(" ", end="")     
    for k in range(0,n):
        print("#", end="")
    print()    