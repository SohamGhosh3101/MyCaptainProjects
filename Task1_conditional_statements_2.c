#include<stdio.h>

int main(){
    printf("Pick an item :\n1. Pizza, Rs 239\n2. Burger, Rs 179\n3. Pasta, Rs 179\n4. French Fries, Rs 99\n5. Sandwich, Rs 149\n\n");
    int choice=0;
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Food item - Pizza\nPrice - Rs 239");
        break;
        case 2:
        printf("Food item - Burger\nPrice - Rs 129");
        break;
        case 3:
        printf("Food item - Pasta\nPrice - Rs 179");
        break;
        case 4:
        printf("Food item - French Fries\nPrice - Rs 99");
        break;
        case 5:
        printf("Food item - Sandwich\nPrice - Rs 149");
        break;
        default:
        printf("Invalid choice");
        break;
    }
    return 0;
}
