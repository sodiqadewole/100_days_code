def calculate_bmi():
    """This module computes users bmi"
    height = float(input("Enter your height (m): "))
    weight = float(input("Enter your weight (kg): "))

    bmi = weight/height

    print("Your BMI is: {}".float(bmi))

if __name__ == '__main__':
    calculate_bmi()
