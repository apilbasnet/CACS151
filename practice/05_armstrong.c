#include<stdio.h>
#include<math.h>

int digitcount(int n){
    int count = 0;
    while (n>0)
    {
        count++;
        n/=10;

    }
    return count;

}

int main() {
    int n, c = 0, i, j, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    i = n;
    c = digitcount(n);

        

    while(n > 0) {
        
       
        j = n % 10; 
        sum += pow(j,c);
        n /= 10;
    }

    if (i == sum) {
        printf("\n%d is armstrong number\n", i);
    } else {
        printf("\n%d is not armstrong number\n", i);
    }

    return 0;
}