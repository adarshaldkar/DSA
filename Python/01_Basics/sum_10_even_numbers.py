total=0
for i in range(2,21):
    if i%2==0:
        total+=i
print(f"Sum of first 10 even numbers: {total}")


total = sum(range(2, 21, 2))
