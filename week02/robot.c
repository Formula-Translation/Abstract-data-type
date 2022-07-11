#include <stdio.h>  
#include <string.h>
#include <math.h>
   
char activeDir(char lastDir, char turn, int *x, int *y){
    *x = -1;
    *y = -1;
    if(lastDir == 'N'){
        if(turn == 'L'){
            *x = -1;
            *y = 0;
            return 'W';
        }
        if(turn == 'R'){
            *x = 1;
            *y = 0;
            return 'E';
        }
    }
     if(lastDir == 'S'){
        if(turn == 'L'){
            *x = 1;
            *y = 0;
            return 'E';
        }
        if(turn == 'R'){
            *x = -1;
            *y = 0;
            return 'W';
        }
    }
    if(lastDir == 'E'){
        if(turn == 'L'){
            *x = 0;
            *y = 1;
            return 'N';
        }
        if(turn == 'R'){
            *x = 0;
            *y = -1;
            return 'S';
        }
    }
     if(lastDir == 'W'){
        if(turn == 'L'){
            *x = 0;
            *y = -1;
            return 'S';
        }
        if(turn == 'R'){
            *x = 0;
            *y = 1;
            return 'N';
        }
    }
    return 'Z';
}

int main()  {
    
    
    // scanf("%s", &mission);
    // char st[] = "FFRFFRFLFRFFRFLFRF";
    int inputlen = 0;
    scanf("%d",&inputlen);
    char st[inputlen];
    scanf("%s", st);
    char actDir = 'E';
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    int x = 1, y = 0;
    for(int i = 0; i < strlen(st); i++){  
        // printf("%c ", st[i]);  
        if(st[i] == 'L' || st[i] == 'R'){
            // printf("TURN! %c \n", activeDir(actDir, st[i], &x, &y));
            //update direction 
            
            actDir = activeDir(actDir, st[i], &x, &y);
        }
        if(st[i] == 'F'){
            x2 += x;
            y2 += y;
            // printf("MOVE! x:%i y:%i \n", x2, y2);

        }
    }  
    double r = sqrt(pow(x2-x1,2) + pow((y2-y1),2));
    printf("%.4lf", r);
    return 0;  
}  
