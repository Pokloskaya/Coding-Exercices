testCases = input(); testCases = (int (testCases))

while(testCases > 0):
    testCases -= 1
    result = []
    #len = input(); len = (int (len))

    inNumber = input()
    inNumber = inNumber.split()

    len = int(inNumber[0])
    addnumber = inNumber[1]

    ogNumber = input()

    flag = 0

    numberAddnumber = int(addnumber)

    for i in range(len):
        if(ogNumber[i] <= addnumber and flag == 0 and numberAddnumber > 1):
            result.append(addnumber)
            flag = 1

        #en el caso de que sea cero
        if ogNumber[i] == "0" and flag == 0 and numberAddnumber > 1 : 
            result.append(addnumber)
            flag = 1

        result.append(ogNumber[i])

    #if the number to be added is zero or one
    numberAddnumber = int(addnumber)
    if(numberAddnumber <= 1 and flag == 0):
        result.append(addnumber)

    result = ''.join(result)
    print(result)