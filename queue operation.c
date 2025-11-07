#include<stdio.h>
#define max 5
int q[max];
int f=-1,r=-1;
void enq(int v){
    if(r==max-1)
    printf("Queue full\n");
    else{
        if(f==-1)f=0;
        else{
            r++;
            q[r]=v;
        }
    }
}
void dq(){
    if(f==-1)
    printf("Queue empty\n");
    else{
        printf("%d deleted\n",q[f]);
        f++;
        for(int i=f;i<=r;i++)
        q[i-1]=q[i];
    }
    r--;f=0;
}
void display(){
    for(int i=f;i<=r;i++)
    printf("%d\n",q[i]);
}
int main(){
    enq(10);
    enq(20);
    display();
    dq();
    enq(30);
    printf("f=%d\n",f);
    display();
}
    
