#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int top = -1, front = 0; 
int stack[100]; 
void push(char); 
void pop(); 
void main() 
{ 
int i; 
char s[100], b; 
while (1) 
{ 
printf("Enter the String\n"); 
scanf("%s", s); 
for (i = 0;s[i] != '\0';i++) 
{ 
b = s[i]; 
push(b); 
} 
for (i = 0;i < (strlen(s) / 2);i++) 
{ 
if (stack[top] == stack[front]) 
{ 
pop(); 
front++; 
} 
else 
{ 
printf("%s is not a palindrome\n", s); 
break; 
} 
} 
if ((strlen(s) / 2) == front) 
printf("%s is palindrome\n", s); 
front = 0; 
top = -1; 
} 
} 
void push(char a) 
{ 
top++; 
stack[top] = a; 
} 
void pop() 
{ 
top--; 
}