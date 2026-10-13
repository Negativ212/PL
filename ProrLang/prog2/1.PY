#1
# n = int(input())
# print(n // 15 * 15, n % 15)

#2
# n = input()
# s = len(n) // 2
# print((int(n)//(10**s) + int(n)%(10**s)))

#3
# n = int(input())
# print(round(n/3, 3))

#4
# n = input().split(".")
# n.append("0")

# if len(n[1]) != 2 and n[1] != "0":
#     print(f"{n[0]} rub {n[1]}0 kop")
# else:
#     if n[1][0] == '0' and len(n[1]) > 1:
#         n[1] = n[1][1:]
#     print(f"{n[0]} rub {n[1]} kop")

#5
# import math
# n, m, c, k = map(int, input().split())

# print(math.ceil((n*m-k)/200)*c)

#6
# import math
# n, m, k = map(int, input().split())
# print(math.ceil(n*m/k))

#7
# import math
# n, t = map(float, input().split())
# print(math.ceil(60/t*n))

#8
# import math

# x, y = map(float, input().split())

# left = math.ceil(x)   
# right = math.floor(y)  

# a = right - left + 1
# if a < 0:
#     a = 0

# print(a)

#9
# s = input()
# total = 0
# cnt = len(s)
# ch = ''
# i = 0
# while(cnt > 0):
#     ch = s[i]
#     if ch >= '0' and ch <= '9':
#         total += int(ch)
#     cnt-=1
#     i+=1
# print(total)

#10
# s = input()
# result = ''
# for i in reversed(s):
#     if i == '(':
#         result += ')'
#     else:
#         result += '('
# print(result)

#11
# s = input().split()
# result = []
# for word in s:
#     result.append(''.join(reversed(word)))
# print(' '.join(result))

#12
# nums = list(map(int, input().split()))
# ans = []
# for x in nums:
#     for i in range(2, x + 1):
#         if x % i == 0:
#             ans.append(d)
#             break
# print(*ans)

#13
# n = int(input())
# print(sum(i for i in range(1, n) if n % i == 0))

#14
# n = int(input())
# masha = 0
# dasha = 0

# for i in range(n):
#     num = int(input())
#     if num % 3 == 0:
#         masha += 2
#     else:
#         dasha += 1

# print(f"{masha}:{dasha}")

#15
n = int(input())
profit = 0

for i in range(n):
    income, cost = map(int, input().split())
    if income > cost:
        profit += income - cost

print(profit)