balance = 320000
annualInterestRate = 0.2
epsilon = 0.01

def get_balance(tempbalance, payment):
	for i in range(12):
		unpaidbalance = tempbalance - payment
		interest = unpaidbalance * monthlyinterestrate
		tempbalance = unpaidbalance + interest
	return round(tempbalance, 2)


monthlyinterestrate = annualInterestRate/12
minpay = balance/12
maxpay = (balance * (1 + monthlyinterestrate)**12)/12
payment = (minpay + maxpay)/2

answer = get_balance(balance, payment)

while abs(answer) >= epsilon:
	if answer < 0:
		maxpay = payment
	else:
		minpay = payment
	payment = (minpay + maxpay) / 2
	answer = get_balance(balance, payment)
print("Lowest Payment:", round(payment, 2))


