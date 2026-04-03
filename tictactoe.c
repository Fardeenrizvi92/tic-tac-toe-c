#include<stdio.h>
void printBoard(){
    printf("TIC TAC TOE GAME\n");
    printf("YOU NEED TO SELECT ANY ONE POSITION FROM THIS ONE AFTER ANOTHER\n");
    printf("1 | 2 | 3\n");
    printf(".........\n");
    printf("4 | 5 | 6\n");
    printf(".........\n");
    printf("7 | 8 | 9\n");
}
void displayUpdated(char arr[]){
    printf("%c | %c | %c\n",arr[0],arr[1],arr[2]);
    printf(".........\n");
    printf("%c | %c | %c\n",arr[3],arr[4],arr[5]);
    printf(".........\n");
    printf("%c | %c | %c\n",arr[6],arr[7],arr[8]);
 }


int main(){
    printBoard();
    char valuesStore[]={'1','2','3','4','5','6','7','8','9'};
    int choice;
    printf("ENTER 1st POSITION : ");
    scanf("%d",&choice);
    valuesStore[choice-1]='X';
    displayUpdated(valuesStore);
    return 0;
}