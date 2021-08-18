/*
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
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  long long n, a, b, c, i, j;

  do {

     cout<<"Give NxN Matrix = ";
     cin>>n;

  } while(n <= 0);

  long long matrix[n+1][n+1];

  matrix[1][1] = 0;
  matrix[1][2] = 1;

  a = 0;
  b = 1;

  for(int k = 3; k <= n * n; ++k) {

      i = k / n + 1; j = k % n;

      if(j == 0) {

        i--;

        j = n;

      }

      c = a + b;

      matrix[ i ][ j ] = c;

      a = b;
      b = c;
  }

  for( int i = 1; i <= n; ++i ) {

    for( int j = 1; j <= n; ++j ) {

      cout<<matrix[ i ][ j ]<<" ";
    }

    cout<<"\n";
  }

  return 0;
}
