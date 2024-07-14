n = int(input())
contA = 0
contB = 0
for i in range(n):
    palavra = input()
    for i in palavra:
        if(i == 'A'):
            contA = contA + 1
        if(i == 'B'):
            contB = contB + 1
    if contA > contB:
        print("A")
    else:
        print("B")
    contA = 0
    contB = 0