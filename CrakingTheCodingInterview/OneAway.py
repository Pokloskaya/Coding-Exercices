def replace(s1, s2):

    indicador = False
    for i in range(len(s1)):

        if(s1[i] != s2[i]):

            if indicador:
                return False 
            indicador = True

    return True


def insertDelate(s1, s2):

    edited = False
    i, j = 0, 0
    while i < len(s1) and j < len(s2):
        if s1[i] != s2[j]:
            if edited:
                return False
            edited = True
            j += 1
        else:
            i += 1
            j += 1
    return True


def main():
    results = []
    testCases = input("enter test cases ")
    testCases = (int (testCases))

    for i in range(testCases):
        stringOne = input()
        stringTwo = input()

        if(len(stringOne) == len(stringTwo)):
            replace(stringOne, stringTwo)

        if(len(stringOne) + 1 == len(stringTwo)):
            insertDelate(stringOne, stringTwo)
        
        if(len(stringOne) + 1 == len(stringTwo)):
            insertDelate(stringTwo, stringOne)

if __name__ == "__main__":
    main()
    