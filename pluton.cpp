#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int matrix[100][100];
  int n,//numarul de randuri
      m; //numarul de soldati pe rand
  int valid;
  int pos[100], min[100], max[100];

  cout<<"Dati numarul de randuri: ";
  cin>>n;

  cout<<"Dati numarul de soldati pe rand:";
  cin>>m;

  for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= m; ++j) {
        do {
            valid = 1;
            cout<<"Soldatul de pe pozitia "<<j<<" randul "<<i<<": ";
            cin>>matrix[i][j];
            cout<<"\n";
            //We do the validation. If the soldiers have the same height, then
            //repeat the input
            if(j == m) {
               for(int j1 = 1; j1 <= j - 1; j1++) {
                  if(matrix[i][j1] != matrix[i][j]) {
                    valid = 1;
                  } else {
                    valid = 0;
                  }
               }
               if(valid) cout<<"Rand valid!\n";
                    else
                         cout<<"Rand de soldati invalid! Au aceeasi inaltime!\n";
            }
        }while(!valid);
     }
  }

  for(int i = 1; i <= n; i++) {

     max[i] = matrix[i][1];
     pos[i] = 1;

     for(int j = 2; j <= m; ++j) {
         if(matrix[i][j] > max[i]) {
           max[i] = matrix[i][j];
           pos[i] = j;
         }
     }
  }

  int rand = 1;
  int minmax = max[1];

  for(int k = 2; k <= n; k++) {
      if(max[k] < minmax) {
        minmax = max[k];
        rand = k;
      }
  }

  cout<<"Primul purtator de steag are inaltimea: "<<minmax<<"\n";
  cout<<"Se afla pe randul "<<rand<<" si pe pozitia "<<pos[rand]<<" \n";

  
  for(int i = 1; i <= n; i++) {

     min[i] = matrix[i][1];
     pos[i] = 1;

     for(int j = 2; j <= m; ++j) {
         if(matrix[i][j] < min[i]) {
           min[i] = matrix[i][j];
           pos[i] = j;
         }
     }
  }

  rand = 1;
  minmax = min[1];

  for(int k = 2; k <= n; k++) {
      if(min[k] > minmax) {
        minmax = min[k];
        rand = k;
      }
  }

  cout<<"Al doilea purtator de steag are inaltimea: "<<minmax<<"\n";
  cout<<"Se afla pe randul "<<rand<<" si pe pozitia "<<pos[rand];
  return 0;
}
