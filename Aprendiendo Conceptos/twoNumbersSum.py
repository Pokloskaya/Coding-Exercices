#PROBLEM: Find the two numbers in an array that add up to a given target

def find_numbers_dict(arr, target):
    # Create an empty dictionary
    nums = {}
    # Iterate over the array
    for num in arr:
        # If the difference between the target and the current number is in the dictionary
        print(num)
        if (target - num) in nums:
            # return the pair of numbers that add up to the target
            print("resultado encontrado")
            return (num, target - num)
        # Otherwise, add the current number to the dictionary
        else:
            nums[num] = 1
    # If no pair of numbers is found that add up to the target, return None
    return None

if __name__ == '__main__':
    print("running main")
    arr = [1,2,5,6,3,4,9,23,11]
    target = 8
    result = find_numbers_dict(arr, target)
    print(result)


# 1- The function is called and the dictionary is created and initialized as empty.
# 2- The for loop iterates over the array of numbers.
# 3- For the first number, the if statement checks if the difference between the target and the current number is 
# in the dictionary, but it's empty so the code block inside the if statement is not executed.
# 4- Then, the current number is added to the dictionary.
# 5- The for loop continues with the next number and the process repeats.
# 6- If the difference between the target and the current number is found in the dictionary, the function returns the pair of numbers that add up to the target.
# 7- If the function reaches the end of the array and no such pair is found, it returns None.