def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        # Create an empty list to store the calculated values
        fib = [0] * (n+1)
        # Initialize the first two values
        fib[0] = 0
        fib[1] = 1
        # Iterate through the list and calculate the next value
        for i in range(2, n+1):
            fib[i] = fib[i-1] + fib[i-2]
        return fib[n]

print(fibonacci(10)) # Output: 55
