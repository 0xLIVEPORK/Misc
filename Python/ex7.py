from sys import argv
script, peso = argv

peso = int(peso)

if type(peso) == int:
    print(peso * 55.3, "USD")
