def merge_sort(arr):
    if len(arr) > 1:
        # Divide the array into two equal-sized subarrays
        mid = len(arr)//2
        print(mid)
        left_half = arr[:mid]
        print(left_half)
        right_half = arr[mid:]
        print(right_half)


        # Recursively sort each subarray
        merge_sort(left_half)
        #print("ejecutar left half")
        merge_sort(right_half)
        #print("ejecutar right left")

        # Merge the two sorted subarrays back into a single sorted array
        i = 0 #keeps track of the current index in the left subarray,
        j = 0 #keeps track of the current index in the right subarray
        k = 0 #keeps track of the current index in the original array.

        while i < len(left_half) and j < len(right_half):
            print("merging")
            print(left_half)
            print(right_half)
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1
    return arr

if __name__ == '__main__':
    print("running main")
    arr = [1,2,5,6,3,4,9,23,11]
    #arr = [3,2,1,4]
    result = merge_sort(arr)
    print(result)