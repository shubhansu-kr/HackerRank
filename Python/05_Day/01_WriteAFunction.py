# https://www.hackerrank.com/contests/k21gp5/challenges/write-a-function

year = int(input())

leap = False

if (year % 100 == 0 and year % 400 == 0): 
    leap = True
elif(year % 100 and year % 4 == 0): 
    leap = True

print(leap) 