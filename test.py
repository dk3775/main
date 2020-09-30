n=int(input('Enter N to find factorial: '))
fact=1
x=n
for i in range(n):
    fact*=x
    x-=1
print('Fatorial of ',n,'is : ',fact)