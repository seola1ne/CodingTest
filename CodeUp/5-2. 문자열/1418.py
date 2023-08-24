# 1418 : t를 찾아라
# https://codeup.kr/problem.php?id=1418

s = input()

for i in range(0, len(s)):
    if s[i] == 't':
        print(f"{i+1} ", end='')
