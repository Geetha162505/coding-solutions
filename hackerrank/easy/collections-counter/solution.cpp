# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter

if __name__=="__main__":
    TotalItems=int(input())
    L=list(map(int,input().split(" ")))
    dict=Counter(L)
    Sale= int(input())
    totalAmount=0
    for i in range(Sale) :
        k=list(map(int,input().split(" ")))
        if k[0] in dict.keys():
            if dict[k[0]]>0:
                dict[k[0]]=dict[k[0]]-1
                totalAmount=totalAmount+k[1]
    print(totalAmount)