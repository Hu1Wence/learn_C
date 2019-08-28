#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define PERSONS_MAX_SIZE 200
#define NAME_MAX_SIZE 1024
#define PHONE_MAX_SIZE 100

typedef struct PersonInfo {
    char name[NAME_MAX_SIZE];
    char phone[PHONE_MAX_SIZE];
} PersonInfo;

typedef struct AddrBook {
    PersonInfo persons[PERSONS_MAX_SIZE];
    int size; //当前数组中有效元素的个数
} AddrBook;

void Init(AddrBook* addr_book) {
    //能够修改结构体内容
    assert(addr_book != NULL);
    addr_book->size = 0;
    for (int i = 0; i < PERSONS_MAX_SIZE; ++i) {
        memset(addr_book->persons[i].name, 0, NAME_MAX_SIZE);
        memset(addr_book->persons[i].phone, 0, PHONE_MAX_SIZE);
    }
}

void Add(AddrBook* addr_book) {
    assert(addr_book != NULL);
    printf("新增联系人!\n");
    if (addr_book->size >= PERSONS_MAX_SIZE) {
        printf("当前通讯录已满，需要删除一个在新增!\n");
        return;
    }
    printf("请输入新联系人的姓名:");
    PersonInfo* p = &addr_book->persons[addr_book->size];
    char name[NAME_MAX_SIZE] = { 0 };
    scanf("%s", p->name);
    printf("请输入新联系人的电话:");
    char phone[PHONE_MAX_SIZE] = { 0 };
    scanf("%s", p->phone);
    ++addr_book->size;
    printf("成功新增联系人!\n");
}

void Remove(AddrBook* addr_book) {
    assert(addr_book != NULL);
    printf("删除通讯录中的联系人!\n");
    if (addr_book->size == 0) {
        printf("通讯录为空!\n");
        return;
    }
    printf("请输入要删除联系人的序号:");
    int index = 0;
    scanf("%d", &index);
    if (index < 0 || index >= addr_book->size) {
        printf("您输入的序号有误! [0 - %d]\n", addr_book->size - 1);
        return;
    }
    //如何删除
    if (index == addr_book->size - 1) {
        //1.删除最后一个联系人
        --addr_book->size;
    } else {
        //2.删除中间联系人，先把最后一个联系人复制到要删除的位置上
        //在删除最后一个元素
        PersonInfo* mid = &addr_book->persons[index];
        PersonInfo* last = &addr_book->persons[addr_book->size - 1];
        strcpy(mid->name, last->name);
        strcpy(mid->phone, last->phone);
        --addr_book->size;
    }
    printf("删除成功!当前还剩 %d 条记录!\n", addr_book->size);
}

void PrintAll(AddrBook* addr_book) {
    assert(addr_book != NULL);
    printf("===================\n");
    for (int i = 0; i < addr_book->size; ++i) {
        PersonInfo* p = &addr_book->persons[i];
        printf("[%d] %s: %s\n", i, p->name, p->phone);
    }
    printf("当前共有 %d 条记录!\n", addr_book->size);
    printf("===================\n");

}

void Update(AddrBook* addr_book) {
    assert(addr_book != NULL);
    printf("更新联系人记录!\n");
    if (addr_book->size == 0) {
        //通讯录为空，不能进行修改
        printf("当前通讯录为空，无法修改!\n");
        return;
    }
    printf("请输入您要修改的联系人记录的序号：");
    int index = 0;
    scanf("%d", &index);
    if (index < 0 || index >= addr_book->size) {
        printf("您输入的序号有误! [0 - %d]", addr_book->size - 1);
        return;
    }
    PersonInfo* p = &addr_book->persons[index];
    printf("当前姓名为: %s 请输入修改之后的姓名(* 表示该字段不进行修改):", p->name);
    char name[NAME_MAX_SIZE] = { 0 };
    scanf("%s", p->name);
    if (strcmp(name, "*") != 0) {
        strcpy(p->name, name);
    }
    printf("当前电话为: %s 请输入修改之后的电话(* 表示该字段不进行修改):",p->phone);
    char phone[PHONE_MAX_SIZE] = { 0 };
    scanf("%s", p->phone);
    if (strcmp(phone, "*") != 0) {
        strcpy(p->phone, phone);
    }
    printf("成功修改联系人!\n");
}

int Menu() {
    printf("===================\n");
    printf("  欢迎使用通讯录程序！ \n");
    printf(" 1.显示所有联系人信息  \n");
    printf(" 2.新增联系人信息。   \n");
    printf(" 3.修改联系人信息。   \n");
    printf(" 4.删除联系人信息。   \n");
    printf(" 0.退出通讯录程序。   \n");
    printf("===================\n");
    printf("请输入您的选择:\n");
    int choice = 0;
    scanf("%d", &choice);
    return choice;
}

AddrBook addr_book;

typedef void(*Func)(AddrBook*);

int main() {
    Init(&addr_book);
    Func func_table[] = {
        NULL,
        PrintAll,
        Add,
        Update,
        Remove,
    };
    
    while (1) {
        int choice = Menu();
        if (choice < 0 || choice > 4) {
            printf("您的输入有误！请重新输入!\n");
            continue;
        }
        if (choice == 0) {
            printf("goodbye!\n");
            break;
        }
        func_table[choice](&addr_book);
    }
    
    return 0;
}
