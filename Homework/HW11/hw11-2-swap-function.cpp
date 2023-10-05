/*
    ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี

    Test case:
        Input A
        Name : 
            Yorn
        Age : 
            31
        Input B
        Name : 
            Thane
        Age : 
            20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)

*/#include <stdio.h>

// ประกาศโครงสร้าง Person เพื่อเก็บข้อมูลของคน
struct Person {
    char name[50];
    int age;
};

// ฟังก์ชันสลับอายุของคน 2 คน
void swapAge(struct Person *person1, struct Person *person2) {
    int temp = person1->age;
    person1->age = person2->age;
    person2->age = temp;
}

int main() {
    struct Person personA, personB;

    // รับข้อมูลคนที่ 1
    printf("Input A\n");
    printf("Name: ");
    scanf("%s", personA.name);
    printf("Age: ");
    scanf("%d", &personA.age);

    // รับข้อมูลคนที่ 2
    printf("Input B\n");
    printf("Name: ");
    scanf("%s", personB.name);
    printf("Age: ");
    scanf("%d", &personB.age);

    printf


