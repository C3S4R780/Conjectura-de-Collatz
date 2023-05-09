from os import system

def collatz(num):
    list = [num]
    while num > 1:
        if num%2 == 0:
            num = num/2
        else:
            num = (3*num) + 1
        list.append(int(num))

    system("cls")

    print(f"{len(list)} iteracoes")

    for i in range(len(list)):
        print(f"{list[i]}", end=", ")

num = int(input("Insira um numero: "))

collatz(num)