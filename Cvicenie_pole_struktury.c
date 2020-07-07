#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define n 10

typedef struct obd{
	int a,b, obvod,obsah;
}OBD;

void pocitaj(OBD A[n]){
	int i;
	for (i=0;i<n;i++){
		A[i].obvod=2*A[i].a+2*A[i].b;
		A[i].obsah=A[i].a*A[i].b;
	}
}

void polestructur(OBD A[n]){
	int i;
	for (i=0;i<n;i++){
		A[i].a=i+1;
		A[i].b=i+3;
	}
}

void vypispole(OBD A[]){
	int i;
	for (i=0;i<n;i++){
		printf("\n");
		printf("%d %d\n", A[i].a,A[i].b);
		printf("%d %d\n",A[i].obvod,A[i].obsah );
	}
}

void napis_do_suboru(OBD A[],FILE *fw){
 int i;
 fprintf(fw,"%d\n",n);
 for (i=0;i<n;i++){
	    fprintf(fw,"%d %d\n", A[i].a,A[i].b);
		fprintf(fw,"%d %d\n",A[i].obvod,A[i].obsah );
	}
}
int index_min_obsahu(OBD A[]){
	int min,i;
	min=0;
	for (i=1;i<n;i++){
	 if (A[i].obsah<A[min].obsah)
	 min=i;
}
return min;
}
void zvacsi(OBD A[], int index){
	A[index].a+=10;
	A[index].b+=10;
}
main(){
	OBD pole[n];
	FILE *fw;
    int j;
	
	fw=fopen("obdlznik.txt","w");
	polestructur(pole);
	pocitaj(pole);
    vypispole(pole);
    napis_do_suboru(pole,fw);
    fclose(fw);
    printf("%d %d\n",j=index_min_obsahu(pole),pole[j].obsah);
    printf("%d %d\n", pole[j].a,pole[j].b);
	zvacsi(pole, j);
    printf("%d %d\n", pole[j].a,pole[j].b);
    
    
}
