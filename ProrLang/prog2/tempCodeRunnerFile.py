s = input()
total = 0
cnt = len(s)
ch = ''
i = 0
while(cnt > 0):
    ch = s[i]
    if ch >= '0' and ch <= '9':
        total += int(ch)
    cnt-=1
    i+=1
print(total)