def life_in_weeks():
    '''Calculate your life in weeks
    '''
    age = int(input("What is your age?"))
    limit = int(input("How long do you wish to live for?"))

    years_left = limit - age
    months_left = (limit - age) * 12
    weeks_left = (limit - age) * 52
    days_left = (limit - age) * 365

    print(f"You have {days_left} days, {weeks_left} weeks and {months_left} months left.")


if __name__ == '__main__':
    life_in_weeks()
