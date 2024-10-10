code1, number_units1, price1 = input().split()
code2, number_units2, price2 = input().split()

unidades1 = int(number_units1)
unidades2 = int(number_units2)
valor1 = float(price1)
valor2 = float(price2)

preco_final = valor1 * unidades1 + valor2 * unidades2
print("VALOR A PAGAR: R$ {:.2f}".format(preco_final))