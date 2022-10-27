import re
RXT = "^[456][0-9]{3}\-?[0-9]{4}\-?[0-9]{4}\-?[0-9]{4}"

def Check_Consecutive(st):
    index = 0
    digi = None
    
    for s in st.replace('-',''):
        if s == digi:
            index += 1
        else:
            index = 0
            digi = s
            
        if index == 3:
            return False
    return True
    

n = int(input())
for i in range(n):
    car = input()
    print(f"{ 'V' if re.fullmatch(RXT, car) and Check_Consecutive(car) else 'Inv'}alid")