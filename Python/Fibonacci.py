# Fibonacci sequence up to 12 terms
sequence = 12
i = 0
Num1 = 0
Num2 = 1

while i <= sequence:
    if i < 2:
        print(i)
    else:
        sum = Num1 + Num2
        Num1 =Num2
        Num2 =sum
        print(f"{Num1} + {Num2} = {sum}")

    i += 1