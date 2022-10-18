from fractions import Fraction

def main():
    r = 2000 * 0.010
    q = 1000 * 0.008
    p = 500 * 0.005
    
    r = p / (p + q + r)
    
    return str(Fraction(r).limit_denominator())

ans = main()
print(ans)