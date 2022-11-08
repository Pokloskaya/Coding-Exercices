#//codeforces.com/problemset/problem/1358/A

testCases = input()
testCases = (int (testCases))
results = [] 

for i in range(testCases):
      
  n = input()
  n = (int (n))

  m = input()
  m = (int (m))

  if(m % 2 == 0): #en el caso de que la anchura sea par
    results.append(n*(m/2))
  else:
    results.append( n*(m-1)/2 + (n+1)/2 )

print(results)
for x in results:
      print(int(x))

#1358A.py