def issort(arr):
	i = 0
	while (i < len(arr)-1):
		if (arr[i] <= arr[i+1]):
			i += 1
		else:
			break;
	if (i == len(arr)-1):
		return True
	else:
		return False


arr = input("Введите массив:").strip().split()

for i in range(len(arr)):
	arr[i] = int(arr[i])

l = 0
r = len(arr)
if (issort(arr) == True):
	x = int(input("Какое число ищем: ").strip())
	while (l+1 < r):
		m = int(l + (r-l)/2)
		if arr[m] > x:
			r = m 
		else:
			l = m
	if (arr[l] == x):
		print(l)
	else:
		print("-1")
else:
	print("Массив не сортирован")