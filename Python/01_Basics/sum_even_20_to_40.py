# Method 1: Using for loop
total = 0
for i in range(20, 42, 2):
    total += i
print(f"Sum of even numbers from 20 to 40 (loop method): {total}")

# Method 2: Using built-in sum function
total = sum(range(20, 42, 2))
print(f"Sum of even numbers from 20 to 40 (sum method): {total}")
    