def banker_roulette():
    """This program decides who pay
    bill from a list of input"""
    import random

    names = []
    name = input("Enter a name: ")
    names.append(name)
    while  True:
        if name == "":
            break
        else:
            name = input("Next name: ")
            names.append(name)


    to_pay = random.randint(0, len(names)-1)
    print("{} will be paying the bill today".format(names[to_pay]))


if __name__ == '__main__':
    banker_roulette()
