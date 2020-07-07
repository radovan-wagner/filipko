#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define N 1000

typedef struct bod{
	double x;
	double y;
}BOD;

BOD bod;

void pis(BOD b, FILE *ff){
	fprintf(ff, "%.3lf\t%.3lf\n",b.x,b.y);
}
int test(BOD b){
	double d;
	d=pow(b.x,2)+b.y*b.y;
	if (d<=1) return 1;
	else return 0;
}
main(){
	int i,j,pocet=0;
	double t, krok=0.005,a=2,m=12;
	int sx=0,sy=0;
	double d; //vzdialenost od pociatku
	BOD bod;
	srand(time(0));
	FILE *f1,*f2;
	f1=fopen("body_all.txt", "w");
	f2=fopen("body_in.txt", "w");
//	srand((unsigned) time(NULL));
	pocet=0;
	//for (i=0;i<N;i++){ //kruznica
	for (t=0;t<2*M_PI;t=t+krok){
	bod.x=sx+a*t*sin(m*t);
	bod.y=sy+a*t*cos(m*t);
	//	bod.x=(double)rand()/RAND_MAX; //kruznica
	//	bod.y=(double)rand()/RAND_MAX; //kruznica
		pis(bod,f1);
		if (test(bod)==1){
			pis(bod,f2);
			pocet++;
		}
		}
		printf("SkutPi=%lf, NasePi=%lf",M_PI,4.0*(double)pocet/N);
		if (fclose(f1)== EOF)
		 printf("Subor sa neuzatvoril.\n");
		if (fclose(f2)== EOF)
		 printf("Subor sa neuzatvoril.\n");
}
