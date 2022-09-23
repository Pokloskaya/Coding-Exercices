
n = input("ingrese numero de caracteres String")

n = (int(n))

string = []

for i in range(n):
    a = input()
    string.append(a)

m = input("ingrese numero de caracteres SubString")
m = (int(m))

subString = []
for i in range(m):
    aa = input()
    subString.append(aa)


contador = 0

for i in range(n):
    if(string[i] == subString[contador]):
        contador = contador + 1

if(contador == len(subString)):
    print("si es un subtring")

else:
    print("no es un subString")