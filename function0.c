#include<stdio.h>

double f(double x){
    return x*x;
}

void main(){

       double a,b,h,n,sum=0,integral,x;
       printf("Enter the initial limit\na: ");
       scanf("%lf", &a);
       printf("Enter the final(upper) limit\nb: ");
       scanf("%lf", &b);
       printf("Enter the number of sub-intervals ");
       scanf("%lf", &n);
       h=(b-a)/n;
       for(int i=1;i<n;i++){
           x=a+i*h;
           sum=sum+f(x);

       }

       integral=(h/2.0)*(f(a)+sum+f(b));
       printf("\nThe answer is: %lf\n",integral);
}