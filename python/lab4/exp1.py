amt = int(input("enter the principal amount:"))
rate = int(input("enter the rate :"))
time = int(input("enter the  time period:"))
senior = input("are you a senior citizen (True/False)")
if senior.lower()==True:
    print("rate is 12 percent")
    rate = 12
    si = (amt * rate * time) / 100
    print(si)
else:
    si = (amt * rate * time) / 100
    print(si)
