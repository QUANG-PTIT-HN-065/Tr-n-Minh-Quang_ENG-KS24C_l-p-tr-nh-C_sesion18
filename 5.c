#include<stdio.h>
#include<string.h>
int main(){
    int n,conut=0;
    int valu;
    char fullname[50];
    struct Studen
    {
        int id;
        int age;
        char name[100];
        char phoneNumber[20];
    };
    struct Studen stdmename[50]={
        {1,18,"tran minh quang","0977473665"},
        {2,74,"nguyen quang huy","059485729583"},
        {3,84,"tran xuan bach","05967495395"},
        {4,46,"quang huy","09492749"},
        {5,12,"tran tri duong","094859854"}};
    printf("hay nhap vào id bn can tim: ");
    scanf("%d",&n);
    for (int i = 0; i < 5; i++)
    {
        if (stdmename[i].id==n)
        {
            conut++;
            break;
        }
    }
    if (conut==0)
        {
            printf("ko tim thay id: %d\n",n);
        }else
        {
            printf("da tim thay id: %d\n",n);
            printf("hay nhap vao tuoi bn muon thay doi: ");
            scanf("%d",&valu);
            stdmename[n-1].age=valu;
            fflush(stdin);
            printf("hay nhap vao ten bn muon thay doi: ");
            fgets(fullname,sizeof(fullname),stdin);
            strcpy(stdmename[n-1].name,fullname);
            stdmename[n].name[strcspn(stdmename[n].name, "\n")] = '\0';
            for (int i = 0; i < 5; i++)
            {
                printf("id: %d\n",stdmename[i].id);
                printf("age: %d\n",stdmename[i].age);
                printf("name: %s\n",stdmename[i].name);
                printf("phone: %s\n",stdmename[i].phoneNumber);
            }
        }
    return 0;
}
