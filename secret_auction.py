def secret_auction():
    import os

    print("Welcome to the secret auction program.")
    bidders = {}
    bidder = input("What is your name?: ")
    bid = float(input("What is your bid?: $"))

    bidders[bidder] = bid
    to_next = 'yes'

    while to_next == 'yes':
        to_next = input("Are there any other bidders? Type 'yes' or 'no'.")
        if to_next == 'yes':
            os.system('clear')
            bidder = input("What is your name?: ")
            bid = float(input("What is your bid?: $"))
            bidders[bidder] = bid
        else:
            break

    max_bid = max(bidders.values())
    inv_bidders = {v:k for k,v in bidders.items()}
    highest_bidder = inv_bidders[max_bid]
    print(f'The winner is {highest_bidder} with a bid of ${max_bid}')

if __name__ =='__main__':
    secret_auction()
