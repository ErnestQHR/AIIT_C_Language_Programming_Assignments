//学生成绩管理系统2.0版本
// Created by 仇皓然 on 24-12-31.
//与1.0相比在保留原来1.0具有的功能之外
// 增加了学生成绩中的语文成绩，数学成绩，和英语成绩，和姓名，与每一位同学的总分
//同时支持查询每一门分数的平均分，最低分，最高分
//最大容量10
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10 // 最大学生数量
#define INITIAL_STUDENTS 7 // 初始学生数量

// 定义学生结构体
struct student {
    int id;           // 学号
    char name[20];    // 姓名
    int chinese;      // 语文成绩
    int math;         // 数学成绩
    int english;      // 英语成绩
    int sum;          // 总分
};

// 定义学生数组
struct student students[MAX_STUDENTS];

// 计算学生的总分
void calculate_sum(struct student* s) {
    s->sum = s->chinese + s->math + s->english;
}

// 显示所有学生成绩
void display_all_students(struct student students[], int count) {
    printf("学号\t姓名\t语文\t数学\t英语\t总分\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n",
               students[i].id, students[i].name,
               students[i].chinese, students[i].math,
               students[i].english, students[i].sum);
    }
}

// 查找学生成绩
void search_student(struct student students[], int count) {
    int id;
    printf("请输入要查找的学生学号：");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("学号：%d 姓名：%s 语文：%d 数学：%d 英语：%d 总分：%d\n",
                   students[i].id, students[i].name,
                   students[i].chinese, students[i].math,
                   students[i].english, students[i].sum);
            return;
        }
    }
    printf("未找到该学生信息。\n");
}

// 修改学生成绩
void modify_student_score(struct student students[], int count) {
    int id;
    printf("请输入要修改成绩的学生学号：");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("当前成绩：语文：%d 数学：%d 英语：%d\n",
                   students[i].chinese, students[i].math, students[i].english);
            printf("请输入新成绩（语文 数学 英语）：");
            scanf("%d %d %d", &students[i].chinese, &students[i].math, &students[i].english);
            calculate_sum(&students[i]); // 更新总分
            printf("成绩修改成功！\n");
            return;
        }
    }
    printf("未找到该学生信息。\n");
}

// 添加新学生
void add_student(struct student students[], int* count) {
    if (*count >= MAX_STUDENTS) {
        printf("学生人数已满，无法添加！\n");
        return;
    }
    int id;
    printf("请输入新学生的学号：");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            printf("该学号已存在！\n");
            return;
        }
    }
    students[*count].id = id;
    printf("请输入学生姓名：");
    scanf("%s", students[*count].name);
    printf("请输入学生成绩（语文 数学 英语）：");
    scanf("%d %d %d", &students[*count].chinese, &students[*count].math, &students[*count].english);
    calculate_sum(&students[*count]); // 更新总分
    (*count)++;
    printf("学生添加成功！\n");
}

// 删除学生
void delete_student(struct student students[], int* count) {
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

// 计算并显示每门课程的最高分、最低分、平均分
void display_course_statistics(struct student students[], int count) {
    int chinese_max = -1, chinese_min = 101, chinese_sum = 0;
    int math_max = -1, math_min = 101, math_sum = 0;
    int english_max = -1, english_min = 101, english_sum = 0;

    for (int i = 0; i < count; i++) {
        if (students[i].chinese > chinese_max) chinese_max = students[i].chinese;
        if (students[i].chinese < chinese_min) chinese_min = students[i].chinese;
        chinese_sum += students[i].chinese;

        if (students[i].math > math_max) math_max = students[i].math;
        if (students[i].math < math_min) math_min = students[i].math;
        math_sum += students[i].math;

        if (students[i].english > english_max) english_max = students[i].english;
        if (students[i].english < english_min) english_min = students[i].english;
        english_sum += students[i].english;
    }

    printf("语文 - 最高分：%d，最低分：%d，平均分：%.2f\n", chinese_max, chinese_min, (float)chinese_sum / count);
    printf("数学 - 最高分：%d，最低分：%d，平均分：%.2f\n", math_max, math_min, (float)math_sum / count);
    printf("英语 - 最高分：%d，最低分：%d，平均分：%.2f\n", english_max, english_min, (float)english_sum / count);
}

int main() {
    // 初始化学生数据
    struct student students[MAX_STUDENTS] = {
        {2201, "张三", 85, 92, 88, 0},
        {2202, "李四", 78, 80, 85, 0},
        {2203, "王五", 91, 85, 90, 0},
        {2204, "赵六", 77, 89, 84, 0},
        {2205, "孙七", 90, 95, 93, 0},
        {2206, "周八", 80, 83, 85, 0},
        {2207, "吴九", 88, 91, 89, 0}
    };
    // 计算总分
    for (int i = 0; i < INITIAL_STUDENTS; i++) {
        calculate_sum(&students[i]);
    }

    int count = INITIAL_STUDENTS;
    int choice;

    while (1) {
        printf("\n欢迎使用班级成绩管理系统\n");
        printf("1. 查看所有成绩\n");
        printf("2. 查找某一名学生成绩\n");
        printf("3. 修改某一名学生成绩\n");
        printf("4. 增加某一名学生成绩\n");
        printf("5. 删除某一名学生成绩\n");
        printf("6. 查看每门课程统计\n");
        printf("7. 退出\n");
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
                display_course_statistics(students, count);
                break;
            case 7:
                printf("感谢使用，再见！\n");
                return 0;
            default:
                printf("无效选项，请重新输入！\n");
        }
    }

    return 0;
}