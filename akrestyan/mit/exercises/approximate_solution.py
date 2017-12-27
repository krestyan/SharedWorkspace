cube = 128
ep = 0.01
guess = 0.0
increment = 0.000000001
num_guesses = 0
while abs(guess**3 - cube) >= ep and guess <= cube:
    guess += increment
    num_guesses += 1
print("Number of guesses: ", num_guesses)
if abs(guess**3 - cube) >= ep:
    print('Failed on cube root of ', cube)
else:
    print(guess, 'is close to the cube root of ', cube)