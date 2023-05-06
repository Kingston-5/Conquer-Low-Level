guess = 5   # initial guess

# get limit 
limit = int(input("Find prime numbers up to: "))

print('2\n3') # print special cases

while guess <= limit:
    factor = 3
    while (factor*factor) < guess and guess % factor != 0:
        factor = factor+2
    if(guess % factor) != 0:
        print(guess)
    guess += 2
