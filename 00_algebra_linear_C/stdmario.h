/*_____________________________________________________________________*

Serie de Funções de Suporte
Criada por Mario Marins Ramos em 1 de abril de 2017
ultima atualização em...

*_____________________________________________________________________*/
/*----------------------------------------------
FUNÇÕES BÁSICAS
*/



//Função para encontrar o valor maximo de um array

float max(float tama, float vetor[]){
	int i;
	float max = vetor[0];
	
	for (i = 0;i < tama;i++){
		if (vetor[i] > max){
			max = vetor[i];}}
return max;}

//Função para encontrar o valor mínimo de um array

float min(float tama, float vetor[]){
	int i;
	float min = vetor[0];
	
	for (i = 0;i < tama;i++){
		if (vetor[i] < min){
			min = vetor[i];}}
return min;}

/*_____________________________________________________________________*/
/*----------------------------------------------
MATRIZES OPERAÇÕES
*/

//Print

void mprint(int row, int col,float M[row][col]){
	int i,j = 0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){printf("%f ",M[i][j]);}
		puts("\n");
	}	
	puts("\n");
}

//Print

void mprint_double(int row, int col,double M[row][col]){
	int i,j = 0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){printf("%f ",M[i][j]);}
		puts("\n");
	}	
	puts("\n");
}

//Save

void msave(int n,int m,float matrix[n][m],char path[]){
	int i,j;
	
	FILE *file = fopen(path,"w");
	
	for(i=0;i<n;i++){
		for (j=0;j<m;j++){
			fprintf(file,"%f,",matrix[i][j]);
		}
		fprintf(file,"\n");
	}
	fclose(file);
}

//Save Large

void mlsave(int row,int col,float *matrix,char path[]){
	int i,j;
	
	FILE *file = fopen(path,"w");
	
	for(i=0;i<row;i++){
		for (j=0;j<col;j++){
			fprintf(file,"%f,",*((float *)matrix+i *col + j));
		}
		fprintf(file,"\n");

	}
	fclose(file);
puts("Salvamento Terminado\n");}

//Load

void mload(int n,int m, float matrix[n][m], char path[]){
	int i,j;
	float M[n][m];
	
	FILE *in = fopen(path,"r");
	
	for(i=0;i<n;i++){
		for (j=0;j<m;j++){
			fscanf(in,"%f,",&M[i][j]);
			*((float *)matrix+i *m + j) = M[i][j];
		}
	}
	
	fclose(in);
	
}

//Reescalonamento simples (escala)

void mrescale(int row,int col,int scale,float *M,float *ME){
	int i,j;
	
	for (i=0;i<row*scale;i++){
		for (j=0;j<col*scale;j++){
			*((float *)ME+i *(col*scale) + j) = *((float *)M+(i/scale) *(col) + (j/scale)); //M[j/scale][i/scale];
			//printf("i = %i|j = %i| i2 = %i|j2 = %i| V = %f\n",i,j,i/scale,j/scale,*((float *)M+(j/scale) *(col*scale) + (i/scale)));
		}
	}
	
puts("fim escaloamento\n");}

//Soma

void msum(int row, int col,float A[row][col],float B[row][col],float R[row][col]){
	int i,j = 0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			*((float *)R+i *col + j) = A[i][j]+B[i][j];
		}
	}
}

//Subtração

void msub(int row, int col,float A[row][col],float B[row][col],float R[row][col]){
	int i,j = 0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			*((float *)R+i *col + j) = A[i][j]-B[i][j];
		}
	}
}

//Produto por uma constante

void mconst(int row, int col,float constant,float R[row][col]){
	int i,j = 0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			*((float *)R+i *col + j) = R[i][j]*constant;
		}
	}
}

//Transposta

void mt(int row, int col,float A[row][col],float R[row][col]){
	int i,j = 0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			*((float *)R+j *row + i) = A[i][j];
		}
	}
}

//Produto de Matrizes

void mdot (int n0,int m1,int nm,float M0[n0][nm], float M1[nm][m1], float M01[n0][m1]){
	int i0,j1,ij;
	float pr;
	for(i0=0;i0<n0;i0++){
		for(j1=0;j1<m1;j1++){
			pr = 0.0;
			for(ij=0;ij<nm;ij++){
				pr = pr + M0[i0][ij]*M1[ij][j1];
			}
			*((float *)M01+i0 *n0 + j1) = pr;
			//printf("sum = %f\n",pr);
		}
	}
}


//.........................................................................
//Determinante | Codigo de Bibek Subedi 
// http://www.programming-techniques.com/2011/09/numerical-methods-determinant-of-nxn.html
// alteração de ratio = matrix[j][i]/matrix[i][i] para ratio = matrix[j][i]/(matrix[i][i]+0.000001)


float mdet_subedi(int n,float m[n][n]){

    float matrix[n][n],ratio;
    float det;
    int i, j, k;
			
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
            matrix[i][j] = m[i][j];
        }
	}	

    /* Conversion of matrix to upper triangular */

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(j>i){
				ratio = matrix[j][i]/(matrix[i][i]+0.000001);
				
				//printf("ratio = %f\n",ratio);

                for(k = 0; k < n; k++){

                    matrix[j][k] -= ratio * matrix[i][k];

                }

            }

        }

    }

    det = 1; //storage for determinant

    for(i = 0; i < n; i++)

        det *= matrix[i][i];

    //printf("The determinant of matrix is: %.40f\n\n", det);

    return det;
}

//.........................................................................
//Inversa | Codigo de Bibek Subedi
// http://www.programming-techniques.com/2011/09/numerical-methods-inverse-of-nxn-matrix.html

void minv_subedi(int n,float m[n][n],float im[n][n]){
    float matrix[n][n*2], ratio,a;
    int i, j, k;
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            matrix[i][j] = m[i][j];
        }
	}
    
    
    for(i = 0; i < n; i++){
        for(j = n; j < 2*n; j++){
            if(i==(j-n)){
                matrix[i][j] = 1.0;}
            else{
                matrix[i][j] = 0.0;}
        }
    }

    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i!=j){
                ratio = matrix[j][i]/matrix[i][i];
                for(k = 0; k < 2*n; k++){
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        }
    }
    
    for(i = 0; i < n; i++){
        a = matrix[i][i];
        for(j = 0; j < 2*n; j++){
            matrix[i][j] /= a;
        }
    }
    
    for(i = 0; i < n; i++){
        for(j = n; j < 2*n; j++){
			*((float *)im+i *n + (j-n)) = matrix[i][j];
        }
    }
}

//.........................................................................
//Krigagem Mario | Codigo de Isaaks e Srivastava 1989

float krig_ordinary (int n,float y,float x,float X[n], float Y[n], float V[n], float scale, float C0, float C1, float a){
	int i,j;
	float X2[n+1];
	float Y2[n+1];
	
	X2[0] = x;
	Y2[0] = y;
	
	for (i=0;i<n+1;i++){
		X2[i+1] = X[i];
		Y2[i+1] = Y[i];
		}
	
	//---------------------------------------------------------------------------->
	
	float m[n+1][n+1]; // matriz de distâncias
	
	for (i=0;i<n+1;i++){
		for (j=0;j<n+1;j++){
			m[i][j] = scale*sqrt( pow((Y2[j] - Y2[i]),2) + pow((X2[j] - X2[i]),2) );
		}
	}
	
	float MC[n+1][n+1];
	
	for (i=0;i<n+1;i++){
		for (j=0;j<n+1;j++){
			MC[i][j] = 1;			
		}
	}
	
	
	//MC = matriz de covariancias
	
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (m[i][j] == 0){
				MC[i][j] = C0 + C1;
			}
			if (m[i][j] != 0){
				MC[i][j] = C1*exp(-3* ((m[i+1][j+1])/a));
			}
						
		}
	}
	MC[n][n] = 0;
	//---------------------------------------------------------------------------->
	//NC = matriz de covariancias com o ponto
	float NC[n+1][1];
	
	
	for (i=1;i<n+1;i++){
		NC[i-1][0] = C1*exp(-3* ((m[0][i])/a));
		}
		
	NC[n][0] = 1;

	float MI[n+1][n+1];
	float MD[1][n+1];	
	
	minv_subedi(n+1,MC,MI);
	mdot (n+1,1,n+1,MI,NC,MD);
	
	float V2 = 0;
	for (i=0;i<n;i++){
		V2 = V2 + (MD[i][0]*V[i]);
	}
	
	return V2;}

