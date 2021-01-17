def tip_calculator():
    greetings = "Welcome to the tip calculator "
    print(greetings)
    bill = float(input("What was the total bill? $"))
    percent_tip = int(input("What percentage of tip would you like to give?  "))
    persons = int(input("How many people to split the bill? $"))

    tip = (bill*percent_tip)/100
    total_bill = bill + tip
    share = round(total_bill/persons, 2)
    print(f"Each person should pay: {share} ")

if __name__ == '__main__':
    tip_calculator()
