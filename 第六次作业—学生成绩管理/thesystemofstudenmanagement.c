//
// Created by 仇皓然 on 24-12-26.
//
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10 // 最大学生数量
#define INITIAL_STUDENTS 7 // 初始学生数量

typedef struct {
    int id;      // 学号
    int score;   // 成绩
} Student;

void display_all_students(Student students[], int count) {
    printf("学号\t成绩\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%d\n", students[i].id, students[i].score);
    }
}

void search_student(Student students[], int count) {
    int id;
    printf("请输入要查找的学生学号：");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("学号：%d 成绩：%d\n", students[i].id, students[i].score);
            return;
        }
    }
    printf("未找到该学生信息。\n");
}

void modify_student_score(Student students[], int count) {
    int id, new_score;
    printf("请输入要修改成绩的学生学号：");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("当前成绩：%d\n", students[i].score);
            printf("请输入新成绩：");
            scanf("%d", &new_score);
            students[i].score = new_score;
            printf("成绩修改成功！\n");
            return;
        }
    }
    printf("未找到该学生信息。\n");
}

void add_student(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("学生人数已满，无法添加！\n");
        return;
    }
    int id, score;
    printf("请输入新学生的学号：");
    scanf("%d", &id);
    printf("请输入新学生的成绩：");
    scanf("%d", &score);
    students[*count].id = id;
    students[*count].score = score;
    (*count)++;
    printf("学生添加成功！\n");
}

void delete_student(Student students[], int *count) {
    int id;
    printf("请输入要删除的学生学号：");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("学生删除成功！\n");
            return;
        }
    }
    printf("未找到该学生信息。\n");
}

int main() {
    Student students[MAX_STUDENTS] = {
        {2201, 78}, {2202, 90}, {2203, 87}, {2204, 98},
        {2205, 93}, {2206, 94}, {2207, 90}
    };
    int count = INITIAL_STUDENTS;
    int choice;

    while (1) {
        printf("\n欢迎使用班级成绩管理小程序\n");
        printf("1. 查看所有成绩\n");
        printf("2. 查找某一名学生成绩\n");
        printf("3. 修改某一名学生成绩\n");
        printf("4. 增加某一名学生成绩\n");
        printf("5. 删除某一名学生成绩\n");
        printf("6. 退出小程序\n");
        printf("请输入您的选择：");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_all_students(students, count);
                break;
            case 2:
                search_student(students, count);
                break;
            case 3:
                modify_student_score(students, count);
                break;
            case 4:
                add_student(students, &count);
                break;
            case 5:
                delete_student(students, &count);
                break;
            case 6:
                printf("感谢使用，再见！\n");
                return 0;
            default:
                printf("无效选项，请重新输入！\n");
        }
    }

    return 0;
}