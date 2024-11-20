#include <stdio.h>

int main() {
	//Bai tap 1
    // Kieu du lieu int: Dung de luu tru cac gia tri so nguyen (int)
    int a = 10; // Khai bao va khoi tao mot bien a kieu int voi gia tri 10

    // Kieu du lieu float: Dung de luu tru cac gia tri so thuc co dau voi do chinh xac vua phai
    float b = 3.14; // Khai bao va khoi tao mot bien b kieu float voi gia tri 3.14

    // Kieu du lieu double: Dung de luu tru cac gia tri so thuc co dau voi do chinh xac cao hon float
    double c = 3.1415926535; // Khai bao va khoi tao mot bien c kieu double voi gia tri Pi chinh xac hon

    // Kieu du lieu char: Dung de luu tru mot ky tu (1 byte)
    char d = 'A'; // Khai bao va khoi tao mot bien d kieu char voi gia tri 'A'

    // Kieu du lieu long: Dung de luu tru cac so nguyen dai (thuong co do dai 4 byte hoac 8 byte tuy vao he dieu hanh)
    long e = 1234567890L; // Khai bao va khoi tao mot bien e kieu long voi gia tri 1234567890

    // In ra cac gia tri cua cac bien da khai bao
    printf("a = %d\n", a);       // In ra gia tri cua bien a
    printf("b = %.2f\n", b);     // In ra gia tri cua bien b
    printf("c = %.10f\n", c);    // In ra gia tri cua bien c
    printf("d = %c\n", d);       // In ra gia tri cua bien d
    printf("e = %ld\n", e);      // In ra gia tri cua bien e

 return 0;
}
