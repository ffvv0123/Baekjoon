#include <iostream>
#include <string>
#define endl '\n'
using namespace std;
 typedef int element;
 typedef struct {
       element data[10001];
       int top;
 } Stack;
 
 void init(Stack *s) {
       s->top = -1;
 }
 
 int empty(Stack *s) {
       if (s->top == -1)
           return 1;
       else return 0;
 }
 
 int top(Stack *s) {
       if (empty(s)) return -1;
       return s->data[s->top];
 }
  
 int pop(Stack *s) {
       if (empty(s)) return -1;
       return s->data[s->top--];     
 }
 
 int size(Stack *s) {
    return s->top + 1;
 }
 
 void push(Stack *s, element data) {
       if(s->top > 10001) return;
       
       s->data[++(s->top)] = data;
 }
 
 int main() {
       Stack s;
       init(&s);
       int order;
       cin >> order;
       
       for(int i = 0; i < order; i++) {
            string str;
            cin >> str;
            
             if (str == "push") {
                   int data;
                   cin >> data;
                   push(&s, data);
             }
             
             if (str == "pop") {
                   cout << pop(&s) << endl;
             }
             
             if (str == "size") {
                   cout << size(&s) << endl;
             }
             
             if (str == "empty") {
                   cout << empty(&s) << endl;
             }
             
             if (str == "top") {
                   cout << top(&s) << endl;
             }
       }
 }