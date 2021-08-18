'''
O matrice rara (avand majoritatea elementelor nule) se memoreaza
sub forma a doi vectori: unul continand valorile elementelor nenule,
iar celalalt continand pozitiile elementelor nenule (pozitia se exprima
printr-un numar care rezulta din parcurgerea pe linii a matricei, fiecare
linie fiind parcursa de la stanga la dreapta). Pentru n > 0 (ordinul matricei
rare) si doi vectori ce retin valorile si pozitiile elementelor nenule
intr-o matrice rara ca date de intrare, sa se genereze si sa se afiseze pe
ecran matricea rara.

N = 5, vector valori val = [7,6,9], vector pozitii pos = [8,15,21]

Output:
0 0 0 0 0
0 0 7 0 0
0 0 0 0 6
0 0 0 0 0
9 0 0 0 0
'''
def main():

    matrix = [[0 for j in range(0, 100)] for i in range(0, 100)]
    N = int(input("N = "))
    pos = [ 0 ] * 100
    val = [ 0 ] * 100
    k = 0

    while True:
        k += 1
        pos[k] = int(input("position = "))
        val[k] = int(input("value = "))
        if val[k] == 0:
            break

    for x in range(1, k):
        i = pos[x] // N + 1
        j = pos[x] % N
        if j == 0:
            i -= 1
            j = N
        print(i,j, end = "\n")
        matrix[i][j] = val[x]


    for i in range(1, N + 1):
        for j in range(1, N + 1):
            print(matrix[i][j], end = " ")
        print()

main()
