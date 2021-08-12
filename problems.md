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
