
print('Please think of a number between 0 and 100! \n')
low = 0
high = 100
number = (high + low)/2
guess = 0
while guess != 1:
    number = (high + low)//2
    print('Is your secret number', str(number),'?')
    print("Enter 'h' to indicate the guess is too high. Enter 'l' to indicate the guess is too low. Enter 'c' to indicate I guessed correctly.", end='')
    user = input()
    if user == 'h':
        high = number
    elif user == 'l':
        low = number
    elif user == 'c':
        guess = 1
        print('Game over. Your secret number was:', str(number))
    else:
        print('Sorry, I did not understand your input.')

