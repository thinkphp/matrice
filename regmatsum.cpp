#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, matrix[10][10],
      i, j, s1, s2, s3, s4;

   cout<<"Give the order of the Matrix: ";
   cin>>n;

   for(i = 1; i <= n; ++i) {
      for(j = 1; j <= n; j++) {
          cout<<"matrix["<<i<<"]["<<j<<"] = ";
          cin>>matrix[i][j];
      }
   }
   s1 = s2 = s3 = s4 = 0;

   for(i = 1; i <= n; ++i) {
      for(j = 1; j <= n; j++) {
          if(i < j && j < n - i + 1) {
            s1 += matrix[i][j];
          }
          if(i < j && j > n - i + 1) {
            s2 += matrix[i][j];
          }
          if(i > j && j > n - i + 1) {
            s3 += matrix[i][j];
          }
          if(i > j && j < n - i + 1) {
            s4 += matrix[i][j];
          }
      }
   }

   for(i = 1; i <= n; ++i) matrix[i][i] = 0;

   for(i = 1; i <= n; ++i) matrix[i][n - i + 1] = 0;

   //display the matrix
   for(i = 1; i <= n; ++i) {
      for(j = 1; j <= n; j++) {
          cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
   }

   cout<<"Summa Top -> "<<s1<<endl;
   cout<<"Summa Right -> "<<s2<<endl;
   cout<<"Summa Bottom -> "<<s3<<endl;
   cout<<"Summa Left -> "<<s4<<endl;
  return 0;
}
