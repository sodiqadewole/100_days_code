def leap_year():
    """Determine if a given year is a leap year"""
    year = int(input("Enter a year: "))
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
            else:
                message = "This is not a leap year!"
        else:
            message = "This is a leap year!"
    else:
        message = "This is not a leap year!"

    print(message)

if __name__ == '__main__':
    leap_year()
