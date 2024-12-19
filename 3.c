#include<stdio.h>
#include<string.h>
int main(){
    struct Studen
    {
        int id;
        int age;
        char name[100];
        char phoneNumber[20];
    };
    struct Studen stdmename[5];
    for (int i = 0; i < 5; i++)
    {
        stdmename[i].id=i+1;
        printf("nhap vao tuoi: ");
        scanf("%d",&stdmename[i].age);
        fflush(stdin);
        printf("nhap vao ten: ");
        fgets(stdmename[i].name,sizeof(stdmename[5].name),stdin);
        stdmename[i].name[strcspn(stdmename[i].name, "\n")] = '\0'; 
        printf("nhap vao so dien thoai: ");
        fgets(stdmename[i].phoneNumber,sizeof(stdmename[5].phoneNumber),stdin);
        stdmename[i].phoneNumber[strcspn(stdmename[i].phoneNumber, "\n")] = '\0'; 
    }
    for (int i = 0; i < 5; i++)
    {
        printf("id: %d\n",stdmename[i].id);
        printf("age: %d\n",stdmename[i].age);
        printf("name: %s\n",stdmename[i].name);
        printf("phone: %s\n",stdmename[i].phoneNumber);
    }
    
}