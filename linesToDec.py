'''
Se da o matrice binara Matrix de tip (m,n). Fiecare linie retine
cifrele reprezentarii binare a unui numar natural. Se cere
afisarea numerelor in baza 10, un numar reprezentand unei linii,
cat si suma lor.

Exemplu:
m = 5, n = 4;
          0 0 1 1  3
          1 0 0 1  9
Matrix =  1 1 1 0  14  31
          0 0 0 0  0
          0 1 0 1  5
*/
'''
def pow(a, b):
    p = 1
    for i in range(1, b + 1):
        p *= a
    return p

def toDec(arr):
    n = len(arr)
    num = 0
    t = 0
    for i in range(n - 1, -1, -1):
        num = num + arr[i] * pow(2, t)
        t += 1
    return num
def main():
    n = 5
    m = 4
    matrix = [[-1 for j in range(0, m)] for i in range(0, n)]
    for i in range(0, n):
        for j in range(0, m):
            while matrix[i][j] != 0 and matrix[i][j] != 1:
                  matrix[i][j] = int(input(f"matrix[{i}][{j}] = "))

    for i in range(0, n):
        for j in range(0, m):
            print(matrix[i][j], end = " ")
        print()

    arr = []
    s = 0
    for i in range(0, n):
        for j in range(0, m):
            arr.append(matrix[i][j])
        ans = toDec(arr)
        s += ans
        print(ans)
        arr.clear()
    print("Suma: ", s)

main()
