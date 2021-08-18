import random

def main():
    N = 7
    s1 = s2 = s3 = s4 = 0
    matrix = [[0 for j in range(0, N)] for i in range(0, N)]
    for i in range(0, N):
        for j in range(0, N):
            matrix[i][j] = random.randint(1,9)

    for i in range(0, N):
        matrix[i][i] = 0
        matrix[i][N - i - 1] = 0

    for i in range(0, N):
        for j in range(0, N):
            if i < j and j < N - i - 1:
                s1 += matrix[i][j]
            if i < j and j > N - i - 1:
                s2 += matrix[i][j]
            if i > j and j > N - i - 1:
                s3 += matrix[i][j]
            if i > j and j < N - i - 1:
                s4 += matrix[i][j]

    for i in range(0, N):
        for j in range(0, N):
            print(matrix[i][j], end = " ")
        print()

    print(f"Summa 1 Top -> {s1}")
    print(f"Summa 2 Right -> {s2}")
    print(f"Summa 3 Bottom -> {s3}")
    print(f"Summa 4 Left -> {s4}")
main()
