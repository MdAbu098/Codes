n = int(input())
x = n>1 and all(n%i==0 for i in range(2, int(n**0.5)+1))

print("prime" if x else "not prime")