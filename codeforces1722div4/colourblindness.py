testCases = input()
testCases = (int (testCases))

result = []

for i in range(testCases):

    b = input() #number of columns 
    b = (int (b))

    stringOne = input()
    stringTwo = input()

    contador = 0
    for i in range(b):
        
        

        if(stringOne[i] != stringTwo[i]):

            if(stringOne[i] == "G" and stringTwo[i] == "R"):
                contador += 1
                
            if(stringOne[i] == "R" and stringTwo[i] == "G"):
                contador += 1

            if(stringOne[i] == "B" and stringTwo[i] == "R"):
                contador += 1
    
            if(stringOne[i] == "R" and stringTwo[i] == "B"):
                contador += 1
            #else:
            #    result.append("YES") igual esto esta provocando problemas
            
    #print(contador)
    if(contador != 0):
        result.append("NO")
    else:
        result.append("YES")

#print(result)          
for i in range(testCases):
    print(result[i])
