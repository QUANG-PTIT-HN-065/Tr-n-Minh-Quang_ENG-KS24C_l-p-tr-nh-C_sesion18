#include<stdio.h>
int main(){
    struct Studen
    {
        int id;
        int age;
        char name[100];
        char phoneNumber[20];
    };
    struct Studen user01;
    printf("nhap vao id: ");
    scanf("%d",&user01.id);
    printf("nhap vao tuoi: ",user01.age);
    scanf("%d",&user01.age);
    fflush(stdin);
    printf("nhap vao ten: ");
    fgets(user01.name,sizeof(user01.name),stdin);
    printf("nhap vao so dien thoai: ");
    fgets(user01.phoneNumber,sizeof(user01.phoneNumber),stdin);
    printf("id: %d\n",user01.id);
    printf("age: %d\n",user01.age);
    printf("name: %s\n",user01.name);
    printf("phone: %s\n",user01.phoneNumber);
    return 0;
}