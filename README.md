## โค้ดฉบับสมบูรณ์

```bash
#include <stdio.h>

int main() {
    int n;
    printf("N>2: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("ต้องมากกว่า 2 นะ\n");
        return 1;
    }

    int y[100];

    printf("กรอกตัวเลข %d ตัว (เว้นวรรคได้เลย): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    printf("y = ");
    for (int i = 0; i < n; i++) {
        printf("%d", y[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
```

##  Pseudo code

```bash
BEGIN
    READ n

    IF n < 2 THEN
        PRINT "ต้องมากกว่า 2 นะ"
        EXIT
    END IF

    FOR i = 0 TO n-1
        READ y[i]
    END FOR

    FOR i = 0 TO n-1
        PRINT y[i]
        IF i < n-1 THEN
            PRINT ", "
        END IF
    END FOR
END
```

## วิเคราะห์ความซับซ้อนทางเวลา

โปรแกรมนี้มีสองลูปหลักที่รันแยกกัน ไม่ใช่ลูปซ้อนลูป ลูปแรกใช้สำหรับอ่านค่า n ตัวเข้าอาเรย์ y ซึ่งใช้เวลา O(n) เพราะแต่ละรอบทำงาน O(1) (การอ่านค่าหนึ่งตัวด้วย scanf ไม่ขึ้นกับขนาด n) ลูปที่สองใช้สำหรับพิมพ์ค่า n ตัวออกมา ก็ใช้เวลา O(n) ด้วยเหตุผลเดียวกัน เมื่อนำสองลูปนี้มารวมกัน (sequential ไม่ใช่ nested) ความซับซ้อนรวมจึงเป็น O(n) + O(n) = O(n)
ดังนั้น O(n) เป็นแบบ linear time เพราะเวลาทำงานแปรผันตรงกับจำนวนสมาชิกในอาเรย์
Space Complexity:
อาเรย์ y ต้องใช้พื้นที่เก็บข้อมูลตามขนาด n จึงมี Space Complexity = O(n) เช่นกัน (ไม่นับพื้นที่คงที่ของตัวแปร n และ i ซึ่งเป็น O(1))
