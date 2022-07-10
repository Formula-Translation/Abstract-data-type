#include <stdio.h>
#include <math.h>


long long int factorial(int number){
   int i;
  long int fact=1;    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  return fact;
}

int main() {   
    double degree, radian;
    int ii=1;
    double sin = 0;
    double cos = 0;
    double tan = 0;
    scanf("%lf", &degree);  
    
    radian = degree * ( M_PI / 180.0 );   
    //Series
    for (int i=1;i<20;i+=2){
      ii +=1;
      int op=1;
      if(ii%2!=0){
        op = -1;
      }
      sin+= pow(radian,i)/ factorial(i)*op;
    }

    cos = sqrt(1 - pow(sin,2));
    tan = sin/cos;
    printf("%.14lf %.14lf %.14lf\n",sin, cos, tan);
    
    return 0;  
}
  
