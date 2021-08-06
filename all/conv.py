decimal = int(input("what number do you wanna convert? "))   
result = decimal

while result != 0:
    resto = result % 2
    if resto == 0:
        print("0")
    elif resto == 1:
        print("1")
    result = decimal // 2
    decimal = result
    if result == 1:
        result = 0
