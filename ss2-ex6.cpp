#include <stdio.h> 

// khai bao hang so PI kieu float
    const float PI = 3.14;  // hang so PI co gia tri 3.14
    
    // khai bao bien ban kinh hinh tron
    int radius = 5;  // ban kinh hinh tron, gia tri 5

    // khai bao bien de luu chu vi va dien tich
    float circumference_tron, area_tron;

    // tinh chu vi hinh tron, chu vi = 2 * PI * ban kinh
    circumference_tron = 2 * PI * radius;

    // tinh dien tich hinh tron, dien tich = PI * ban kinh * ban kinh
    area_tron = PI * radius * radius;

    // in ket qua ra man hinh
    printf("Chu vi hinh tron la: %2f\n", circumference_tron);
    printf("Dien tich hinh tron la: %2f\n", area_tron);
    
    return 0;
}
