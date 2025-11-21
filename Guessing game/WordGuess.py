#https://pypi.org/project/random_word/ library for random
from wonderwords import RandomWord

def pickWord():
    r = RandomWord()
    word = r.word(include_parts_of_speech=["nouns"])
    return word

def pickNum():
    

def pickMode():
    while True:
        gameMode = input("")
        try:
            gameMode = int(gameMode)
            if gameMode == 1:
                print("Playing Word Guessing Game")
                break
            elif gameMode == 2:
                print("Playing Number Guessing Game")
                break
            else:
                print("That's not a valid input, pick 1(Word Guessing game) or 2(Number guessing game)")
        except ValueError:
            print("That's not a valid input, enter a whole number greater than 0")
    return gameMode

def pickTries():
    while True:
        tries_input = input("How many tries would you like: ")
        try:
            tries = int(tries_input)
            if tries > 0:
                break
            else:
                print("That's not a valid input, pick a number greater than 0")
        except ValueError:
            print("That's not a valid input, enter a whole number greater than 0")
