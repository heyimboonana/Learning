print("Guessing game\n")

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