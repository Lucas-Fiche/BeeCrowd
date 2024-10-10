name = input("")
fixed_salary = float(input())
sale_made = float(input())

bonus = sale_made * 0.15
final_salary = fixed_salary + bonus

print("TOTAL = R$ {:.2f}".format(final_salary))