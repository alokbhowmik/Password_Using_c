#include<stdio.h>
#include<conio.h>

#define SPACE 32
#define ENTER 13
int count =0;
int count1 =0;

int max(int no1,int no2){
    return no1>no2?no1:no2;
}
int main(){
    char s[800];
    char reenterPassword[800];
    char ch;
    label1:
        count =0;
        printf("ENTER PASSWORD :");
        for (int i=0;;i++){
            ch=getch();
            if(ch==13){
                break;
            }
            else if (ch==32)
            {
                i--;
            }
            else
            {
                s[i]=ch;
            printf("*");
            count++;
            }
            
            
        }
        printf("\nRE ENTER YOUR PASSOWORD :");
        count1=0;
        for (int i=0;;i++){
            ch=getch();
            if(ch==13){
                break;
            }
            else if (ch==32)
            {
                i--;
            }
            else
            {
                reenterPassword[i]=ch;
                count1++;
            printf("*");
            }
            
        
    }
    for (int  i = 0; i < max(count,count1); i++)
    {
        /* code */
        if(s[i] !=reenterPassword[i]){
            printf("\nBOTH PASSWORD ARE DIFFERENT \nPLEASE ENTER AGAIN..................:\n");
            goto label1;
            break;
        }
    }

    

    return 0;
}