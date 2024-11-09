{\rtf1\ansi\ansicpg1252\cocoartf2709
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww28600\viewh18000\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<iostream>\
using namespace std;\
\
class node\{\
    public:\
    int data;\
    node* next;\
    \
    \
    node(int v)\{\
        data=v;\
        next=NULL;\
    \}\
\
\};\
\
void insertatfirst(node* &head,int data)\{\
    node* n1=new node(data);\
    node* temp=head;\
    n1->next=head;\
    head=n1;\
\
\}\
\
void display(node* &head)\{\
    node*temp=head;\
    int count=0;\
    while(temp!=NULL)\{\
        cout<<temp->data<<"->";\
        temp=temp->next;\
        count++;\
    \}\
    cout<<"NULL"<<endl<<"no. of elements in this list "<<count<<endl<<endl;\
    \
\}\
int main()\{\
    \
    node*head=NULL;\
    \
    insertatfirst(head,23);\
    display(head);\
    insertatfirst(head,32);\
    display(head);\
    insertatfirst(head,15);\
    display(head);\
    \
    \
    return 0;\
\}}