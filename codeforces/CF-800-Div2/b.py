
for i in range(int(input())):

    n = int(input())
    s = input()
    sum = 1
   
    for j in range(1,n):
        if s[j-1] == s[j]:
            sum += 1
        else:
            sum += j+1

    print(sum)