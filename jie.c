
#include<stdio.h>

int main(){
    double  a[4] = {3,4,-5,4};
    double b[4] = {-2,6,-12,-8};
    double c[4] = {6,-3,2,5};
    double d[4];
    double e[4];
    double f[4];

    // 第一个for循环
    for(int i=0; i<4; i++){
        if(a[0]-i*b[0]==0){
            for(int j=0; j<4; j++){
                b[j] = b[j]*i;
            }
        }
        if(a[0]-i*c[0]==0){
            for(int j=0; j<4; j++){
                c[j] = c[j]*i;
            }
        }
    }

    // 第二个for循环
    for(int i=0; i<4; i++){
        d[i] = a[i] + b[i];
        e[i] = a[i] + c[i];
        if(d[1]-i*e[1]==0){
            for(int j=0; j<4; j++){
                c[j] = c[j]*i;
            }
        }
    }

    // 第三个for循环
    for(int i=0; i<4; i++){
        f[i] = d[i] + e[i];
    }

    double x = f[3] / f[2];
    double x2 = (e[3] - e[2] * x) / e[1];
    double x1 = (a[3] - (x * a[2]) - (x2 * a[1])) / a[0];

    printf("x3=%lf\nx2=%lf\nx1=%lf", x, x2, x1);    
            
    return 0;
}
