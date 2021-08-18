/*
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
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int n, pos[100], val[100], k = 0, i, j, matrix[100][100];

  cout<<"Give Order of the Matrix N x N = ";

  cin>>n;

  do {
    k++;
    cout<<"Position: ";
    cin>>pos[k];

    cout<<"Value: ";
    cin>>val[k];

  } while(pos[k]!=0);
  k--;

  for(int i = 1; i <= k; ++i) cout<<pos[i]<<" ";

  cout<<"\n";

  for(int i = 1; i <= k; ++i) cout<<val[i]<<" ";

  cout<<"\n";

  for(int x = 1; x <= k; x++) {

      i = pos[x] / n + 1;

      j = pos[x] % n;

      if(j == 0) {

        i--;

        j = n;
      }
      matrix[i][j] = val[x];
    }

  cout<<"\nThe Rare Matrix is displayed below: \n";

  for(int a = 1; a <= n; a++) {

      for(int b = 1; b <= n; ++b) {

        cout<<matrix[a][b]<<" ";
      }
      cout<<"\n";
  }
  return 0;
}
