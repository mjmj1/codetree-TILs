import sys

n = int(input())
arr = [int(input()) for _ in range(n)]

carry = False
maxVal = -1
for i in range(n - 2):
    for j in range(i + 1, n - 1):
        for k in range(j + 1, n):
            carry = False
            n1 = arr[i]
            n2 = arr[j]
            n3 = arr[k]

            while(any(x > 0 for x in (n1, n2, n3))):
                mn1 = n1 % 10
                mn2 = n2 % 10
                mn3 = n3 % 10
                
                if((mn1 + mn2 + mn3) // 10 > 0):
                    carry = True
                    break

                n1 = n1 // 10
                n2 = n2 // 10
                n3 = n3 // 10

            if not carry:
                maxVal = max(arr[i] + arr[j] + arr[k], maxVal)

print(maxVal)