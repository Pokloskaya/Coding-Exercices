numberOperations = input(); 
numberOperations = (int(numberOperations))

contador = 0
for i in range(numberOperations):
    operation = input()
    if(operation[1] == "+"):
        contador = contador+1
    else:
        contador = contador-1
print(contador)