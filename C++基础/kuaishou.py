n = input()
i = 0
a = [0]
while(i < n):
    a[i] = input()
	i= i + 1

for j in a:    
    x = a[j]
    print(x[-6:-1])