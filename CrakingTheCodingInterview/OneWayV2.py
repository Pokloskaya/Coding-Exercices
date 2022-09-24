# CREO QUE ESTE PROGRAMA TIENE UN PROBLEMA QUE ME PASA BASTANTE 
#QUE CUANDO HAY VARIOS TESTCASES, DA UNA RESPUESTA ERROREA


testCases = input()
testCases = (int (testCases))
results = []

for i in range(testCases):
    s1 = input()
    s2 = input()

    l1 = len(s1)
    l2 = len(s2)

    if(l1 == l2): 
        contador = 0
        for i in range(l1):
            if(s1[i] != s2[i]):
                contador = contador + 1
        
        if(contador < 2): #si el contador es menos de 2 (osea 1 o 0)
            results.append("True")
        else:
            results.append("False")


    if(l1 + 1 == l2): #al string 1 le falta un digito para llegar al otro. HAY QUE INSERTARLE
        edited = False
        i, j = 0, 0
        while i < len(s1) and j < len(s2):
            if s1[i] != s2[j]:
                if edited:
                    results.append("False")
                    # return False
                    break
                edited = True
                j += 1
            else:
                i += 1
                j += 1
        results.append("True")
        # return True

    if(l1 - 1 == l2): #al string 2 hay que borrarle un digito para que llegue al otro. HAY QUE ELIMINARLE
        edited = False
        i, j = 0, 0
        while i < len(s2) and j < len(s1):
            if s2[i] != s1[j]:
                if edited:
                    results.append("False")
                    # return False
                    break
                edited = True
                j += 1
            else:
                i += 1
                j += 1
        results.append("True")
        # return True


for i in range(testCases):
    print(results[i])