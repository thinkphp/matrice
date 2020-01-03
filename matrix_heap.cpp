#include <iostream>

using namespace std;

void* readMatrix(int n, int m){

      int (*adr)[10]; 

      adr = new int[10][10];

      cout<<"Read Matrix -> "<<endl; 

      for(int i = 0; i < n; ++i) {

      	  for(int j = 0; j < m; ++j) {

      	  	  cin>>adr[i][j];
      	  }
      }

      return adr;
}

void* sum(int (*mat1)[10], int (*mat2)[10],int n, int m) {

	  int i,j;

	  int (*adr)[10] = new int[10][10];


      for(int i = 0; i < n; ++i) {

      	  for(int j = 0; j < m; ++j) {

      	  	  adr[i][j] = mat1[i][j] + mat2[i][j];
      	  }
      }

      return adr;
}

void display(int (*mat)[10], int n, int m) {

        cout<<"Matrix -> "<<endl; 
        for(int i = 0; i < n; ++i) {

      	  for(int j = 0; j < m; ++j) {

      	  	  cout<<mat[i][j]<<" ";
      	  }

      	cout<<endl;
      }
}

int main(int argc, char const *argv[])
{
	int n, m; 
	int (*mat1)[10], (*mat2)[10], (*TheSum)[10];
	cout<<("n=?, m=? -> ");
	cin>>n>>m;
	mat1 = (int(*)[10])readMatrix(n,m);
	display(mat1,n,m);
	mat2 = (int(*)[10])readMatrix(n,m);
	display(mat2,n,m);
    TheSum = (int(*)[10])sum(mat1, mat2, n, m);
    cout<<"Matrix 1 + Matrix 2 = "<<endl;
    display(TheSum,n,m);
	return 0;
}