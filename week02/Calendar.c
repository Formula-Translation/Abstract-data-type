// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

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
int dayOfMonth(int m, int y){
    int sum = 0;
    int dayofmonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(m == 2){
            if (year(y) == 366){
                return 29;
            }else{
                return 28;
            }
        }
    
        return dayofmonth[m];

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

int accuDaysOfYear(int y){
    int sum = 0;

    for(int i = 1990; i < y; i+=1){
        sum += year(i);
    }
    //printf("TEST %d", sum);
    return sum;
}

const char* checkDay(int n){
    if(fmod((n + 6),7) == 0){ return "Mon";}
    if(fmod((n + 5),7) == 0){ return "Tue";}
    if(fmod((n + 4),7) == 0){ return "Wed";}
    if(fmod((n + 3),7) == 0){ return "Thu";}
    if(fmod((n + 2),7) == 0){ return "Fri";}
    if(fmod((n + 1),7) == 0){ return "Sat";}
    if(fmod((n + 0),7) == 0){ return "Sun";}
return "";
}

int startDay(int n){
    if(fmod((n + 6),7) == 0){ return 1;}//Mon
    if(fmod((n + 5),7) == 0){ return 2;}//Tue
    if(fmod((n + 4),7) == 0){ return 3;}//Wed
    if(fmod((n + 3),7) == 0){ return 4;}//Thu
    if(fmod((n + 2),7) == 0){ return 5;}//Fri
    if(fmod((n + 1),7) == 0){ return 6;}//Sat
    if(fmod((n + 0),7) == 0){ return 0;}//Sun
return 0;
}
int main() {
    int d = 1;
    int m, y;
    char* month[12] = {"January", "February","March","April", "May","June", "July", "August", "September", "October", "November", "December"};
    // scanf("%d/%d/%d", &d, &m, &y);
    printf("Enter year: ");
    scanf("%d", &y);
    printf("Enter month: ");
    scanf("%d", &m);
    int dd = accuDaysOfYear(y);
    // printf("day of year :%d\n", dd);
    dd +=accuDaysOfMonth(m,y);
    // printf("day of month :%d\n", accuDaysOfMonth(m,y));
    dd +=d ;
    // printf("%s", checkDay(dd));
    // printf("day :%d\n", d);
    // printf("Day from Base: %d\n", dd);
    int startD = -1 * startDay(dd);
    int arr[6][7];
    for(int i = 0; i < 6 ; i ++){
        for(int j = 0; j < 7; j++){
            startD +=1;
            if (startD > dayOfMonth(m,y) || startD < 1){
                arr[i][j] = 0;
            } else{
                arr[i][j] = startD;
            }
            
        }
    }
        printf("====================\n"); 
        printf("%s %d\n", month[m-1], y);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");
        
        for(int i = 0; i < 6 ; i ++){
        for(int j = 0; j < 7; j++){
            if(arr[i][j] == 0){
                printf("    ");
            }
            else{
                if(arr[i][j] < 10){
                    printf("  %d ", arr[i][j]);
                } else{ 
                    printf(" %d ", arr[i][j]);
                }
            }
            // printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
