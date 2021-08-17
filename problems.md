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

## #6

O matrice rara (avand majoritatea elementelor nule) se memoreaza sub forma a doi vectori: unul continand valorile elementelor nenule, celalalt continand
pozitiile elementelor nenule (pozitia se exprima printr-un numar care rezulta din parcurgerea pe linii a matricei, fiecare linie fiind parcursa de la stanga la dreapta). Pentru n > 0 (ordinul matricei rare) si doi vectori ce retin valorile si pozitiile elementelor nenule dintr-o matrice rara ca date de intrare, sa se 
genereze si sa se afiseze pe ecran matricea rara.

Input: 

n = 5

Val = [7,6,9]

Pos = [8,15,21]

Output:

Matrix = 

     0 0 0 0 0
     0 0 7 0 0
     0 0 0 0 6
     0 0 0 0 0
     9 0 0 0 0

## #7
Sa se genereze matricea patratica Matrix de ordinul n ce se completeaza cu termenii sirului lui Fibonacci de rang > 0. Completarea se va face pe linii.

Exemple:

n = 3

Output: 

      1 1 2
      
      3 5 8
      
      13 21 34

## #8
Se da o matrice M de tip (n,m) cu elemente intregi. Sa se afiseze matricea M prin eliminarea liniilor si coloanelor la intersectia carora se afla
un numar natural a carui conversie in baza 2 are cel putin doua cifre egale cu 1. Nu se vor utiliza structuri de date auxiliare.

Example:

n = 4, m = 5

       2 0 8 16 8
       
       32 5 8 2 4
       
       64 1 0 9 0
       
       4 2 15 1 8
       

Output ->

Elementele care indeplinesc conditia sunt 5 si 9. Se elimina linia 2 si coloana 2, apoi linia 2 si coloana 3.


       2 8 8
       
       4 16 8
       
## #9
Se da o matrice binara M de tip (n,m). Sa se afiseze toate perechile de linii complementare din matrice, fiecare linie fiind reprezentata prin indicele sau. 
Doua linii se numesc complementare daca suma elementelor de pe aceeasi coloana este 1.

Exemple:

Input -> M(4,4)
        
        1 0 1 1
        
        1 1 0 0
        
        0 1 0 0
        
        0 0 1 1

Output -> (1,3), (2,4)

## #10

Se considera o matrice M cu n linii si m coloane. Sa se afle numarul liniilor ale caror elemente sunt in ordine crescatoare.

Input: n = 3, m = 3

       1 2 3
       
       4 5 6
       
       0 6 2
       
Output -> "Exista 2 linii ale caror elemente sunt in ordine crescatoare."

Input: n = 3, m = 3

       1 3 2
       
       0 8 5
       
       1 5 3
       
Output -> "Nu exista linii ale caror elemente sunt in ordine crescatoare."

## #11

Un pluton de soldati formeaza o coloana de defilare care are m randuri, cu n soldati pe rand. De pe fiecare rand este este ales cel mai scund soldat, iar dintre cei alesi cel mai inalt primeste primul steag. Apoi, de pe fiecare rand este ales cel mai inalt soldat, iar dintre cei alesi cel mai scund primeste al doilea steag. In cazul in care exista mai mult soldati cu aceeasi lungime selectata, se alege primul dintre ei. Pe fiecare rand exista cel putin doi soldati cu inaltimi diferite. Sa se afiseze inaltimile celor doi purtatori de steag, precum si pozitia lor in pluton. Numarul m > 1 de randuri, numarul n > 1 de soldati pe un rand si inaltimile soldatilor in cm sunt citite de pe mediul standar de intrare.
(n,m apartin lui N*).

Input:
Numarul de randuri: 5
Numarul de soldati pe un rand: 4
Inaltimile soldatilor in cm:

         173 186 168 178
         
         184 179 184 169 
         
         177 165 177 165
         
         189 179 186 189
         
         185 185 183 183

Output ->

Primul purtator de steag are inaltimea 183 cm

El se afla pe randul 5 in pozitia 3

Al doilea purtator de steag are inaltimea 177 cm

El se afla pe randul 3 in pozitia 1
