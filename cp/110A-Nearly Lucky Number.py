
t = input()

cuatro = "4"
siete = "7"

l = len(t)
contador = 0
for i in range(l):
    if(t[i] is cuatro):
        contador = contador + 1
    if(t[i] is siete):
        contador = contador + 1

if(contador == 4):
    print("YES")
elif (contador == 7): 
    print("YES")
else:
    print("NO")