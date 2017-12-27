def fixed(balance, annualInterestRate):

    res = 10
    b1 = balance
    while b1 > 0:
        b0 = balance
        for i in range(0, 12):
            b0 = (b1 - res) + annualInterestRate/12*(b1-res)
            b1 = b0
            print('i=', i, 'b1 = ', b1)
            if (abs(b1) > res):
                res += 10
                print('res = ', res)
    return res

balance = 3329
annualInterestRate = 0.2
print("Lowest Payment:", fixed(balance, annualInterestRate))
