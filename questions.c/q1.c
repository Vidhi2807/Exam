#include <stdio.h>
int main() {
  int a;
  scanf("%d",&a);
    
    if (a>0){
        printf("POSITIVE\n",a);
    }
    else if (a<0){
        printf("NEGATIVE\n",a);
    }
    else{
        printf("ZERO\n",a);
    }
    return 0;
}