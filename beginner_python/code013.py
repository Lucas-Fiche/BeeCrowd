a, b, c = map(int, input().split())

formula = (a + b + abs(a - b))/2
formula2 = (formula + c + abs(formula - c))/2

print("{} eh o maior".format(int(formula2)))

# formula = (a + b + abs(a - b))/2