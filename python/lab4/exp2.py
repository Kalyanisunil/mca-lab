def checknum(num):
    # num = input(print("enter a number: "))
    if num % 2 == 0:
        return "Even"
    else:
        return "Odd"
num = int(input("Enter the number:"))
val =checknum(num)
print(val)
