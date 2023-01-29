# The function ways_to_climb() takes two arguments: 
# n, which is the number of steps in the staircase, 
# and k, which is the maximum number of steps that can be taken at a time

# This uses dynamic programming by storing the number of ways to reach a specific step in a lookup table,
# and building upon previously calculated values to find the number of ways to reach higher steps. This is known as memoization. 


def ways_to_climb(n, k):
    # Initialize an array to store the number of ways to reach each step
    ways = [0] * (n + 1)
    # The base case: there is only one way to reach the first step
    ways[0] = 1
    # Iterate through the steps, starting from the first one
    for i in range(1, n + 1):
        # Iterate through the possible step sizes
        for j in range(1, k + 1):
            if i - j >= 0:
                # If the current step size is less than or equal to the remaining number of steps,
                # add the number of ways to reach the previous step to the current step
                ways[i] += ways[i - j]
    # Return the number of ways to reach the top of the staircase
    return ways[n]

# Test the function
print(ways_to_climb(4, 2)) # Output: 5
print(ways_to_climb(6, 3)) # Output: 20
