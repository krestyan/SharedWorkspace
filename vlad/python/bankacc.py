def ybal(balance, annualInterestRate, monthlyPaymentRate):

    for i in range(0, 12):
        monthly = balance * monthlyPaymentRate
        res = (balance - monthly) + annualInterestRate/12*(balance-monthly)
        balance = res
    return res

balance = 484
annualInterestRate = 0.2
monthlyPaymentRate = 0.04
print("Remaining balance:", round(ybal(balance, annualInterestRate, monthlyPaymentRate), 2))