set = set()

a = input();
b = len(a)
#print (b)

if b == 2:
    print(0)
    exit()

if b == 3:
    print(1)
    exit()

for i in range(b):
    
    set.add(a[i])

result = len(set) - 4
print(result)
