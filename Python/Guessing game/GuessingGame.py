import Functions

def WordGuess():
    for i in range(tries):
        guessInput = input("\nGuess a word: ")
        if guessInput == wordAnswer:
            print("CORRECT!")
            return None
        else:
            print("That's not it")
            
        print("Tries left: " + str(tries-(i+1)) + "\n")
    print("You failed, the word is: "+ wordAnswer)

print("Guessing game")

#Pick Game Mode
gameMode = Functions.pickMode()

#Pick how many tries
tries = Functions.pickTries()


if gameMode == 1:
    wordAnswer = Functions.pickWord()
    WordGuess()
elif gameMode == 2:
    numAnswer = Functions.pickNum()
    numLength = Functions.numLength()
    print(numLength)
    print(numAnswer)
