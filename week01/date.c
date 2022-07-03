// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);
    int dd =accuDaysOfMonth(m,y);
    dd +=d;
    printf("%d", dd);
}

int accuDaysOfMonth(int m, int y){
    int sum = 0;
    int dayofmonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 1; i < m; i+=1){
        if(i == 2){
            if (year(y) == 366){
                sum += 29;
            }else{
                sum += dayofmonth[i];
            }
        }
        else{
            sum += dayofmonth[i];
        }
    }
    return sum;
}

int year(int y){
    int days = 0;
    //printf("y : %d\n", y);
    if (fmod(y,400) == 0){
        days = 366;
    }
    else{
        if (fmod(y,100) == 0){
            days = 365;
        }
        else{
            if (fmod(y,4) == 0){
                days = 366;
            }
            else{
                days = 365;
            }
        }
        }
        return days;
    }
