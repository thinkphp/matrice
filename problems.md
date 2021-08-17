## Arhiva de probleme

### #1. 
   Pentru un grup de persoane - pe care le consideram numerotate cu numere intregi de la 1 la n - se precizeaza relatiile de simpatie in felul 
   urmator: pentru fiecare persoana i se citesc numerele de ordine ale persoanelor pe care aceasta le simpatizeaza (numere care se dau pana la 
   intalnirea numarului 0). Sa se precizeze daca in acest grup de persoane toate simpatiile sunt reciproce.

Exemple:

a) 
Input -> N = 3 si se fac urmatoarele citiri:
2 3 0

1 0

1 0

atuci matricea va fi:

0 1 1

1 0 0

1 0 0

Output -> "Toate simpatiile sunt reciproce!"

b) N = 3 si se fac urmatoarele citiri:
2 3 0

1 0

2 0

atunci matricea va fi:

0 1 1

1 0 0

0 1 0
Output -> "3 nu-l simpatizeaza pe 1"
          "2 nu-l simpatizeaza pe 3"
          "nu toate simpatiile sunt reciproce"
          
### #2.
Se da o functie cu domeniul de definitie si codomeniul multimi finite. Sa se se studieze injectivitatea si surjectivitatea ei. Presupunem ca
domeniul de definitie al functiei are n elemente si codomeniul are m elemente. Folosim matricea Matrix cu n linii si m coloane ale carei 
elemente sunt definite in felul urmator:
Matrix[i][j], daca elementul i din domeniul de definitie ii corespunde elementul j din codomeniu; Matrix[i][j] = 0, altfel!

Exemple:

a) Daca n = 3 si m = 3 matricea Matrix este:

1 0 0

0 1 1

0 0 1

Output-> Functia nu este bine definita!

b) n = 3 si m = 3 si matricea Matrix va fi:

1 0 0

0 0 1

0 1 0

Output -> Functia este injectiva / Functia este surjectiva

## #3
Sa se elimine dintr-o matrix M de timp (m, n) liniile si coloanele la a caror intersectie se gaseste valoarea v data. Daca valoarea v se gaseste de mai multe ori in cadrul matricei, se vor elimina liniile si coloanele corespunzatoare pentru fiecare aparitie.

Exemple:

n = 4, m = 5, v = 3;

Input ->

    1 7 3 8 12    
    
    2 15 7 9 4

    5 9 35 2 3
    
    31 6 14 0 25

Outout ->

    2 15 9
    
    31 6 0

## #4
Se da o matrice binara de tip (n,m). Fiecare linie retine cifrele reprezentarii binare a unui numar natural. SE cere afisarea numerelor naturale in baza 10, un 
numar corespunzand unei linii, cat si suma lor.

Exemple:

Input: 

    n = 5

    m = 4

    0 0 1 1

    1 0 0 1

    1 1 1 0

    0 0 0 0

    0 1 0 1

Output: 

3

9

14        31

0

5

## #5
Se da o matrice patratica de ordinul n > 1. Trasandu-se cele doua diagonale ale matricei, se obtin patru regiuni in forma de triunghi. Sa se
calculeze sumele elementelor din interiorul acestor triunghiuri (elementele de pe diagonale nu se iau in considerare).

n = 5

Input:

Matrix -->

    1  2  3  4  5

    6  7  8  9 10

    11 12 13 14 15

    16 17 18 19 20

    21 22 23 24 25

Output:

Sus: S1 = 17

Dreapta: S2 = 59

Jos: S3 = 87

Stanga: S4 = 45
