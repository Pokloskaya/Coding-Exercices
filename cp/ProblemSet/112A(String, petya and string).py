#https://codeforces.com/problemset/problem/112/A

palabraU = input()
palabraD = input()

palabraUno = palabraU.lower()
palabraDos = palabraD.lower()

lenght = len(palabraDos)

for i in range (lenght):
    if(palabraUno[i] != palabraDos[i]):

        if(ord(palabraUno[i]) < ord(palabraDos[i])):
            print("-1")
            exit(0)
        if(ord(palabraUno[i]) > ord(palabraDos[i])):
            print("1")
            exit(0)

print("0")
    