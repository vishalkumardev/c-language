#include <stdio.h>
#include<math.h>


int main(){
    int n;
     printf("Enter your number \n");
     scanf("%d", &n);
 
   int reverse;
     while (n>0) {
         int lastdigit = n%10;
         reverse = reverse*10 + lastdigit;
         n= n/10;
     }
   printf("%d", &reverse);
    return 0;
}
