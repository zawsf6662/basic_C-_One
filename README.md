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

# การวิเคราะห์ความซับซ้อน (Complexity Analysis)

## Time Complexity — O(n)

โปรแกรมนี้มีลูปหลักสองลูปที่รันแบบต่อเนื่อง (sequential) ไม่ใช่ลูปซ้อนลูป (nested loop)

- **ลูปที่ 1 — อ่านค่าเข้าอาเรย์ `y`**
  วนซ้ำ `n` รอบ แต่ละรอบอ่านค่าหนึ่งตัวด้วย `scanf` ซึ่งทำงานคงที่ไม่ขึ้นกับขนาด `n` (O(1) ต่อรอบ) รวมเป็น **O(n)**

- **ลูปที่ 2 — พิมพ์ค่าออกจากอาเรย์ `y`**
  วนซ้ำ `n` รอบเช่นกัน แต่ละรอบพิมพ์ค่าหนึ่งตัว (O(1) ต่อรอบ) รวมเป็น **O(n)**

เมื่อนำสองลูปนี้มารวมกัน (ต่อเนื่องกัน ไม่ใช่ซ้อนกัน) จะได้:

```
O(n) + O(n) = O(2n)
```

ใน Big-O Notation เราตัดค่าคงที่ทิ้ง จึงเหลือเพียง:

```
Time Complexity = O(n)
```

นี่คือ **linear time** เพราะเวลาทำงานของโปรแกรมแปรผันตรงกับจำนวนสมาชิกในอาเรย์ — ถ้า `n` เพิ่มขึ้นเป็นสองเท่า เวลาทำงานก็เพิ่มขึ้นเป็นสองเท่าตามไปด้วย

## Space Complexity — O(n)

อาเรย์ `y` ต้องใช้พื้นที่หน่วยความจำตามขนาด `n` จึงมี:

```
Space Complexity = O(n)
```

(ไม่นับพื้นที่คงที่ของตัวแปร `n` และ `i` ซึ่งใช้พื้นที่แบบ O(1) เพราะไม่ขึ้นกับขนาดของข้อมูล)

## สรุป

| ด้าน | ความซับซ้อน |
|---|---|
| Time Complexity | O(n) |
| Space Complexity | O(n) |
