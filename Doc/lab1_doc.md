# Lab1: Basic C++ Programming
## Objectives
- เข้าใจประเภทของตัวแปรที่ใช้จัดเก็บข้อมูลและสามารถนำมาใช้ต่อยอดได้
- สามารถสร้างและดัดแปลงโปรแกรมที่มีเงื่อนไขในรูปแบบต่างๆได้
- สามารถสร้างและดัดแปลงโปรแกรมที่มีการวนซ้ำในรูปแบบต่างๆได้
## Pre-Lab
### Variable Types
การเก็บข้อมูลในตัวแปรต่างๆของการเขียนโปรแกรมจะถูกจัดเก็บอยู่ในระบบ binary data ที่จะแปลงสิ่งที่เราใส่เข้าไปให้กลายเป็นข้อมูลในระบบเลขฐาน 2 เช่น 5 จะกลายเป็น 101 เป็นต้น <br>
ซึ่งการประกาศตัวแปรสำหรับใช้งานใน C++ สามารถทำได้ด้วยการ
<center><img title="วิธีการประกาศตัวแปรใน C++" src="../Image/definingVar.png"><br>
วิธีการประกาศตัวแปรใน C++</center>

1. Int Variable <br>
   Int Variable เป็นตัวแปรพื้นฐานของ C++ ที่ใช้บรรจุข้อมูลที่เป็นจำนวนเต็มที่สามารถระบุค่าความเป็นบวกหรือลบของข้อมูลได้ด้วย bit ตัวแรกของ variables<br>
   <center><img title="วิธีการประกาศตัวแปรและค่า Int Variable" src="../Image/definingInt.png"><br>
   วิธีการประกาศตัวแปรและค่า Int Variable</center>
   <center><img title="ตัวอย่างข้อมูล Int Variable ก่อนกำหนดค่า" src="../Image/intVarUndefined.png"><br>
   ตัวอย่างข้อมูล Int Variable ก่อนกำหนดค่า</center>
   <center><img title="ตัวอย่างข้อมูล Int Variable หลังกำหนดค่า" src="../Image/intVarDefined.png"><br>
   ตัวอย่างข้อมูล Int Variable หลังกำหนดค่า</center><br>

2. Float Variable <br>
   Float Variable เป็นตัวแปรพื้นฐานของ C++ ที่ใช้บรรจุข้อมูลที่เป็นจำนวนจริงที่สามารถระบุค่าความเป็นบวกหรือลบของข้อมูลได้ด้วย bit ตัวแรกของ variables<br>
   <center><img title="วิธีการประกาศตัวแปรและค่า Float Variable" src="../Image/definingFloat.png"><br>
   วิธีการประกาศตัวแปรและค่า Float Variable</center>
   <center><img title="ตัวอย่างข้อมูล Float Variable ก่อนกำหนดค่า" src="../Image/floatVarUndefined.png"><br>
   ตัวอย่างข้อมูล Float Variable ก่อนกำหนดค่า</center>
   <center><img title="ตัวอย่างข้อมูล Float Variable หลังกำหนดค่า" src="../Image/floatVarDefined.png"><br>
   ตัวอย่างข้อมูล Float Variable หลังกำหนดค่า</center><br>

3. Double Variable <br>
   Double Variable เป็นตัวแปรพื้นฐานของ C++ ที่ใช้บรรจุข้อมูลได้แบบเดียวกับ Float Variable แต่สามารถจัดเก็บได้มากกว่า Float 2 เท่า<br>
   <center><img title="วิธีการประกาศตัวแปรและค่า Double Variable" src="../Image/definingDouble.png"><br>
   วิธีการประกาศตัวแปรและค่า Double Variable</center>
   <center><img title="ตัวอย่างข้อมูล Double Variable ก่อนกำหนดค่า" src="../Image/doubleVarUndefined.png"><br>
   ตัวอย่างข้อมูล Double Variable ก่อนกำหนดค่า</center>
   <center><img title="ตัวอย่างข้อมูล Double Variable หลังกำหนดค่า" src="../Image/doubleVarDefined.png"><br>
   ตัวอย่างข้อมูล Double Variable หลังกำหนดค่า</center><br>

4. Character Variable <br>
   Character Variable เป็นตัวแปรพื้นฐานของ C++ ที่ใช้บรรจุข้อมูลตัวอักษร โดยข้อมูลที่เราประกาศค่าให้กับตัวแปรจะสามารถอยู่ในรูปแบบของ ตัวอักษร หรือ รหัส ASCII ก็ได้<br>
   <center><img title="วิธีการประกาศตัวแปรและค่า Character Variable" src="../Image/definingChar.png"><br>
   วิธีการประกาศตัวแปรและค่า Character Variable</center>
   <center><img title="ตัวอย่างข้อมูล Character Variable ก่อนกำหนดค่า" src="../Image/charVarUndefined.png"><br>
   ตัวอย่างข้อมูล Character Variable ก่อนกำหนดค่า</center>
   <center><img title="ตัวอย่างข้อมูล Character Variable หลังกำหนดค่า" src="../Image/charVarDefined.png"><br>
   ตัวอย่างข้อมูล Character Variable หลังกำหนดค่า</center><br>

5. Boolean Variable <br>

6. Array <br>
   Array จะเป็น variable ที่ใช้เก็บข้อมูลเป็นกลุ่มอย่างโดยจะสร้างขึ้นจาก Variable พื้นฐาน เช่น Int Float Char เป็นต้น<br>

### Function
Function สำหรับ C++ จะมีรูปแบบการประกาศได้ 2 แบบหลักๆ คือ การประกาศแบบมีการ return ข้แมูลกลับสู่ global และไม่มีการ return<br>
การประกาศแบบไม่ return 

### Condition
 1. If-Else Condition <br>
    If-Else Condition เป็นวิธีการสร้างเงื่อนไขโดยใช้ตัวแปรที่ประกาศขึ้นมาแล้วเป็นตัวกำหนดเงื่อนไข <br>
    ซึ่งการสร้างเงื่อนไขโดยใช้ If-Else จะมีตัวเลือกในการสร้างเงื่อนไข 3 ตัวเลือกคือ
    <center>image</center>
    หลักการทำงานในการพิจารณาเงื่อนไขของ If-Else Condition นั้นจะ <u>พิจารณาตามลำดับของเงื่อนไข</u> ที่เราสร้างขึ้น ตัวอย่างเช่น
    <center>image</center>
    ทั้งนี้ผลลัพธ์ที่จะเกิดขึ้นจากเงื่อนไขนั้นจะ <u>ขึ้นอยู่กับค่าของตัวแปร</u> ที่เรากำหนดไว้ในเงื่อนไขนั้นๆ เช่น
    <center>image</center>
 2. Switch-Case Condition <br>
    Switch-Case Condition เป็นการสร้างเงื่อนไขโดยใช้ตัวแปรในลักษณะเดียวกันกับ If-Else Condition <u>แต่จะมีความแตกต่างในการสั่งการและการสร้างเงื่อนไข</u><br>
    - Switch-Case Condition จะทำการ <u>สั่งการโดยพิจารณาแบบเฉพาะเจาะจงไปที่เงื่อนไขที่มีรูปแบบนั้นทันที</u> ต่างจาก If-Else Condition ที่สั่งการเป็นลำดับก่อนหลัง
    - Switch-Case Condition จะสร้างเงื่อนไขโดยการเจาะจงค่าของตัวแปรที่เรากำหนดไว้โดยไม่ซ้ำกัน ตัวอย่างเช่น
    <center>image</center>

    
### Loop
1. For-Loop <br>
2. While-Loop <br>

## In-Lab
- สร้างโปรแกรมที่ช่วยให้พี่ปุ้นคำนวณค่าข้าวทั้งหมดใน 1 เดือน โดยพี่ปุ้นจะกินข้าวแพงขึ้น 1.2 เท่าจากวันล่าสุดที่กินข้าวหากเป็นวันคู่ และถูกลง 0.8 เท่าจากวันล่าสุดที่กินข้าวหากเป็นวันคี่่ และทุกๆวันที่ 15 พี่ปุ้นจะอดข้าวเพื่อเก็บเงินไว้กินกุ้งเผา<br>
( กำหนดให้ 1 เดือนมี 30 วัน เริ่มต้นจากวันที่ 1 )
## Post-Lab
เช็คงานกับพี่ๆ T.A. ในคลาส LAB หรือในช่วง Office Hour
