a = 4
b = 0

try:
    k = a//b # divide by zero exception
    print(k)

except ZeroDivisionError:
    print("Can't divide by zero\n")

finally:
    print("This is always executed\n")

print("The value of a/b is: ")

assert b != 0, "Divided by zero error"
print(a / b)