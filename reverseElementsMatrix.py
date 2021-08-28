'''
Se considera un tablou bidimensional Matrix(n,m) cu elemente intregi.
Realizati un program care inverseaza elementele tabloului, prin intermediul
unul vector de n * m elemente:
Input ->
n = 3, m = 3
1 2 3
4 5 6
7 8 9
Ouput ->
9 8 7
6 5 4
3 2 1
Hint:
Algoritmul liniarizeaza matricea folosind vectorul auxiliar V.
Astfel, oricare element al matricei A[i][j] se va regasi in
vector pe pozitia V[i * m + j].
'''
import random
 
def _reverse(lo, hi, vec):
    if lo < hi:
        vec[lo], vec[hi] = vec[hi], vec[lo]
        _reverse(lo+1,hi-1,vec)
 
def reverse(vec, n):
 
    _reverse(0, n-1, vec)
 
def main():
    n = 3
    m = 3
 
    matrix = [[random.randint(0,9) for j in range(0, m)] for i in range(0, n)]
 
    print("Input ->")
 
    for i in range(0, n):
        for j in range(0, m):
            print(matrix[i][j], end = " ")
        print()
    vec = [0]*(n*m)
 
     #linearization the matrix
    for i in range(0, n):
        for j in range(0, m):
            vec[i*m+j] = matrix[i][j]
 
    reverse(vec, n * m)
 
    for i in range(0, n):
        for j in range(0, m):
            matrix[i][j] = vec[i*m+j]
 
    print("Output ->")
 
    for i in range(0, n):
        for j in range(0, m):
            print(matrix[i][j], end = " ")
        print()
main()
