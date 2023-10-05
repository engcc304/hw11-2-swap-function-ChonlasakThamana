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

// สร้างโครงสร้างข้อมูลสำหรับบันทึกชื่อและอายุของคน
struct Person {
    char name[100];
    int age;
};

// ฟังก์ชันสำหรับรับข้อมูลของคน
void getPersonInfo(struct Person *person) {
    printf("Name: ");
    scanf("%s", person->name);
    printf("Age: ");
    scanf("%d", &person->age);
}

// ฟังก์ชันสำหรับแสดงข้อมูลของคน
void displayPersonInfo(struct Person person) {
    printf("Name: %s (%d)\n", person.name, person.age);
}

// ฟังก์ชันสำหรับสลับอายุของคน 2 คน
void swapAge(struct Person *person1, struct Person *person2) {
    int temp = person1->age;
    person1->age = person2->age;
    person2->age = temp;
}

int main() {
    struct Person personA, personB;

    // รับข้อมูลของคน 2 คน
    printf("Input A\n");
    getPersonInfo(&personA);

    printf("Input B\n");
    getPersonInfo(&personB);

    // แสดงผลข้อมูลของคน 2 คนก่อนสลับอายุ
    printf("\n** RESULT **\n");
    displayPersonInfo(personA);
    displayPersonInfo(personB);

    // สลับอายุของคน 2 คน
    swapAge(&personA, &personB);

    // แสดงผลข้อมูลหลังจากสลับอายุ
    printf("\n** SWAP AGE **\n");
    displayPersonInfo(personA);
    displayPersonInfo(personB);

    return 0;
}
