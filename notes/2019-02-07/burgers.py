from random import randint
friends = 1
print("500000")
for i in range(500000):
	print(randint(0,1000000), end=' ')
print("\n" + str(friends))
for i in range(friends):
	start = randint(1, 500000)
	print(start, end=' ')
	print(randint(start, 500000))
print()