//
//  main.cpp
//  Stack_ADT_LL
//
//  Created by Ch Muhammad Wahab on 10/11/2020.
//  Copyright © 2020 Ch Muhammad Wahab. All rights reserved.
//

#include<iostream>
#include<cstdlib>
#define SIZE 5

using namespace std;
template<class t>
class Stack
{
private:
    t num[SIZE];
    t top;
public:
    Stack();
    t push(const t&);
    t topp() const;
    void pop();
    bool isEmpty() const;
    bool isFull() const;
    void displayItems();
};

template<class t>
Stack<t>::Stack(){
    top=-1;
}

template<class t>
bool Stack<t>::isEmpty() const{
    if(top==-1)
        return true;
    else
        return false;
}

template<class t>
bool Stack<t>::isFull()const{
    if(top==(SIZE-1))
        return true;
    else
        return false;
}

template<class t>
t Stack<t>::push(const t &n){
    //check stack is full or not
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}
template<class t>
t Stack<t>::topp() const{
    return num[top];
}

template<class t>
void Stack<t>::pop(){
        top--;
}
template<class t>
void Stack<t>::displayItems(){
    int i; //for loop
    cout<<"STACK is: ";
    for(i=(top); i>=0; i--)
        cout<<num[i]<<" ";
    cout<<endl;
}

int main(){
    //declare object
    Stack<int> stk;
    while(!stk.isFull()){
        stk.push(rand()%100);
    }
    while (!stk.isEmpty()) {
        cout<<stk.topp()<<" ";
        stk.pop();
    }
    return 0;
}
