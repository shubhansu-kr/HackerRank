if y1 > y2: return 10000
    elif y1 == y2 and m1 > m2: return 500 * (m1 - m2)
    elif y1 == y2 and m1 == m2 and d1 > d2: return 15 * (d1 - d2)
    else: return 0