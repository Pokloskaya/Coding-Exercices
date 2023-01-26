import random

def bogosort(arr):
    while not is_sorted(arr):
        random.shuffle(arr)
    return arr

def is_sorted(arr):
    for i in range(len(arr) - 1):
        if arr[i] > arr[i+1]:
            return False
    return True

arr = [1,4,5,6,3,69,420,7,6,4,2,1,2,3,4,5,6,4]
print(bogosort(arr)) # [1, 2, 3]





