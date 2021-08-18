#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int n, m, i, j;
  cout<<"Lines and Columns = ";
  cin>>n>>m;
  n = 4;
  m = 5;
  int matrix[10][10] = {
           {0,0,0,0,0,0},
           {0,1,7,3,8,12},
           {0,2,15,7,9,4},
           {0,5,9,35,2,3},
           {0,31,6,14,0,25}
         };

  cout<<"Initial Matrix: \n";

  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= m; ++j) {
        cout<<matrix[i][j]<<" ";
    }
    cout<<"\n";
  }
  int a, b;
  int del = 3,
      found = 0;

  a = 1;
  while(a <= n) {
      b = 1;
      while(b <= m) {
         if(matrix[a][b] == del) {
           found = 1;

           //remove matrix[row][column]
           for(int i = a; i <= n-1; ++i) {
              for(int j = 1; j <= m; ++j) {
                  matrix[i][j] = matrix[i+1][j];
              }
           }
           n--;
           for(int j = b; j <= m-1; ++j) {
             for(int i = 1; i <= n; ++i) {
                  matrix[i][j] = matrix[i][j+1];
             }
           }
           m--;
         }
         b++;
      }
      a++;
  }

  cout<<"\nUpdated Matrix: \n";

  for(int i = 1; i <= n; ++i) {

    for(int j = 1; j <= m; ++j) {

        cout<<matrix[i][j]<<" ";
    }

    cout<<"\n";
  }
  return 0;
}
