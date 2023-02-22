testCases = input()
testCases = (int (testCases))
results = []

a = "Timur"

for i in range(testCases):

    variableInutil = input()
    variableInutil = (int (variableInutil))
    b = input()


    print(len(a))
    if(len(a) != len(b)):
        results.append("NO")

    aa = sorted(a)
    bb = sorted(b)  

    if(aa == bb):
        results.append("YES")
    else:
        results.append("NO")

for i in range(testCases):
    print(results[i])