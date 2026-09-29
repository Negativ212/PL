# Python: x == y == z работает как цепочка сравнений
# (x == y) and (y == z)

x = 5
y = 5
z = 5

print("x =", x, ", y =", y, ", z =", z)
print("x == y == z ->", x == y == z)   # True
   
x, y, z = 5, 5, 3
print("x=5, y=5, z=3 ->", x == y == z)   # False (y != z)

x, y, z = 5, 3, 5
print("x=5, y=3, z=5 ->", x == y == z)   # False (x != y)

x, y, z = 1, 2, 3
print("x=1, y=2, z=3 ->", x == y == z)   # False (x != y)