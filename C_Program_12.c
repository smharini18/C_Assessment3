#include <stdio.h>

int main() {
    int x,y,z;
    printf("enter a number:");
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    if(z>=y)
      printf("sucess");
    else
      printf("failure");
    
    return 0;
}
