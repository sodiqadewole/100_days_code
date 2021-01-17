def password_gen():
    """This program generates passords for the user"""
    import random
    from string import ascii_lowercase, ascii_uppercase, digits, punctuation
    letters = list(ascii_lowercase + ascii_uppercase)
    num_letters = int(input("How many letters do you want? "))
    _letters = random.choices(letters, k=num_letters)
    num_dig = int(input("How many digits do you want? "))
    _digits = random.choices(digits, k=num_dig)
    num_chars = int(input("How many charaters do you want?"))
    _chars = random.choices(punctuation, k=num_chars)

    password = _letters + _digits + _chars
    random.shuffle(password)
    password = ''.join(password)
    print(f"Your password is {password}")

if __name__ == '__main__':
    password_gen()
