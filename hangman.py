def hangman():
    """This program implements the hangman game"""
    import random

    words = ['overrated', 'simple', 'art', 'great', 'toys']

    word = {k:v for k, v in enumerate(list(random.choice(words)))}
    guess = {k:v for v, k in zip([' _ ' for i in range(len(word))], list(word.values()))}
    print(" _ "*len(word))
    life = 6
    idxs = list(range(len(word)))
    while life > 0:
        if " _ " not in guess.values():
            print("You win!!!")
            break
        #else:
        char = input("Guess a letter: ")
        if char in word.values():
            key = ''.join([v for k, v in word.items() if v==char])
            guess[key] = char
            print(" ".join(guess.values()))


        else:
            life -= 1
        if life == 0:
            print("You loose!!!")
            break






if __name__ == '__main__':
    hangman()
