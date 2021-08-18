/*
Lui Hatze i s-a parut ca tortul pe care-l pregatise pentru
invitatii de ziua lui este prea putin ornat, chiar si cam mic.
El s-a hotarat, cu strangere de inima, sa umble la rezerva Lui
de ciocolata si sa aseze bomboane de ciocolata pe marginile
tortului. Sa renunte la ele i-a fost mai greu decat sa rezolve
teoretic problema: Sa se genereze o matrice binara si sa se
bordeze cu valori 2.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {

  int matrix[100][100], i, j, n, m;

  cout<<"Lines = ";
  cin>>n;
  cout<<"Columns = ";
  cin>>m;

  for(i = 0; i < n; ++i) {
      for(j = 0; j < m; ++j) {
        matrix[i][j] = rand() % 2;
      }
  }

  for(i = 0; i < n + 1; i++) {
    matrix[i][0] = 2;
    matrix[i][m] = 2;
  }

  for(i = 1; i < m; i++) {
    matrix[0][i] = 2;
    matrix[n][i] = 2;
  }

  for(i = 0; i < n + 1; ++i) {
      for(j = 0; j <= m; ++j) {
          cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
  }
  return 0;
}
