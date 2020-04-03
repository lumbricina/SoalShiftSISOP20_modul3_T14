#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int matriksA[4][2] = {{1, 2}, 
		  {3, 4}, 
		  {1, 1},
		  {1, 6}};
int matriksB[2][5] = {{5, 6, 7, 8, 1},
		  {9, 1, 8, 1, 1}};
int matriksC[4][5];

struct matriks
{
    int i;
    int j; 
};

void *kali(void *arg)
{
	while(stat!=2)	{
	}
	int i, j, k;
	for(i=0;i<b1;i++){
		for(j=0;j<k2;j++){
			for(k=0;k<k1;k++)
				ans[i][j]+=m1[i][k] * m2[k][j];
		}
	}
	return NULL;
}

int main(int argc, char **argv)
{
    int i, j ,n = 0,cnt = 0, *nilai;
    key_t key = 1234;

    printf ("Matriks A\n");
    for (i = 0; i < 4; i++){
	for (j = 0; j < 2; j++){
        printf ("%d\t", matriksA[i][j]);
    }
	printf("\n");
    }

    printf ("\nMatriks B\n");
    for (i = 0; i < 2; i++){
	for (j = 0; j < 5; j++){
        printf ("%d\t", matriksB[i][j]);
    }
	printf("\n");
    }
    
    
//BODO AH GATAU MALES PEN BELI TREK
//SUSAH BAT SERIUS INI AJA BELOM KELAR NJER
