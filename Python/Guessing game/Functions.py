#https://pypi.org/project/random_word/ library for random

import random
from wonderwords import RandomWord

def pickWord():
    r = RandomWord()
    word = r.word(include_parts_of_speech=["nouns"])
    return word

def pickNum():
    while True:
        numLength = input("How many digits: ")
        try:
            numLength = int(numLength)
            if numLength > 0:
                print("Digits: "+ str(numLength))
                break
            else:
                print("Pick a number greater than 0")
        except ValueError:
            print("That's not a valid input, pick a whole number greater than 0")
    num = random.randint(pow(10,(numLength-1)),(pow(10,numLength)))
    return num

def pickMode():
    while True:
        gameMode = input("Enter 1 for Word Guessing game or 2 for Number Guessing Game: ")
        try:
            gameMode = int(gameMode)
            if gameMode == 1:
                print("Playing Word Guessing Game\n")
                break
            elif gameMode == 2:
                print("Playing Number Guessing Game\n")
                break
            else:
                print("That's not a valid input, pick 1(Word Guessing game) or 2(Number guessing game)")
        except ValueError:
            print("That's not a valid input, enter a whole number greater than 0")
    return gameMode

def pickTries():
    while True:
        tries = input("How many tries would you like: ")
        try:
            tries = int(tries)
            if tries > 0:
                break
            else:
                print("That's not a valid input, pick a number greater than 0")
        except ValueError:
            print("That's not a valid input, enter a whole number greater than 0")
    return tries
