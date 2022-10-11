"""
p10012

n*m=initGrass + ((m-1)*grassPerDay)
k*l=initGrass + ((l-1)*grassPerDay)

"""
n,m,k,l=map(int, input().split())
print(str(int(((n*m)-(k*l))/(m-l))))