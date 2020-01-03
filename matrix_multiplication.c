#include <stdio.h>
struct TMatrix {
	   unsigned int n,
	                m;
	                int mat[100][100];
};

typedef struct TMatrix Matrix;

void read(Matrix *mat) {

      int i, j;

	  printf("Number of rows -> ");
	  scanf("%d", &mat->n);

      printf("Number of cols -> ");     
	  scanf("%d", &mat->m);

	  for(i = 0; i < mat->n; ++i) {

	  	  for(j = 0; j < mat->m; ++j) {

               scanf("%d", &mat->mat[i][j]);
	  	  }
	  }
};

void display(Matrix mat) {

      int i,j;

      for(i = 0; i < mat.n; ++i) {

	  	  for(j = 0; j < mat.m; ++j) {

               printf("%d ", mat.mat[i][j]);
	  	  }
	  	       printf("\n");
	  }
};

void multiply(Matrix A, Matrix B, Matrix *C) {

     int i, j, k;

     C->n = A.n;

     C->m = B.m;

     for(i = 0; i < C->n; ++i) {

     	 for(j = 0; j < C->m; ++j) {

     	 	 C->mat[i][j] = 0;
     	 }        
     }  
 
     for(i = 0; i < C->n; ++i) {

     	 for(j = 0; j < C->m; ++j) {

     	 	 for(k = 0; k < C->n; ++k) {

     	 	 	 C->mat[i][j] += A.mat[i][k] * B.mat[k][j];
     	 	 } 
     	 }
     }
};

int main(int argc, char const *argv[])
{
	
    Matrix A,B,C;
    read(&A);
    printf("%s\n", "A = ");
    display(A);    
    read(&B);
    printf("%s\n", "B = ");
    display(B);
    multiply(A,B,&C);
    printf("\n%s\n", "A x B = \n");
    display(C);
	return 0;
}
