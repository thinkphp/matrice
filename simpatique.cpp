/*
Pentru un grup de persoane - pe care le consideram numerotate cu numere
intregi de la 1 la n - se precizeaza relatiile de simpatie in felul urmator:
pentru fiecare persoana i se citesc numerele de ordine ale persoanelor pe care
aceasta le simpatizeaza (numere care se dau pana la intalnirea numarului 0).
Sa se precizeze daca in acest grup de persoane toate simpatiile sunt reciproce.

a) Daca N = 3 si se fac urmatoarele citiri:
2 3 0
1 0
1 0
atunci matricea va fi:
0 1 1
1 0 0
1 0 0
si se va afisa: "Toate simpatiile sunt reciproce!"

b) Daca N = 3 si se fac urmatoarele citiri:
2 3 0
1 0
2 0
atunci matricea va fi:
0 1 1
1 0 0
0 1 0
si se va afisa:
"3 nu-l simpatizeaza pe 1"
"2 nu-l simpatizeaza pe 3"
"Nu toate simpatiile sunt reciproce!"
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

   int matrix[100][100];
   int i,j,n;//number of persons
   cout<<"Number of persons! N = ";
   cin>>n;
   for(i = 1; i <= n; ++i) {
       cin>>j;
       while( j!=0 ) {
           matrix[i][j] = 1;
           cin>>j;
       }
   }
   cout<<"\nMatricea atasata grupului este: \n";
   for(int i = 1; i <= n; ++i) {
       for(int j = 1; j <= n; j++) {
          cout<<matrix[i][j]<<" ";
       }
       cout<<"\n";
   }
   int like = 1;
   for(int i = 1; i <= n - 1; ++i) {
       for(int j = i + 1; j <= n; ++j) {
           if(matrix[i][j] == 1 && matrix[j][i] == 0) {
             cout<<"Persoana "<< j << " nu o simpatizeaza pe persoana "<<i<<"\n";
             cout<<"Persoana "<< i << " o simpatizeaza pe persoana "<<j<<"\n";
             like = 0;
           } else if(matrix[i][j] == 0 && matrix[j][i] == 1) {
             cout<<"Persoana "<< i << " nu o simpatizeaza pe persoana "<<j<<"\n";
             cout<<"Persoana "<< j << " o simpatizeaza pe persoana "<<i<<"\n";
             like = 0;
           }
       }
   }

   if(like == 1) {
     cout<<"\nToate simpatiile sunt reciproce!";
   } else {
     cout<<"\nNU Toate simpatiile sunt reciproce!";
   }
  return 0;
}
