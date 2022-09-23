#//codeforces.com/problemset/problem/1716/A

testCases = input()
testCases = (int (testCases))
results = [] 

for i in range(testCases):
      
  goal = input()
  goal = (int (goal))


  if(goal == 1): #este es e caso de que sea 1
    results.append(goal+1)
    continue

  if(goal % 3 == 0): 
    results.append(goal / 3)
  else:
    results.append(goal / 3 + 1)

for x in results:
      print(int(x))

#1358A.cpp