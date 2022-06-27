


t = int(input())
for i in range(t):
    a,b = map(int, input().split())

    if a > b:
        flag = 1

    out = ""

    if a > b:
        out += "01"  * b
        out += '0' * (a-b)
    else:
        out += '10'  * a
        out += '1' * (b-a)

    print(out)