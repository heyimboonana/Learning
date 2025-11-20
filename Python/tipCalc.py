orderPriceList = []
foodOrder = []
total = 0.00
      
menu = {
  "cheeseburger": 5.99,
  "fries": 2.99,
  "drink": 1.49
}
#BEGGINING OF CODE

print("Welcome to Burger Queen!")
print(menu)

ordering = True
while ordering:
  order = input("What would you like to order? (Enter DONE to finish ordering): ")
  order = order.lower()
  if order == "done":
    ordering  = False
  elif order in menu:
    price = menu[order]
    foodOrder.append(order)
    orderPriceList.append(price)
  
total = sum(orderPriceList)

print(f"Your order: {', '.join(foodOrder)}")
print(f"The total will come to ${total}")

wannaTip = input("Would you like to tip?: ")
while True:
  if wannaTip.lower() == "yes":
    percent = range(0,100)
    tipPerc= int(input("What percent would you like to tip: "))
    if tipPerc in range(1,100):
      break
    else:
      print("That's not a valid percent")
  elif wannaTip.lower() == "no":
    print("Thank you for coming")
    break

tipAmount = total*(tipPerc/100)
tipAmount = round(tipAmount,2)
print(f"Tip: {tipAmount}")
print(f"Total with tip: ${total + tipAmount}")
