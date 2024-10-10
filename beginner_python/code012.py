A, B, C = input().split()

valorA = float(A)
valorB = float(B)
valorC = float(C)

area_triangulo = (valorA * valorC)/2
area_circulo = (3.14159 * valorC**2)
area_trapezio = ((valorA + valorB)*valorC)/2
area_quadrado = valorB*valorB
area_retangulo = valorA*valorB

print("TRIANGULO: {:.3f}".format(area_triangulo))
print("CIRCULO: {:.3f}".format(area_circulo))
print("TRAPEZIO: {:.3f}".format(area_trapezio))
print("QUADRADO: {:.3f}".format(area_quadrado))
print("RETANGULO: {:.3f}".format(area_retangulo))