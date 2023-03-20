def finonacci(n):
    if n == 0: 
        return 0
    elif n == 1:
        return 1
    else: 
        arr = [0] * (n+1) #inicializar valores a cero

        arr[0] = 1
        arr[1] = 1

        for i in range(2, n+1):
            arr[i] = arr[i-2] + arr[i-1]
        return(arr[n])
    
print(finonacci(10000))
