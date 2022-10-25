#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    char fristname[50];
    char lastname[50];
    char phonenum[50];
    struct node * next;
};

struct node * root = NULL;

void showMenu(){
    printf("--------- Phonebook ---------\n");
    printf("1 -> Add Data\n");
    printf("2 -> Delete Data\n");
    printf("3 -> Display Data\n");
    printf("4 -> Search\n");
    printf("5 -> Exit\n\n");
    printf("Enther Choice : ");
}

int inputChoice(){
    int choice;
    scanf("%d", &choice);
    printf("\n\n");
    return choice;
}

void addData(){
    struct node * data = (struct node * ) malloc(sizeof(struct node));
    printf("--------- Add Phonebook ---------\n");
    printf("FristName : ");
    scanf("%s", &data->fristname);
    printf("LastName : ");
    scanf("%s", &data->lastname);
    printf("Phonenumber : ");
    scanf("%s", &data->phonenum);
    printf("---------------------------------\n\n");
    
    if(root == NULL){
        data->next = NULL;
    }else{
        data->next = root;
    }
    root = data;
}

void displayData(){
    struct node * ptr = root;
    while(ptr != NULL){
        printf("--------- Display Phonebook ---------\n");
        printf("FristName : %s\n", ptr->fristname);
        printf("LastName : %s\n", ptr->lastname);
        printf("phonenumber : %s\n", ptr->phonenum);
        printf("-------------------------------------\n\n");
        ptr = ptr->next;
    }
    printf("\n");
}

void deleteData(){
    char name[50];
    printf("--------- Delete Phonebook ---------\n");
    printf("Name to delete : ");
    scanf("%s", &name);
    
    struct node * ptr = root;
    struct node * last = root;
    
    while(ptr != NULL){
        if(strcmp(ptr->fristname, name) == 0){
            break;
            
        }
        last = ptr;
        ptr = ptr->next;
    }
    if(ptr==NULL){
        printf("ERROR Data not found\n");
        printf("------------------------------------\n\n");
        return;
    }else{
        if(ptr==last){
            if(ptr->next == NULL){
                root = NULL;
                free(ptr);
                printf("------------------------------------\n\n");
                return;
            }
            root = ptr->next;
            free(ptr);
            printf("------------------------------------\n\n");
            return;
        }
        last->next = ptr->next;
        free(ptr);
        printf("------------------------------------\n\n");
        return;
    }
}

int SearchData(){
    int a;
    char search[50];
    printf("--------- Search Phonebook ---------\n");
    printf("1 Search with FristName\n");
    printf("2 Search with LastName\n");
    printf("3 Search with Phonenumber\n");
    printf("4 MainMenu\n");
    printf("Enther Choice :");
    scanf("%d",&a );
    printf("-------------------------------------\n\n");
    if(a==1){
    printf("FristName to Search : ");
    scanf("%s", &search);
    struct node * ptr = root;
    struct node * last = root;
    while(ptr != NULL){
        if(strcmp(ptr->fristname, search) == 0){
            printf("--------- FristName Search ---------\n");
            printf("FristName : %s\n", ptr->fristname);
            printf("LastName :%s\n", ptr->lastname);
            printf("Phonenumber : %s\n", ptr->phonenum);
            printf("------------------------------------\n\n");
            break;
        }
        last = ptr;
        ptr = ptr->next;
    }
    }else if(a == 2){
    printf("LastName to Search : ");
    scanf("%s", &search);
    struct node * ptr = root;
    struct node * last = root;
    while(ptr != NULL){
        if(strcmp(ptr->lastname, search) == 0){
            printf("--------- LastName Search ---------\n");
            printf("FristName : %s\n", ptr->fristname);
            printf("LastName :%s\n", ptr->lastname);
            printf("Phonenumber : %s\n", ptr->phonenum);
            printf("-----------------------------------\n\n");
            break;
        }
        last = ptr;
        ptr = ptr->next;
    }
    }else if(a == 3){
    printf("Phonenumber to Search : ");
    scanf("%s", &search);
    struct node * ptr = root;
    struct node * last = root;
    while(ptr != NULL){
        if(strcmp(ptr->phonenum, search) == 0){
            printf("--------- Phonenumber Search ---------\n");
            printf("FristName : %s\n", ptr->fristname);
            printf("LastName :%s\n", ptr->lastname);
            printf("Phonenumber : %s\n", ptr->phonenum);
            printf("--------------------------------------\n\n");
            break;
        }
        last = ptr;
        ptr = ptr->next;
    }
    }else if(a == 4){
        int main();
    }else{
        printf("ERROR No function\n\n");
        SearchData();
    }
}

int main()
{
   for(;;){
       showMenu();
       int choice = inputChoice();
       switch(choice){
            case 1:
                addData();
                break;
            case 2:
                deleteData();
                break;
            case 3:
                displayData();
                break;
            case 4:
                SearchData();
                break;
            case 5:
                printf("ExitPhonebook...\n");
                printf("-----------------------------\n\n");
                return 0;
                
       }
   }
   return 0;
}
