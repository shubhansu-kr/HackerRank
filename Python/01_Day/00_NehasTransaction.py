# https://www.hackerrank.com/contests/k21gp/challenges/nehas-transactions   

withdraw = int(input())
balance = int(input())

if (balance >= withdraw and withdraw % 5 == 0): 
    balance = balance - (withdraw + 5)

digitBalance = str(balance).zfill(2)
print(digitBalance)