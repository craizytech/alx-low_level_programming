#!/usr/bin/python3

for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        product = str(i * j)
        if product[:] == product[::-1]:
            print(product)

return int(product)
