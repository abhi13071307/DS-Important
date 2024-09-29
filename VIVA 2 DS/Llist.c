#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insertele();
void searchele();
void deleteele();
void showele();
struct node{
    char name[50];
    int age;
    char place[50];
    struct node* link;
};
struct node* start = NULL;
int main(){
    int choice;
    while(1){
    printf("\nMenu: ");
    printf("\n1. Insert Entries ");
    printf("\n2. Search And Replace Entries ");
    printf("\n3. Delete Entries. ");
    printf("\n4. Show Entries. ");
    printf("\n5. Exit.");
    printf("\nEnter Your Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: insertele();
                break;
        case 2: searchele();
                break;
        case 3: deleteele();
                break;
        case 4: showele();
                break;
        case 5: exit(0);
        default: printf("\nInvalid choice!");
    }
    }
    return 0;
}
void insertele(){
    struct node* temp,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n___________Insertion Function:_____________ ");
    printf("\nEnter Details: ");
    printf("\nName: ");
    scanf("%s",&temp->name);
    printf("\nAge: ");
    scanf("%d",&temp->age);
    printf("\nPlace: ");
    scanf("%s",&temp->place);
    temp->link=NULL;
    if(start==NULL){
        start=temp;
        q=temp;
    }
    else{
    temp->link = start;
    start = temp;
    }
    printf("\nElement Added!");
    return;
}
void deleteele(){
    printf("\n_____________Deletion Function:_______________ ");
    struct node* temp,*new;
    temp=start;
    while(temp!=NULL){
        if(temp->age>=90)
        {
            struct node* temp;
            if (start == NULL)
            printf("\nList is empty\n");
            else {
            new = start;
            start = start->link;
            free(new);
            }
        }
        temp=temp->link;
    }
    showele();
    return;
}
void searchele(){
    printf("\n________________Searching Function:_______________ ");
    struct node* temp;
    temp=start;
    while(temp!=NULL){
        if((strcmp(temp->place,"Delhi")==0))
        {
            strcpy(temp->place,"New Delhi");
        }
        else
        return;
        temp=temp->link;
    }
    return;
}
void showele(){
    printf("\n_____________Display Function:_____________");
    struct node* temp;
    temp=start;
    int i=1;
    while(temp!=NULL){
        printf("\n__________Details of User %d are_______",i);
        printf("\nName: ");
        printf("%s",temp->name);
        printf("\nAge: ");
        printf("%d",temp->age);
        printf("\nPlace: ");
        printf("%s",temp->place);
        temp=temp->link;
        i++;
    }
    return;
}