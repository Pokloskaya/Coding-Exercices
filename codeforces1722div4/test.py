
testCases = input()
testCases = (int (testCases))

results = []

a = "Timur"

for i in range(testCases):
    b = input()

    if(len(a) != len(b)):
        results.append("NO")
        break
    
    aa = sorted(a)
    bb = sorted(b)  

    print(aa)
    print(bb)