#https://pypi.org/project/random_word/ library for random

from random_word import RandomWords
r = RandomWords()
random_word = r.get_random_word()
print(random_word)

print("Guessing game\n")
print("Enter 1 for Word Guessing game")
print("Enter 2 for Number Guessing game")
gameMode = input("")

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

for i in tries:
    print("Guess a ")