import math

#1

# n = int(input())

# classes = math.ceil(n/25)
# min_students = n // classes

# print(classes, min_students)

#2

# t = int(input())

# for i in range(t):
#     n = int(input())
#     p, q = map(int, input().split())

#     result = "0."
#     for i in range(n):
#         p *= 2
#         result += str(p // q)
#         p %= q

#     print(result)

#3

n = int(input())
nums = list(map(int, input().split()))

code = ""
for x in nums:
    xb = bin(x)[2:]   
    yb = bin(len(xb))[2:] 
    code += "0" * (len(yb) - 1) + yb + xb[1:]

print(code)