mo = "y"
while mo == "y":
    milk = float(input("Enter the amount of milk :"))
    koya = int(input("Enter the amount of koya :"))
    total = milk * ((koya*38)/200)

    print(f" totatl amount of milk cost is : {total}")
    mo = input("Do you want to continue? y/n")
