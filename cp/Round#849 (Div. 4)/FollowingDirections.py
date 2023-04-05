#https://codeforces.com/contest/1791/problem/B
 
testCases = input(); testCases = (int (testCases))
results = [] 
 
for i in range(testCases):
      
  len = input(); len = (int (len))
  word = input()

  contadorX = 0
  contadorY = 0
  contadorResultados = 0

  for i in range(len):
    if word[i] == "L":
        contadorX -= 1
    elif word[i] == "R":
        contadorX += 1
    elif word[i] == "U":
        contadorY += 1
    elif word[i] == "D":
        contadorY -= 1

    if (contadorX == 1) and (contadorY) == 1:
        contadorResultados += 1

  if contadorResultados > 0:
    results.append("YES")
  else: 
    results.append("NO")
 
for x in results:
      print(x)