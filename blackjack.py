def blackjack():

    val_dict = {2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:10,
                'J':10, 'Q':10, 'K':10, 'A':1}
    player_cards = []
    computer_cards = []

    for i in range(2):
        player_cards.append(deal_cards())
        computer_cards.append(deal_cards())

    print(f'Your cards: {player_cards}')
    print(f'Computer\'s first card: {computer_cards[0]}')

    deal = input("Type 'y' to get another card, type 'n' to pass: ")

    while True:
        if deal == 'y':
            player_cards.append(deal_cards())
            #computer_cards.append(random.choice(deck))
            print(f"Your cards {player_cards}; \tComputer cards {computer_cards[0]}")
            deal = input("Type 'y' to get another card, type 'n' to pass: ")
        else:
            break

    computer_val = sum([int(val_dict[k]) for k in computer_cards])
    player_val = sum([int(val_dict[k]) for k in player_cards])

    if computer_val > player_val & computer_val < 21:
        print(f"Computer won!!! \n Your cards {player_cards}; \tComputer cards {computer_cards}")
    elif computer_val > player_val & computer_val > 21:
        print(f'You won!!! /n Your cards {player_cards}; \tComputer cards {computer_cards}')
    elif player_val > computer_val & player_val < 21:
        print(f'You won!!! \n Your cards {player_cards}; \tComputer cards {computer_cards}')
    elif player_val > computer_val & player_val > 21:
        print(f'Computer won!!! \n Your cards {player_cards}; \tComputer cards {computer_cards}')

def deal_cards():
    import random
    deck = [2, 3, 4, 5, 6, 7, 8, 9, 10, 'J', 'Q', 'K', 'A']
    return random.choice(deck)

if __name__ == '__main__':
    blackjack()
