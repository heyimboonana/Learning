import WordGuess

print("Guessing game\n")
print("Enter 1 for Word Guessing game")
print("Enter 2 for Number Guessing game\n")

#Pick Game Mode
gameMode = WordGuess.pickMode()

#Pick how many tries
tries = WordGuess.pickTries()


if gameMode == 1:
    word = WordGuess.pickWord()
    print(word)
elif gameMode == 2:
    num = WordGuess.pickNum()