# value_of_S(list L)
# {
#     while ((number of elements in L) > 1)
#     {
#         a = L[0]
#         b = L[1]
#         delete L[1]
#         L[0] = a+b+ab
#     }
#     return L[0] % 1000000007
# }

def valS(L): 
    while((len(L))>1): 
        a = L[0]
        b = L[1]
        L.remove(L[1])
        L[0] = a + b + a*b
    return L[0] 