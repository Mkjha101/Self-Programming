#Matrix Multiplication Program for Two Matrices
"""
Matrix A of order m x n
Matrix B of order n x p
are given.
"""

#Part 1
A=[]
B=[]
m=int(input("No. of Rows in A:\t"))
n=int(input("No. of Rows in B:\t"))
p=int(input("No. of Cols in B:\t"))

print("\nMatrix A")
for i in range(m):
    A.append([])
    for j in range(n):
        Num=int(input("Enter element: "))
        A[i].append(Num)
print("\nMatrix B")
for i in range(n):
    B.append([])
    for j in range(p):
        Num=int(input("Enter element: "))
        B[i].append(Num)
print("\nMatrix A")
for i in range(m):
    for j in range(n):
        print(A[i][j],"\t",end="")
    print("\n")
print("Matrix B")
for i in range(n):
    for j in range(p):
        print(B[i][j],"\t",end="")
    print("\n")

#Part 2
MultMatrix=[]
for i in range(m):
    MultMatrix.append([])
    for j in range(p):
        Sum=0
        for k in range(n):
            Sum+=(A[i][k]*B[k][j])
        MultMatrix[i].append(Sum)

#Printing the product of Matrix A x B
print("\nMatrix A x B")
for i in range(m):
    for j in range(p):
        print(MultMatrix[i][j],"\t",end="")
    print("\n")
