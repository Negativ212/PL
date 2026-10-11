t = int(input())
ans = []

for _ in range(t):
    p1, q1, p2, q2, p3, q3, p4, q4 = map(int, input().split())

    a = p1 * q2 + p2 * q1
    b = q1 * q2
    c = p3 * q4 + p4 * q3
    d = q3 * q4

    if a * d > c * b:
        ans.append("1")
    elif a * d < c * b:
        ans.append("-1")
    else:
        ans.append("0")

print(*ans)