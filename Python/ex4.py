#INPUT
#The Formula Used for Temperature Conversion of Fahrenheit and Celsius is:
#The conversion of the temperature from Fahrenheit to Celsius formula is C = (F − 32) × 5 ⁄ 9.
#conversion of the temperature from Celsius to Fahrenheit formula is F = C(9 ⁄ 5) + 32.

print("Enter celcius to be converted to fahrenheit:", end = ' ')
celcius_input = int(input())
fahrenheit = (celcius_input * (9/5) + 32)

print(fahrenheit)
