def add_even():
    '''This program adds all the even numbers to a set limit'''
    limit = int(input("Enter a limit: "))
    sum_even = 0
    for i in range(limit):
        if i % 2 == 0:
            sum_even += i

    print(f'The sum of even from zero to {limit} is {sum_even}')


if __name__ == '__main__':
    add_even()
