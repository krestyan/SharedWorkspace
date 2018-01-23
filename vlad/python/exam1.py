#listA = [1, 2, 3]
#listB = [4, 5, 6]

#def dotProduct(listA, listB):
#	sum = 0
#	for i in range(len(listA)):
#		sum += listA[i]*listB[i]
#	return sum
#
#print(dotProduct(listA, listB))

# aDict = {1: 2, 3: 4, 5: 6, 2:4}
# n = 0

# def keysWithValue(aDict, target):
#     '''
#     aDict: a dictionary
#     target: an integer
#     '''
#     ans = []
#     for key in aDict.keys():
#     	if aDict[key] == target:
#     		ans.append(key)
#     return(sorted(ans))


# print(keysWithValue(aDict, n))

# s1 = 'abc'
# s2 = 'dfgdf'

# def laceStringsRecur(s1, s2):
#     """
#     s1 and s2 are strings.

#     Returns a new str with elements of s1 and s2 interlaced,
#     beginning with s1. If strings are not of same length,
#     then the extra elements should appear at the end.
#     """
#     def helpLaceStrings(s1, s2, out):
#         if s1 == '':
#             return s2
#         if s2 == '':
#         	return s1
#         else:
#             return(s1[0] + s2[0] + laceStringsRecur(s1[1:], s2[1:]))
#     return helpLaceStrings(s1, s2, '')

# print(laceStringsRecur(s1, s2))

L = [1, 2, 3, 4]


def general_poly (L):
    """ L, a list of numbers (n0, n1, n2, ... nk)
    Returns a function, which when applied to a value x, returns the value
    n0 * x^k + n1 * x^(k-1) + ... nk * x^0 """

    def xtok(x):
    	k = len(L) - 1
    	ans = 0
    	for i in range(len(L)):
    		ans += L[i] * x ** k
    		k -= 1
    	return ans

    return xtok

print(general_poly(L)(2))

