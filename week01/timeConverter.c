#include <stdio.h>
int main() {
//set type
    int oneDay, oneHour, oneMin;
    unsigned int d, hr, min,sec, remainder, t;
    oneMin = 60;
    oneHour = oneMin * 60;
    oneDay = oneHour * 24;
    scanf("%d", &t);
    //days
    d = t/ oneDay;
    remainder = t % oneDay;
    //hrs
    hr = remainder/ oneHour;
    remainder = remainder % oneHour;
    //mins
    min = remainder/ oneMin;
    remainder = remainder % oneMin;
    //sec
    sec = remainder;
    if(0 <= t && t <= 4000000000){
        printf("%u %u %u %u", d,hr,min,sec);
    }
}
