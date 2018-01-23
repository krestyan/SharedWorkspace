import string
lettersGuessed = ['e', 'i', 'k', 'p', 'r', 's']

def getAvailableLetters(lettersGuessed):

	alphabet = string.ascii_lowercase
	for letter in lettersGuessed:
			alphabet = alphabet.replace(letter, '')
	return alphabet


print(getAvailableLetters(lettersGuessed))