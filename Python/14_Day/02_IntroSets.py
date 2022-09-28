def average(array):
    s = set({})
    sum = 0
    count = 0
    for i in array: 
        if i not in s: 
            count = count + 1 
            sum = sum + i 
            s.add(i)
    return sum/count

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)