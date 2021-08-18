/*
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

#include <iostream>

using namespace std;

int pow(int a, int b) {

    int p = 1;

    for(int i = 1; i <= b; ++i) {

      p = p * a;
    }
    return p;
}

int toDec(int vec[], int n) {

  int p = 0,

  num = 0;

  for(int i = n - 1; i >= 0; --i) {

      num = num + vec[i] * pow(2, p);
      p++;
  }

  return num;
}

int main(int argc, char const *argv[]) {

  int matrix[4][6] = {{1,0,1,0,0,1},
                      {1,0,0,1,0,1},
                      {1,0,0,1,0,1},
                      {1,0,0,0,1,1}
                   };
  int arr[6];
  int n = 4, m = 6, k = 0, s = 0;

 for(int i = 0; i < n; ++i) {

    k = 0;

    for(int j = 0; j < m; ++j) {
          arr[k++] = matrix[i][j];
    }

    int ans = toDec(arr, k);

    cout<<ans;

    s += ans;

    cout<<endl;
  }
  cout<<s;

  return 0;
}
