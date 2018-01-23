secretWord = 'apple'
lettersGuessed = ['e', 'i', 'k', 'p', 'r', 's']

def getGuessedWord(secretWord, lettersGuessed):
	ans = ''
	for letter in secretWord:
		if letter in lettersGuessed:
			ans += letter
		else:
			ans += '_ '
	return ans

print(getGuessedWord(secretWord, lettersGuessed))