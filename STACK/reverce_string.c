#include<stdio.h>
#define MAX 50
struct node
{
char data[MAX];
int top;
}s;

 void init()
{
    s.top=-1;


}

int isfull()
{
    if(s.top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(char c)
{
    if(isfull()){
        printf("\n stack is full dont push...");

    }
    else{
        s.top++;
        s.data[s.top]=c;
    }

}
void disp()
{
    int i;
    for(i=s.top;i>=0;i--){
        printf("%c",s.data[i]);

    }
}
int main()
{
  int ch,i;
  char s1[50];
  printf("\n enter string...");
  gets(s1);
  for(i=0;s1[i]!='\0';i++){
    push(s1[i]);

  }
printf("\n string in revarce order...");
disp();

    return 0;
}