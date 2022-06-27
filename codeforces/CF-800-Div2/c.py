for i in range(int(input())):
    n =  int(input())
    a = []
  
    a = list (map(int, input().split()))
    
    can = 1

    if a[0] == 0:
        if a == [0] * n:
            print('Yes')
        else:
            print('No')
    else:
        sum = 0
        reached_zero = 0
        for j in range (n):
            sum += a[j]
            
            if sum < 0:
                can = 0
            if sum == 0:
                reached_zero = 1
            if reached_zero and sum != 0:
                can = 0
        if sum:
            can = 0
        print("Yes" if can else "No")
