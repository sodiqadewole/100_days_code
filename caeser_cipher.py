def caeser_cipher():
    """This program implements the concept of encoding messages
    using the Caeser Cipher technique"""

    while True:
        to_do = input("Type \'encode\' to encrypt, type \'decode\' to decrypt:")
        if to_do == 'encode':
            msg = input("Type your message: \n").lower()
            shift = int(input("Type the shift number: \n"))
            result = encode(msg, shift)
            print(f"Here is the encoded result: {result}\n")
            response = input("Type \'yes\' if you want to go again. Otherwise type \'no\'.")
            if response == 'yes':
                continue
            else:
                break


        elif to_do == 'decode':
            msg = input("Type your message: \n").lower()
            shift = int(input("Type the shift number: \n"))
            result = decode(msg, shift)
            print(f"Here is the encoded result: {result}\n")
            response = input("Type \'yes\' if you want to go again. Otherwise type \'no\'.")
            if response == 'yes':
                continue
            else:
                break

def encode(msg, shift):
    from string import ascii_letters
    result = []
    for letter in msg:
        idx = ascii_letters.index(letter)
        new_idx = idx + shift
        if new_idx < len(ascii_letters):
            result.append(ascii_letters[new_idx])
        else:
            new_idx = len(ascii_letters-1)
            result.append(ascii_letters[new_idx])

    return ''.join(result)

def decode(msg, shift):
    from string import ascii_letters
    result = []
    for letter in msg:
        idx = ascii_letters.index(letter)
        new_idx = idx - shift
        if new_idx < len(ascii_letters):
            result.append(ascii_letters[new_idx])
        else:
            new_idx = len(ascii_letters)
            result.append(ascii_letters[new_idx])
    return ''.join(result)


if __name__ == '__main__':
    caeser_cipher()
