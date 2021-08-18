/*
Se da o functie cu domeniul de definitie si codomeniul
multimi definite. Sa se studieze injectivitatea si
surjectivitatea ei. Sa presupunem ca domeniul de definitie
al functiei are n elemente si codomeniul are m elemente.
Folosim o matrice M cu n linii si m coloane ale carei elemente
sunt definite in felul urmator:
M[i,j] = 1
daca elementul i din domeniul de definitie
ii corespunde elementul j din codomeniu.
M[i,j] = 0 altfel.
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int matrix[100][100],
      welldefined = 1,
      A, B, i, j, inj = 1, surj = 1, s,
      summa_col;

  cout<<"Domeniu de Definitie -> ";
  cin>>A;
  cout<<"Codomeniu -> ";
  cin>>B;

  for(int i = 1; i <= A; ++i) {
      for(int j = 1; j <= B; ++j) {
        cout<<"Corespondenta de la "<<i<<" - "<<j<<" ?";
        cin>>matrix[i][j];
      }
  }

  for(int i = 1; i <= A; ++i) {
      s = 0;
      for(int j = 1; j <= B; ++j) {
        s += matrix[i][j];
      }
      if(s!=1) {
         welldefined = 0;
      }
  }

  if(!welldefined){
                   cout<<"Functia nu este bine definita!";
                   exit(1);
                  }

  //check for the function in injective
  for(int i = 1; i <= B; i++) {

      summa_col = 0;
      for(int j = 1; j <= A; j++)
          summa_col += matrix[j][i];
          if(summa_col > 1) inj = 0;

  }

  if(inj == 1) cout<<"\nFunctia este injectiva!";
     else
               cout<<"\nFunctia nu este injectiva!";
   //check for the function is surjective

   for(int i = 1; i <= B; i++) {
       summa_col = 0;
       for(int j = 1; j <= A; j++)
           summa_col += matrix[j][i];
           if(summa_col < 1) surj = 0;

   }

   if(surj == 1) cout<<"\nFunctia este surjective!";
            else
                cout<<"\nFunctia nu este surjective!";

  return 0;
}
