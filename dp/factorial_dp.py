def factorial_dp(n: int) -> int:
    # Initialize an array to store the calculated values
    dp = [0] * (n + 1)
    # Base case
    dp[0] = 1
    # Iterate from 1 to n
    for i in range(1, n+1):
        # Store the current factorial value
        dp[i] = i * dp[i-1]
    # Return the factorial of n
    return dp[n]

# Test the function
print(factorial_dp(5)) # Output: 120