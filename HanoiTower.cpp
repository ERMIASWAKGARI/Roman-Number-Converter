#include <iostream>
#include<cmath>
using namespace std;
void display();
void displa();
int step=0;
int score=0;
int n;
struct node1
{
    int data1;
    node1 *next1;
};
node1*top1 = NULL; 
struct node2
{
    int data2;
    node2 *next2;
};
node2*top2 = NULL;
struct node3
{
    int data3;
    node3 *next3;
};
node3*top3 = NULL;
void clearTowers(){
while(top1!=NULL){
node1*temp=top1;
top1=top1->next1;
delete temp;  
  
}  
while(top2!=NULL){
node2*temp=top2;
top2=top2->next2;
delete temp;  
  
}
while(top3!=NULL){
node3*temp=top3;
top3=top3->next3;
delete temp;  
  
}  
  
}
void display1()
{

    cout<<endl;
    node1 *p1=top1;
    cout<<"Tower1-> "<<"\t";
    while (p1 != NULL)
    {
        cout<<p1->data1<<"\t";
        p1 = p1->next1;
    }
    cout<<endl;
}
void display2()
{
    node2 *p2 = top2;
    cout<<"Tower2-> "<<"\t";
    while (p2 != NULL)
    {
        cout<<p2->data2<<"\t";
        p2 = p2->next2;
    }
    cout<<endl;
}
void display3()
{
    node3 *p3 = top3;
    cout<<"Tower3-> "<<"\t";
    while (p3 != NULL)
    {
        cout<<p3->data3<<"\t";
        p3 = p3->next3;
    }
    cout<<endl;
    cout<<endl;
}
void push1(int data)
{
    node1*np1 = new node1();
    np1->data1 = data;
    np1->next1 = NULL;
    if (top1 == NULL)
    {
        top1 = np1;
    }
    else
    {
       if(np1->data1<top1->data1){
       np1->next1 = top1;
        top1 = np1;
    }
     if(np1->data1>top1->data1){
   
   cout<<"THE GAME OVER \n";
   clearTowers();
   displa();
   exit(1);
}
    }
   
}
int pop1()
{
    
    if(top1!=NULL)
    {
        node1*p1 = top1;
        top1 = top1->next1;
        return(p1->data1);
        delete(p1);
        step++;
    }
    else{
  
    cout<<"TOWER1 is empty you can't remove\n";
    display();}
}
void push2(int data)
{
    node2*np2 = new node2();
    np2->data2 = data;
    np2->next2 = NULL;
    if (top2 == NULL)
    {
        top2 = np2;
    }
    else
    {
    if(np2->data2<top2->data2){
    
        np2->next2 = top2;
        top2 = np2;
    }
  else{
  
  cout<<"THE GAME OVER!!!!!!!!!!!!!!\n";
  clearTowers();
  displa();
  exit(1);
  }
    }
}
int pop2()
{
    
    if(top2!=NULL)
    {
       node2*p2 = top2;
        top2 = top2->next2;
        return(p2->data2);
        delete(p2);
        step++;
    }
    else{
  
    cout<<"TOWER2 is empty you can't remove\n";
    display();}
}
void push3(int data)
{
    node3*np3 = new node3();
    np3->data3 = data;
    np3->next3 = NULL;
    if (top3 == NULL)
    {
        top3 = np3;
    
    }
    else
    {
       if(np3->data3<top3->data3){
        np3->next3 = top3;
        top3 = np3;
        if(top1==NULL && top2==NULL){
        cout<<"CONGRATULATIONS YOU WIN GAME\n";
    if(step<(pow(2,n)-1)){
    score=2*n+(n/2);
    cout<<"****************************************\n";
    cout<<"****************************************\n";
    cout<<"******   SCORE =  "<<score<<"*********************\n";  
    cout<<"****************************************\n";
    cout<<"****************************************\n";
    }
    else{
    score=2*n-(n/2);
    cout<<"****************************************\n";
    cout<<"****************************************\n";
    cout<<"******   SCORE =  "<<score<<"*********************\n";  
    cout<<"****************************************\n";
    cout<<"****************************************\n";  
    }  
        displa();
    }
    }
    else{
  
    cout<<"THE GAME OVER\n";
    clearTowers();
    displa();
  exit(1);
  }
    }
    
}
int pop3()
{
    if(top3!=NULL)
    {
        node3*p3 = top3;
        top3 = top3->next3;
        return(p3->data3);
        delete(p3);
        step++;
    }
    else{
  
    cout<<"TOWER3 is empty you can't remove\n";
    display();}
}

void display(){
int x;
display1();
 display2();
 display3();
