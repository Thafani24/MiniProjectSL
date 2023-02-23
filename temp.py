temp = float(input("Enter Temperature: "))
unit = input("Enter unit('C' for Celsius or 'F' for Fahrenheit): ")

if unit == 'C' or unit == 'c' :
    newTemp = 9 / 5 * temp + 32
    print("Temperature in Fahrenheit =", newTemp , 'F')
elif unit == 'F' or unit == 'f' :
    newTemp = 5 / 9 * (temp - 32)
    print("Temperature in Celsius =", newTemp , 'C')
else :
    print("Invalid unit", unit)
