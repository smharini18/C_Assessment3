
#include <stdio.h>

int main() {
    int x,y,z,a,b;
    printf("enter a number:");
    scanf("%d",&x);
    y=x%10;
    z=(x/10)%10;
    a=(x/100)%10;
    b=x/1000;
    if((y==a)&(z==b))
      printf("sucess");
    else
      printf("failure");
    
    return 0;
}
