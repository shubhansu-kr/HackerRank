# https://www.hackerrank.com/contests/k21gp/challenges/nehas-transactions   

balance = int(input())
withdraw = int(input())

if (balance >= withdraw and balance % 5 == 0): 
    balance = balance - (withdraw + 5)

digitBalance = str(balance).zfill(2)
print(digitBalance)