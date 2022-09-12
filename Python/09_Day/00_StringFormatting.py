# https://www.hackerrank.com/contests/k21gp9/challenges/python-string-formatting


# def print_formatted(number):
#     # your code goes here
#     w = len("{0:b}".format(number))
#     for i in range(1, number+1):
#         print("{0:{width}d} {0:{width}o} {0:{width}x} {0:{width}b}".format(i, width=w))


def print_formatted(number):
    # your code goes here
    w = len("{0:b}".format(number))
    for i in range(1, number+1):
        o = oct(i)
        h = hex(i)
        b = bin(i)
        o = o.replace("0o", "")
        h = h.replace("0x", "")
        b = b.replace("0b", "")
        print(str(i).rjust(w), o.rjust(w), h.upper().rjust(w), b.rjust(w))
