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
 int checkResult(char arr[]){
    if(arr[0]=='X' && arr[1]=='X' && arr[2]=='X' || arr[0]=='O' && arr[1]=='O' && arr[2]=='O' ||
        arr[3]=='X' && arr[4]=='X' && arr[5]=='X' || arr[3]=='O' && arr[4]=='O' && arr[5]=='O' ||
        arr[6]=='X' && arr[7]=='X' && arr[8]=='X' || arr[6]=='O' && arr[7]=='O' && arr[8]=='O' ||
        arr[0]=='X' && arr[3]=='X' && arr[6]=='X' || arr[0]=='O' && arr[3]=='O' && arr[6]=='O'||
        arr[1]=='X' && arr[4]=='X' && arr[7]=='X' || arr[1]=='O' && arr[4]=='O' && arr[7]=='O'||
        arr[2]=='X' && arr[5]=='X' && arr[8]=='X' || arr[2]=='O' && arr[5]=='O' && arr[8]=='O' ||
        arr[0]=='X' && arr[4]=='X' && arr[8]=='X' || arr[0]=='O' && arr[4]=='O' && arr[8]=='O' ||
        arr[2]=='X' && arr[4]=='X' && arr[6]=='X' || arr[2]=='O' && arr[4]=='O' && arr[6]=='O')
        return 1;
        else 
        return 0;
 }


int main(){
    printBoard();

    char valuesStore[]={'1','2','3','4','5','6','7','8','9'};

    for(int i=0;i<9;i++){
      int choice;

      while(1){
       printf("ENTER %d POSITION : ",(i+1));
        scanf("%d",&choice);
        if(choice<1 || choice>9){
            printf("INVALID INPUT! ENTER BETWEEN 1-9 \n");
            continue;
        }
        if(valuesStore[choice-1]=='X' || valuesStore[choice-1]=='O' ){
            printf("Already Entered! Enter another value\n");
            continue;
        } 
        break;
      }
        
        if (i%2==0)
            valuesStore[choice-1]='X';
        else
            valuesStore[choice-1]='O';
        displayUpdated(valuesStore);
        if(checkResult(valuesStore) == 1){
            printf("\n");
            printf("CONGRATULATION! THE ONE LAST ENTERED IS THE WINNER\n");
            printf("GAME END");
            return 0;
        }
         
    }
    
    return 0;
}