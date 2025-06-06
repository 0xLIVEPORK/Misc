import random

x = random.randrange(1, 10)

print(x)

if x % 2 == 0:
    print("fizz")

elif x % 3 == 0:
    print("buzz")

else:
    print("cock")
