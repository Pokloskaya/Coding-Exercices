def string_task(word, long):
    result = ""
    for i in range(long): # "A", "O", "Y", "E", "U", "I",
        if(word[i] == 'a' or word[i] == 'A' or word[i] == 'o' or word[i] == 'O' or word[i] == 'y' or word[i] == 'Y' or word[i] == 'e' or word[i] == 'E' or word[i] == 'u' or word[i] == 'U' or word[i] == 'i' or word[i] == 'I'):
            continue
        else:
            result += "."
            result += word[i].lower()
    return result

def IA_solution(word):
    result = ""
    for char in word:
        if char in "AOYEUIaoyeui":
            continue
        elif char.isupper():
            result += "." + char.lower()
        else:
            result += "." + char
    return result

if __name__ == '__main__':
    word = input()
    long = len(word)
    print(string_task(word, long))
    print("IA SOLUTION:")
    print(IA_solution(word))

