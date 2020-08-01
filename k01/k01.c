#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern double ave_online(double val, double ave, int n);
extern double var_online(double val, double ave, double square_ave, int n);


int main(void)
{
    double val;
    double ave = 0;
    double square_ave = 0;
    double var = 0;
    double u = 0;
    double n = 0;

    char fname[FILENAME_MAX];
    char buf[256];
    FILE* fp;

    printf("input the filename of sample:");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);

    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    while(fgets(buf,sizeof(buf),fp) != NULL){
        sscanf(buf,"%lf",&val);
        n++;
        var = var_online(val, ave, square_ave, n);
        square_ave = ave_online(pow(val,2), square_ave, n);
        ave = ave_online(val, ave, n);
    }
    
    u = n*var/(n-1);

    printf("sample mean：%.2f\n", ave);
    printf("sample variance：%.2f\n",var);
    printf("population mean (estimated)：%.2f±%.2f\n", ave,sqrt(u/n));
    printf("population variance (estimated)：%.2f\n", u);
    
    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }


    return 0;


}

double ave_online(double val,double ave, int n){
    ave = ((n-1)*ave + val)/n; 
    return ave;
}

double var_online(double val, double ave, double square_ave, int n){ 
    double var;
    var = ((n-1)*square_ave/n + pow(val,2)/n) - pow(((n-1)*ave/n + val/n),2);
    return var;
}
