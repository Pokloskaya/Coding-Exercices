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

  if(goal % 2 == 0): #este es en caso de que sea 2 o 4
    if(goal < 5):
      results.append(goal / 2)
      continue

  if(goal % 3 == 0): #este es el mejor de los casos
    results.append(goal / 3)
  
  else:
    
    goalDividido = goal/3
    numeroDecimales = goalDividido % 1 
    res = "{:.2f}".format(numeroDecimales)
    res= float(numeroDecimales)

    
    print(res)
    if(res < 0.4): #.3333

        specialCase = goal-4
        if(specialCase % 3 == 0): #lo que me va a tocar hacer es correrme para hasta el paso que es divisible, para atras... Y luego avanzar 2 pasos de 2###
            results.append(goal/3 + 1)
            continue

        results.append(goal/3 + 2)
    else:
        results.append(goal/3 + 1) #.6666666

  ####169102654/3 #lo que me va a tocar hacer es correrme para hasta el paso que es divisible, para atras... Y luego avanzar 2 pasos de 2###

  #en el caso de que el resultado sea x.33333, al resultado le sumo 2. 
  #en el caso de que el resultado sea x.6666, al resultado le sumo 1


for x in results:
      print(int(x))

