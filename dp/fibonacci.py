# A dynamic programming solution would involve storing the already calculated values
# in a table and using them to calculate the next value in the sequence, reducing the time complexity.

def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        #list to store the calculated values
        fib = [0] * (n+1) #create an array of size (n+1) and initializing all the values to 0.
        # Initialize the first two values
        fib[0] = 0
        fib[1] = 1
        # Iterate through the list and calculate the next value
        for i in range(2, n+1):
            fib[i] = fib[i-1] + fib[i-2] #memoization
        return fib[n]

print(fibonacci(10)) # Output: 55
