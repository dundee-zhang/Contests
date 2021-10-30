weight = float(input())
height = float(input())

answer = weight / height ** 2

if answer > 25:
    print("Overweight")

elif answer >= 18:
    print("Normal weight")

else:
    print("Underweight")