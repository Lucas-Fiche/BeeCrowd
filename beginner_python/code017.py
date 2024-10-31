tempo = int(input())
velocidade_media = int(input())
km_rodados = velocidade_media * tempo
km_litro = km_rodados / 12

print("{:.3f}".format(km_litro))