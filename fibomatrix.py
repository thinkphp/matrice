'''
Book: Algorithms.
Culegere de probleme. Clasa IX-a. Chapter Matrix.
Editura L&S Soft.

Sa se genereze matricea patratica Matrix de ordinul n ce se
completeaza cu termenii sirului lui Fibonacci de rang > 0.
Completarea se va face pe linii:

Exemplu:
n = 3
     0 1 1
A =  2 3 5
     8 13 21
'''
def main():

    N = int(input("Matrix N x N = "))
    while N <= 0:
        N = int(input("Matrix N x N = "))

    matrix = [[0 for j in range(0, N + 1)] for i in range(0, N + 1)]
    matrix[0][0] = 0
    matrix[0][1] = 1
    a = 0
    b = 1
    for k in range(2, N * N ):
        i = k // N
        j = k % N
        c = a + b
        matrix[i][j] = c
        a = b
        b = c
    for i in range(0, N):
        for j in range(0, N):
            print(matrix[i][j], end = " ")
        print()
main()
