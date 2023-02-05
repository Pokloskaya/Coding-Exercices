#//codeforces.com/problemset/problem/1716/A
 
testCases = input()
testCases = (int (testCases))
results = [] 
 
for i in range(testCases):
      
  letter = input()
 
  if letter in ["c","o","d","e","f","o","r","c","e","s"]:
    results.append("YES")
  else:
    results.append("NO")
 
for x in results:
      print(x)