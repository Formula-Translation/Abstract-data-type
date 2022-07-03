#include <stdio.h>
int main() {
  // set type
  int length,width;
  double area,ftarea, time; 
  // Ask for length and width then get and save the number user types
  printf("length(m.) : ");
  scanf("%d", &length);
  printf("width(m.) : ");
  scanf("%d", &width);
  
   //check case
   if (0 < length && 0< width && length <= 1000 && width <= 1000){
      //calculation
      area = length * width*3.28084*3.28084;
      time = area/2;
      //ftarea =(area* 3.28084 * 3.28084) / 2.0;
      printf("Use %0.5f seconds.", time);
    }
}
