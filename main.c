#include<stdio.h>
char r1[3]={' ',' ',' '};
char r2[3]={' ',' ',' '};
char r3[3]={' ',' ',' '};
int a,g=1,count,flag =0 ;
char input ='X';

void printInstructions(){
    printf("\t1|2|3\n");
    printf("\t4|5|6\n");
    printf("\t7|8|9\n");
}

void outputarray(){
 int i=0,j=0;
printf("\t");
while (i<3)
{
    while(j== 0||j==1){
    printf("%c|",r1[j]);
    j++;
    i++;
    }
    printf("%c",r1[i]);
    i+=1;
}
printf("\n\t");
i=0;
j=0;
while (i<3)
{
    while(j== 0||j==1){
    printf("%c|",r2[j]);
    j++;
    i++;
    }
    printf("%c",r2[i]);
    i+=1;
}
printf("\n\t");
i=0;
j=0;
while (i<3)
{
    while(j== 0||j==1){
    printf("%c|",r3[j]);
    j++;
    i++;
    }
    printf("%c",r3[i]);
    i+=1;
}
printf("\n");
}

void switchPlayer() {
    if (input == 'X'){
        input = 'O';
    }
    else
    {
        input = 'X';
    }
}

int checkTie() {
    if (count >= 9) {
        printf("It's a tie!\n");
        return 0; // Indicates a tie
    }
    return 1; // Not a tie yet
}

int checkwin(){
if (r1[0]=='X' && r1[1]=='X' && r1[2]=='X')
         {
             printf("X won the game!!\n"); return 0;flag =1;
         }
         else if (r2[0]=='X' && r2[1]=='X' && r2[2]=='X')
         {
             printf("X won the game!!\n"); return 0;flag =1;
         }
         else if (r3[0]=='X' && r3[1]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); return 0;flag =1;
         }
         else if (r1[0]=='X' && r2[0]=='X' && r3[0]=='X')
         {
             printf("X won the game!!\n"); return 0;flag =1;
         }
         else if (r1[1]=='X' && r2[1]=='X' && r3[1]=='X')
         {
             printf("X won the game!!\n"); return 0;flag =1;
         }
         else if (r1[2]=='X' && r2[2]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); return 0;flag =1;
         }
         else if (r1[0]=='X' && r2[1]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); return 0;flag =1;
         }
         else if (r1[2]=='X' && r2[1]=='X' && r3[0]=='X')
         {
             printf("X won the game!!\n"); return 0;flag =1;
         }
         else if (r1[0]=='O' && r1[1]=='O' && r1[2]=='O')
         {
             printf("O won the game!!\n"); return 0;flag =1;
         }
         else if (r2[0]=='O' && r2[1]=='O' && r2[2]=='O')
         {
             printf("O won the game!!\n"); return 0;flag =1;
         }
         else if (r3[0]=='O' && r3[1]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); return 0;flag =1;
         }
         else if (r1[0]=='O' && r2[0]=='O' && r3[0]=='O')
         {
             printf("O won the game!!\n"); return 0;flag =1;
         }
         else if (r1[1]=='O' && r2[1]=='O' && r3[1]=='O')
         {
             printf("O won the game!!\n"); return 0;flag =1;
         }
         else if (r1[2]=='O' && r2[2]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); return 0;flag =1;
         }
         else if (r1[0]=='O' && r2[1]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); return 0;flag =1;
         }
         else if (r1[2]=='O' && r2[1]=='O' && r3[0]=='O')
         {
             printf("O won the game!!\n"); return 0;flag =1;
         }
         else 
         {
            switchPlayer();
            return 1;
         }
    
    
}

int makeMove(){
    reenter:
    printf("%c where do you want to place it? \n",input);
    scanf("%d",&a);
    count++;
    if (a>0 && a<=9)
    {
        if (a==1 && r1[0]!=input && r1[0]!='O')
        {
            r1[0]=input;return 0;
        }
        else if (a==2 && r1[1]!='X' && r1[1]!='O')
        {
            r1[1]=input;return 0;
        }
        else if (a==3 && r1[2]!='X' && r1[2]!='O')
        {
            r1[2]=input;return 0;
        }
        else if (a==4 && r2[0]!='X' && r2[0]!='O')
        {
            r2[0]=input;return 0;
        }
        else if (a==5 && r2[1]!='X' && r2[1]!='O')
        {
            r2[1]=input;return 0;
        }
        else if (a==6 && r2[2]!='X' && r2[2]!='O')
        {
            r2[2]=input;return 0;
        }
        else if (a==7 && r3[0]!='X' && r3[0]!='O')
        {
            r3[0]=input;return 0;
        }
        else if (a==8 && r3[1]!='X' && r3[1]!='O')
        {
            r3[1]=input;return 0;
        }
        else if (a==9 && r3[2]!='X' && r3[2]!='O')
        {
            r3[2]=input;return 0;
        }
        else{printf("\talready there, try again\n");goto reenter ;return 0;}
    }
    else printf("%c did not enter a valid value, GAME OVER...\n",input); 
    return 1;

}

int main(){

     printf("TiC TaC Toe v0.42   ~ SonicX1829//-_-\n");
     printInstructions();
     printf("X starts first!\n");
    
     while (g==1)
     {
      
        if (makeMove()==0);//input 
        else break;
        outputarray(); // print the array
        if(checkTie()==0) break;//checks tie
        if (checkwin() == 0) break;//evaluate if the person won the game
    
     }
     return 0;
}
