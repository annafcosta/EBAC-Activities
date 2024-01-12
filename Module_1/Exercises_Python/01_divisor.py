num_A = int(input("Digite um número: "))
num_B = int(input("Digite outro número: "))

if num_A > num_B:
    if num_A % num_B == 0:
        print("O valor de A é divisível por B!")
    else:
        print("O valor de A não é divisível por B.")

else:
    print("O valor de A é menor que o valor de B!")
