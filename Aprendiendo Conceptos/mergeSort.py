def merge_sort(arr, level = 0):
    indent = "  " * level #that * operator is string repetition operator
    print(f"{indent}merge_sort({arr})")
    if len(arr) > 1:
        # Divide the array into two equal-sized subarrays
        mid = len(arr)//2
        left_half = arr[:mid]
        right_half = arr[mid:]

        # Recursively sort each subarray
        merge_sort(left_half, level + 1)
        merge_sort(right_half, level + 1)

        # Merge the two sorted subarrays back into a single sorted array
        leftIndex = 0 #keeps track of the current index in the left subarray,
        rightIndex = 0 #keeps track of the current index in the right subarray
        finalIndex = 0 #keeps track of the current index in the original array.

        while leftIndex < len(left_half) and rightIndex < len(right_half):
            # print("merging")
            # print(f"left half {left_half}")
            # print(f"right half {right_half}")
            # print(f"final array: {arr}")            
            # print(f"Index left: {leftIndex}")
            # print(f"Index right: {rightIndex}")
            # print(f"Index original: {finalIndex}")

            if left_half[leftIndex] < right_half[rightIndex]:
                arr[finalIndex] = left_half[leftIndex]
                leftIndex += 1
            else:
                arr[finalIndex] = right_half[rightIndex]
                rightIndex += 1
            finalIndex += 1
        # print("Second loop. Index left")
        # print(leftIndex)
        # print("Second loop. Index right")
        # print(rightIndex)
        #add any remaining elements from the left subarray (left_half) to the original array
        while leftIndex < len(left_half):
            arr[finalIndex] = left_half[leftIndex]
            leftIndex += 1
            finalIndex += 1

        #dd any remaining elements from the right subarray (right_half) to the original array.
        while rightIndex < len(right_half):
            arr[finalIndex] = right_half[rightIndex]
            rightIndex += 1
            finalIndex += 1

        # print(f"End of loop. Index left: {leftIndex}")
        # print(f"End of loop. Index right {rightIndex}")
        # print(f"End of loop. Index original {finalIndex}")
    print(f"{indent}Return: {arr}")
    return arr

if __name__ == '__main__':
    print("running main")
    arr = [1,2,5,6,3,4,9,23,11]
    #arr = [3,2,1,4]
    result = merge_sort(arr)
    print(result)