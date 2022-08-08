#include<stdio.h>
#define N 20
int main(){
float x[6]={1.0,2.0,3.0,4.0,2.0,1.0};
float  y[N];
int i;
int j;
y[0]=x[0];
y[1] = -0.5*y[0]+x[1];
FILE*fp;
for(i=2;i<N-1;i=i+1){
 if(i<6)
 y[i] = -0.5*y[i-1]+x[i]+x[i-2];
 else if(i>5 && i<8)
     y[i] = -0.5*y[i-1]+x[i-2];
 else
   y[i] = -0.5*y[i-1];
 }
fp=fopen("y.dat","w");
for(j=0;j<20;j=j+1)
fprintf(fp,"%f\n",y[j]);
fclose(fp);
return 0;


}
