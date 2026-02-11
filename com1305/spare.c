#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct Address {
    char id[20];
    char name[50];
    char type[30];
    char CutieMark;
};
struct Address db[100]; //database
int count = 0;

void loadFromFile() //โหลดข้อมูลเข้าไฟล์
{ 
    FILE *fp = fopen("data.txt","rb"); //read binary
    if(!fp) return;

    count = 0;
    while(fread(&db[count], sizeof(struct Address), 1, fp) == 1) {
        count++;
        if(count >= 100) break;
    }
    fclose(fp);
}

void saveToFile() //บันทึกข้อมูลลงไฟล์
{ 
    FILE *fp = fopen("data.txt","wb"); //write binary
    if(!fp) return;

    for(int i=0;i<count;i++) {
        fwrite(&db[i], sizeof(struct Address), 1, fp);
    }
    fclose(fp);
}


void addData() //เพิ่มข้อมูล
{
    system("cls");
    printf("Enter ID: ");
    scanf("%s", db[count].id);
    fflush(stdin);
    printf("Enter name: ");
    scanf(" %[^\n]", db[count].name);
    fflush(stdin);
    printf("Enter type: ");
    scanf("%s", db[count].type);
    fflush(stdin);
    printf("Enter CutieMark: ");
    scanf("%s", db[count].CutieMark);
    fflush(stdin);
    count++;
    saveToFile();
    printf("Data added successfully!\n");

}

void searchData() //ค้นหาข้อมูล
{
    system("cls");
    char key[20];
    int found = 0;
    printf("Enter ID to search: ");
    scanf("%s", key);
    fflush(stdin);
    for(int i=0;i<count;i++) {
        if(strcmp(db[i].id, key) == 0) {
            printf("ID: %s\n", db[i].id);
            printf("Name: %s\n", db[i].name);
            printf("Type: %s\n", db[i].type);
            printf("CutieMark: %s\n", db[i].CutieMark);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Data not found!\n");
    }
}

void editData() //แก้ไขข้อมูล
{
    system("cls");
    char key[20];
    int found = 0;
    printf("Enter ID to edit: ");
    scanf("%s", key);
    fflush(stdin);
    for(int i=0;i<count;i++) {
        if(strcmp(db[i].id, key) == 0) {
            printf("Enter new name: ");
            scanf(" %[^\n]", db[i].name);
            fflush(stdin);
            printf("Enter new type: ");
            scanf("%s", db[i].type);
            fflush(stdin);
            printf("Enter new CutieMark: ");
            scanf("%s", db[i].CutieMark);
            fflush(stdin);
            saveToFile();
            printf("Data updated successfully!\n");
            saveToFile();
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Data not found!\n");
    }
}

void deleteData() //ลบข้อมูล
{
    system("cls");
    char key[20];
    int found = 0;
    int i,j;
    printf("Enter ID to delete: ");
    scanf("%s", key);
    fflush(stdin);

    for(i=0;i<count;i++) {
        if(strcmp(db[i].id, key) == 0) {
            found = 1;
            break;
        }
    }
    if(found) {
        for(j=i;j<count-1;j++) {
            db[j] = db[j+1];
        }
        count--;
        saveToFile();
        printf("Data deleted successfully!\n");
    } else {
        printf("Data not found!\n");
    }
}

void showAllData() //แสดงข้อมูลทั้งหมด
{
    system("cls");
    printf("-------- All Data Pony -------\n");
    for(int i=0;i<count;i++) {
        printf("ID: %s\n", db[i].id);
        printf("Name: %s\n", db[i].name);
        printf("Type: %s\n", db[i].type);
        printf("CutieMark: %s\n", db[i].CutieMark);
        printf("----------------------------\n");
    }
}
    
int main()
{
    loadFromFile();
    int choice;
    do {
        system("cls");
        printf("\nPony Database Management\n");
        printf("1. Add Data\n");
        printf("2. Search Data\n");
        printf("3. Edit Data\n");
        printf("4. Delete Data\n");
        printf("5. Show All Data\n");
        printf("6. Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addData();
                break;
            case 2:
                searchData();
                break;
            case 3:
                editData();
                break;
            case 4:
                deleteData();
                break;
            case 5:
                showAllData();
                break;
            case 6:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 6);
    return 0;
}
  