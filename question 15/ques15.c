#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; 
    printf("Enter Your Number \n ");
    scanf("%d" , &n);
    

    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
       sum = sum + i ;
    }
  for(int i = n ; i >= 1 ; i--){
      printf("%d \n" , i);
  }
    printf("The sum of the sum number %d \n" , sum);
    return 0;
}
