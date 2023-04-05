testCases = input()
testCases = (int (testCases))
result = []

for i in range(testCases):

    b = input() #number of words
    b = (int (b))

    stringOne = []
    stringTwo = []
    stringThree = []

    contadorOne = 0
    contadorTwo = 0
    contadorThree = 0

    for i in range(b):

        wordsOne = input()
        stringOne.append(wordsOne)

    for i in range(b):
    
        wordsTwo = input()
        stringTwo.append(wordsTwo)

    for i in range(b):
        
        wordsThree = input()
        stringThree.append(wordsThree)

    for i in range(b): #condicionales con las palabras de los jugadores
        
        if(stringOne[i] ): #el problema... es que hay que comparar con todas las posiciones de los arreglos

        