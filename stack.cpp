/*
This code can be compiled and run ok. And I used dynamically memory allocation and linked list in this case
This is to check whether the brackets are symmetrical or not using a stack
usage:
	d44051208 xxxxxx
	where xxxxxx are string you've put and want to check whether the brackets are symmetrical or not.
input file:
	none
output files:
	none
compile:
	g++ -o d44051208 d44051208.cpp
pseudocode:
struct Node:
    data // data is char
    next<-point to node
top<-point to a Node
first<-point to a Node
func push(a) a=char:void
    temp<-allocate a new Node
    temp.data<-a
    temp.next<-top
    if top=null
        then first<-temp
    else
        top<-temp
func pop():char
    temp<-point to a Node
    if top != null
        then temp<-top
        top<-top.next
        temp.next<-null
        value<-temp.data
        delete temp
        return value
    else if top=null
        then return F
func empty_stack_check():bool
	temp<-point to a Node
	temp<-top
	if top = null
        return true
    else
        return false
func Print_out(s, size)s=string size=int :void {
	for j(1 to size)
        do print(s[j])
main_check
set expr
for i (1 to expr.size)
    do if expr[i]=( || expr[i]=[ || expr[i] = {
            then push(expr[i])
        else if expr[i] == )
           then  x<-pop()
            if x=[
                then print("Error!! You should add ] right after")
                Print_out(expr,i)
            else if x={
                then print("Error!! You should add } right after")
                Print_out(expr,i)
			else if x = F
				then if i != 0
					print("Error!! You should add ( right after")
                    Print_out(expr,i)
                else
                    print("Error!! You should add ( right before")
		else if expr[i] =]
			x <- pop()
			if x = (
                then print("Error!! You should add ) right after")
				Print_out(expr,i)
			else if x = {
				then print("Error!! You should add } right after")
                Print_out(expr,i)
			else if x = F
				then if i != 0
                    then print("Error!! You should add [ right after")
                    Print_out(expr,i)
				else
                    print("Error!! You should add [ right before")
            else if expr[i] = }
                then x <- pop()
                    if x = [
                    then print("Error!! You should add ] right after")
                    Print_out(expr, i);
                else if x = (
                    then print ("Error!! You should add ) right after")
                    Print_out(expr, i);
                else if x = F
                    then if i != 0
					print("Error!! You should add { right after")
					Print_out(expr, i);
				else
				print("Error!! You should add { right before"expr[i]<<"!!")
		if empty_stack_check() = true && i=expr.length-1) {
			print("OK!The string")
			for k(1 to expr.length)
                do print(expr[k])
            print("passed the check!!" )

coded by Chen Yu-Hsuan, ID: D44051208, email: yusyuanchen0623@gmail.com
date: 2019.10.27
*/
#include<iostream>
#include<string>
using namespace std;

struct Node
{
	char data;
	struct Node*next;
	//create a structure to create a link list
};
struct Node*top;//the top of the stack
struct Node*first;//first of the stack

void push(char a) {
	struct Node*temp;
	temp = new Node();//dynamically memory allocation
	temp->data = a;
	temp->next = top;
	if (top == NULL) {
		first = temp;
	}
	top = temp;
	//this function is to push in char into stack
}

char pop() {
	char value;
	struct Node*temp;
	if (top != NULL) {
		temp = top;
		top = top->next;
		temp->next = NULL;
		value = temp->data;
		delete temp;
		return value;
	}
	else if (top == NULL)
	{
		return'F';
	}
	//this function is to pop_out char out off stack
}

bool empty_stack_check() {
	struct Node*temp;
	temp = top;
	if (top == NULL) {
		return true;
	}
	else {
		return false;
	}
	//check the stack is empty or not
}

void Print_out(string s, int size) {
	for (int j = 0; j < size; j++) {
		cout << s[j];
	}
	cout << "!!";
	//print the string
}

int main() {
	string expr;
	cout << "Please input a string: " << endl;
	cin >> expr;
	for (int i = 0; i < expr.size(); i++) {
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{
			push(expr[i]);//if the char in the string is (,{,[ then push
		}
		else if (expr[i] == ')')//if char in the string is) then do the following
		{
			char x;
			x = pop();
			if (x == '[') {
				cout << "Error!! You should add ] right after";
				Print_out(expr, i);
				break;//jump out of loop
			}
			else if (x == '{') {
				cout << "Error!! You should add } right after";
				Print_out(expr, i);
				break;//jump out of loop
			}
			else if (x == 'F') {
				if (i != 0) {
					cout << "Error!! You should add ( right after";
					Print_out(expr, i);
				}
				else
				{
					cout << "Error!! You should add ( right before";
					cout << expr[i]<<"!!";
				}
				break;//jump out of loop
			}
		}
		else if (expr[i] == ']')//if char in the string is ] then do the following
		{
			char x;
			x = pop();
			if (x == '(') {
				cout << "Error!! You should add ) right after";
				Print_out(expr, i);
				break;//jump out of loop
			}
			else if (x == '{') {
				cout << "Error!! You should add } right after";
				Print_out(expr, i);
				break;//jump out of loop
			}
			else if (x == 'F') {
				if (i != 0) {
					cout << "Error!! You should add [ right after";
					Print_out(expr, i);
				}
				else
				{
					cout << "Error!! You should add [ right before";
					cout << expr[i]<<"!!";
				}
				break;//jump out of loop
			}
		}
		else if (expr[i] == '}')//if char in the string is } then do the following
		{
			char x;
			x = pop();
			if (x == '[') {
				cout << "Error!! You should add ] right after";
				Print_out(expr, i);
				break;//jump out of loop
			}
			else if (x == '(') {
				cout << "Error!! You should add ) right after";
				Print_out(expr, i);
				break;//jump out of loop
			}
			else if (x == 'F') {
				if (i != 0) {
					cout << "Error!! You should add { right after";
					Print_out(expr, i);
				}
				else
				{
					cout << "Error!! You should add { right before";
					cout << expr[i]<<"!!";
				}
				break;//jump out of loop
			}
		}
		if (empty_stack_check() == true&&i==expr.length()-1) {
			cout << "OK!The string";
			for (int k = 0; k < expr.length(); k++) {
				cout << expr[k];
			}
			cout << "passed the check!!" << endl;
		}
		//if noting went wrong then the string pass the check
	}
	return 0;
}

