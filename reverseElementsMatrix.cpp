/*
Se considera un tablou bidimensional A(n,m) cu elemente intregi.
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
Algoritmul liniarizeaza matricea folosind vectorul auxiliar v.
Astfel, oricare element al matricei A[i][j] se va regasi in
vector pe pozitia V[i * m + j].
*/
#include <iostream>

using namespace std;

void reverse_iterative(int lo,int hi,int *p) {

     while(lo < hi) {
       int aux = p[lo];
       p[lo] =p[hi];
       p[hi] = aux;
       lo++;
       hi--;
     }
}

void reverse(int lo, int hi, int *p) {

    if(lo < hi) {
       int aux = p[lo];
       p[lo] = p[hi];
       p[hi] = aux;
       reverse(lo+1, hi-1, p);
    }
}

int main(int argc, char const *argv[]) {


int matrix[100][100], v[100], i, j, n, m;

cin>>n;
cin>>m;

for(i = 0; i < n; ++i) {
   for(j = 0; j < m; ++j) {
     cin>>matrix[i][j];
   }
}

for(i = 0; i < n; ++i) {
   for(j = 0; j < m; ++j) {
       cout<<matrix[i][j]<<" ";
   }
   cout<<"\n";
}

for(i = 0; i < n; ++i) {
   for(j = 0; j < m; ++j) {
       v[i*m+j] = matrix[i][j];
   }
}

int left, right, size = n * m - 1;

cout<<"\n";

left = 0;
right = size;

reverse_iterative(left, right, v);


for(i = 0; i < n; ++i) {
   for(j = 0; j < m; ++j) {
       matrix[i][j] = v[i * m + j];
   }
}

for(i = 0; i < n; ++i) {
   for(j = 0; j < m; ++j) {
       cout<<matrix[i][j]<<" ";
   }
   cout<<"\n";
}

return 0;
}
