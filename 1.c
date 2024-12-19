#include<stdio.h>
int main(){
    struct Studen
    {
        int id;
        int age;
        char name[100];
        char phoneNumber[20];
    };
    struct Studen user01={1,18,"tran minh quang","09447384728"};
    printf("id: %d\n",user01.id);
    printf("age: %d\n",user01.age);
    printf("name: %s\n",user01.name);
    printf("phone: %s\n",user01.phoneNumber);
    return 0;
}