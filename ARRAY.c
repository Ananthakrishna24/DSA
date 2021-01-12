


#include<stdio.h>
#include<stdlib.h>

int a[10],n,elem,i,pos;
void create();
void display();
void insert();
void delete();

void create(){
    int i;
    printf("=> 1. Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

}
void display()
{
    int i;
    printf("The array elements are:\n");
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);
}

void insert(){
    int i;
    printf("=> 1. Enter the position to be inserted\n");
    scanf("%d", &pos);
    printf("=> 1. Enter the element\n");
    scanf("%d", &elem);
    for(i = n-1; i>=pos; i--){
        a[i+1] = a[i];
    }
    a[pos] = elem;
    n++;
}

void delete()
{
    printf("Enter  position of element to be deleted:\n");
    scanf("%d",&pos);
    elem=a[pos];
    for(i=pos; i<n; i++){
        a[i] = a[i+1];
    }
    n--;
    printf("Deleted element is %d\n",elem );
}


int main()
{
    int ch;
    while(ch)
    {
        printf("\n\n______MENU_____\n");
        printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();break;
            case 2:display();break;
            case 3:insert();break;
            case 4:delete();break;
            case 5:exit(0);break;
            default :printf("INVALID CHOICE\n");
        }
    }return 0;
}
