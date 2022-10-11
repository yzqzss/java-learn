"""
p10010
"""

n,m=map(int, input().split())

for chicken in range(0, n+1):
    rabbit = n - chicken
    if 2*chicken + 4*rabbit == m:
        print(chicken, rabbit)