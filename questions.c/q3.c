#include <stdio.h>
int main() {
int array[]={20,32,6,7,22,47,21};
int largest= array[0];
 for(int i=1;i<7; i++){
  if (array[i]>largest) {
      largest=array[i];
         }
}
printf("largest element :%d\n", largest);

int array1[]={20,32,6,7,22,47,21};

int smallest = array1[0];
for(int i = 0; i < 7;i++){
    if(array1[i] < smallest){
        smallest=array1[i];
    }
}
printf("Smallest element : %d\n",smallest);
 
return 0;
}