

def count_substring(string, sub_string):
    count = 0
    for i in range(len(string)-len(sub_string)+1): 
        flag = 1
        for j in range(len(sub_string)):
            if(string[i+j] != sub_string[j]): 
                flag = 0
                break
        if (flag): 
            count = count + 1
    return count