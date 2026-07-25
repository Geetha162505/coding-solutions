# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict
if __name__ == '__main__':
    n, m = map(int, input().split())
    A = [input() for x in range(n)]
    B = [input() for x in range(m)]
    ID = defaultdict(list)
    for i, x in enumerate(A):
        ID[x].append(i+1)
    for x in B:
        if x in ID:
            print(' '.join(map(str, ID[x])))
        else:
            print(-1)
