def fixed(balance, annualInterestRate):

    res = 10
    b1 = balance
    while b1 > 0:
    	res += 10
    	b1 = balance
    	month = 1
    	while month <= 12 and b1 > 0:
    		b1 -= res
    		interest = annualInterestRate/12 * b1
    		b1 += interest
    		month += 1
    	b1 = round(b1, 2)
    return res

balance = 3329
annualInterestRate = 0.2
print("Lowest Payment:", fixed(balance, annualInterestRate))
