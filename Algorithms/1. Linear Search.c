//Iterative Linear Search Algorithm.

#include<stdio.h>

int main(){
    int A[10], i, item, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter data at array: ");
    for(i=1; i<=n; i++){
        scanf("%d", &A[i]);
    }
    printf("Enter the search item: ");
    scanf("%d", &item);
    for(i=1; i<=n; i++){
        if(A[i]==item){
            printf("Item is found at %d position.", i);
            break;
        }
    }
    if(i>n){
        printf("Item is not found.");
    }
    return 0;

}
