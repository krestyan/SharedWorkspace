secretWord = 'apple'
lettersGuessed = ['e', 'i', 'k', 'p', 'r', 's']

def isWordGuessed(secretWord, lettersGuessed):
	result = False
	for letter in secretWord:
		print('letter = ', letter, '\n')
		if letter in lettersGuessed:
			result = True
		else:
			result = False
			break

	return result





print(isWordGuessed(secretWord, lettersGuessed))