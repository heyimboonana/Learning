import Functions
#This was added from laptop
def WordGuess():
    for i in range(tries):
        guessInput = input("\nGuess a word: ")
        if guessInput == wordAnswer:
            print("\nCORRECT!")
            return None
        else:
            print("That's not it")
            
        print("Tries left: " + str(tries-(i+1)) + "\n")
    print("You failed, the word is: "+ wordAnswer)

def numGuess():
    for x in range(tries):
        numGuess = input("Guess a number: ")
        numGuess = int(numGuess)
        if numAnswer == numGuess:
            print("CORRECT")
            print("Tries: " + str((x+1)))
            print("Tries left: " + str(tries - (x+1)))

            return None
        if x == ((int(tries))-1):
            print("You failed, the correct number is: " + str(numAnswer))
            return None
        elif numGuess > numAnswer:
            print("Lower")
        else:
            print("Higher")
            


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
    numGuess()
