def calculate_bmi():
    """This module computes users bmi"""
    height = float(input("Enter your height (m): "))
    weight = float(input("Enter your weight (kg): "))

    bmi = weight/height**2
    if bmi < 18.5:
        message = "You are underweight"
    elif bmi <= 25:
        messaeg = "You have normal weight"
    elif bmi <= 30:
        message = "You are overweight"
    elif bmi <= 35:
        message = "You are Obese"
    else:
        message = "You are clinically obese"
    print("Your BMI is: {:.2f}".format(bmi))
    print(message)

if __name__ == '__main__':
    calculate_bmi()
