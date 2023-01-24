# Lab1: Basic C++ Programming
## Objectives
- เข้าใจประเภทของตัวแปรที่ใช้จัดเก็บข้อมูลและสามารถนำมาใช้ต่อยอดได้
- สามารถประยุกต์ใช้โปรแกรมที่มีเงื่อนไขในรูปแบบต่างๆได้
- สามารถประยุกต์ใช้โปรแกรมที่มีการวนซ้ำในรูปแบบต่างๆได้
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
   Character Variable เป็นตัวแปรพื้นฐานของ C++ ที่ใช้บรรจุข้อมูลตัวอักษร โดยข้อมูลที่เราประกาศค่าให้กับตัวแปรจะสามารถอยู่ในรูปแบบของ ตัวอักษร หรือ รหัส ASCII ก็ได้<br>
   <center><img title="วิธีการประกาศตัวแปรและค่า Boolean Variable" src="../Image/definingBool.png"><br>
   วิธีการประกาศตัวแปรและค่า Boolean Variable</center>
   <center><img title="ตัวอย่างข้อมูล Boolean Variable ก่อนกำหนดค่า" src="../Image/boolVarUndefined.png"><br>
   ตัวอย่างข้อมูล Boolean Variable ก่อนกำหนดค่า</center>
   <center><img title="ตัวอย่างข้อมูล Boolean Variable หลังกำหนดค่า" src="../Image/boolVarDefined.png"><br>
   ตัวอย่างข้อมูล Boolean Variable หลังกำหนดค่า</center><br>

6. Array <br>
   Array จะเป็น variable ที่ใช้เก็บข้อมูลเป็นกลุ่มอย่างโดยจะสร้างขึ้นจาก Variable พื้นฐาน เช่น Int Float Char เป็นต้น<br>
   <center><img title="วิธีการประกาศตัวแปรและค่า Array of character" src="../Image/charArrDefining.png"><br>
   วิธีการประกาศตัวแปรและค่า Array of characters</center>
   <center><img title="ขนาดและความยาวของ Array of character" src="../Image/charArrData.png"><br>
   ขนาดและความยาวของ Array of characters</center>
   จากขนาดและความยาวที่แตกต่างกันในกรณีพิเศษของ Array of characters จะมีการเก็บ '\0' ไว้เป็นตัวสุดท้ายเสมอเพื่อบอกตำแหน่งการสิ้นสุดของข้อมูลที่จัดเก็บอยู่<br>
   <center><img title="วิธีการประกาศตัวแปรและค่า Array of int" src="../Image/intArrDefining.png"><br>
   วิธีการประกาศตัวแปรและค่า Array of characters</center>
   <center><img title="ขนาดและความยาวของ Array of int" src="../Image/intArrData.png"></center><br>
   จากทั้ง 2 ตัวอย่างขนาดของข้อมูลของ Array จะขึ้นอยู่กับชนิดของ Variable ที่ใช่ในการสร้างและจำนวนข้อมูลที่เก็บอยู่<br>
   ** ข้อกำหนดสำคัญของ Array **<br>
   - Array ไม่สามารถเปลี่ยนแปลงขนาดใหม่หลังจากประกาศแล้วได้อีก <br>
   - Array ไม่สามารถเปลี่ยนแปลงข้อมูลทั้งหมดทีเดียวได้ <br>

### Condition
 1. If-Else Condition <br>
    If-Else Condition เป็นวิธีการสร้างเงื่อนไขโดยใช้ตัวแปรที่ประกาศขึ้นมาแล้วเป็นตัวกำหนดเงื่อนไข <br>
    ซึ่งการสร้างเงื่อนไขโดยใช้ If-Else จะมีตัวเลือกในการสร้างเงื่อนไข 3 ตัวเลือกคือ<br>
    <center><img title="ตัวเลือกในการสร้างเงื่อนไข" src="../Image/typeofIfelse.png"><br>ตัวเลือกในการสร้างเงื่อนไข<br></center>
    หลักการทำงานในการพิจารณาเงื่อนไขของ If-Else Condition นั้นจะ <u>พิจารณาตามลำดับของเงื่อนไข</u> ที่เราสร้างขึ้น<br>
    ทั้งนี้ผลลัพธ์ที่จะเกิดขึ้นจากเงื่อนไขนั้นจะ <u>ขึ้นอยู่กับค่าของตัวแปร</u> ที่เรากำหนดไว้ในเงื่อนไขนั้นๆ เช่น
    <center><img title="ตัวแปรที่ใช้กำหนดเงื่อนไข" src="../Image/conditionVar.png"><br>ตัวแปรที่ใช้กำหนดเงื่อนไข<br></center>
    <center><img title="ผลลัพธ์จากโปรแกรมที่ได้สร้างเงื่อนไขและตัวแปรตามรูปข้างต้น" src="../Image/conditionResult.png"><br>ผลลัพธ์จากโปรแกรมที่ได้สร้างเงื่อนไขและตัวแปรตามรูปข้างต้น</center>
 2. Switch-Case Condition<br>
    Switch-Case Condition เป็นการสร้างเงื่อนไขโดยใช้ตัวแปรในลักษณะเดียวกันกับ If-Else Condition <u>แต่จะมีความแตกต่างในการสั่งการและการสร้างเงื่อนไข</u><br>
    - Switch-Case Condition จะทำการ <u>สั่งการโดยพิจารณาแบบเฉพาะเจาะจงไปที่เงื่อนไขที่มีรูปแบบนั้นทันที</u> ต่างจาก If-Else Condition ที่สั่งการเป็นลำดับก่อนหลัง
    - Switch-Case Condition จะสร้างเงื่อนไขโดยการเจาะจงค่าของตัวแปรที่เรากำหนดไว้โดยไม่ซ้ำกัน
    <center><img title="ตัวแปรที่ใช้ในการกำหนดเงื่อนไข" src="../Image/conditionVar2.png"><br>ตัวแปรที่ใช้ในการกำหนดเงื่อนไข<br></center>
    <center><img title="วิธีการสร้างเงื่อนไขด้วย Switch-Case" src="../Image/createSwitchCase.png"><br>วิธีการสร้างเงื่อนไขด้วย Switch-Case<br></center>
    <center><img title="ผลลัพธ์จากโปรแกรมที่ได้สร้างเงื่อนไขและตัวแปรตามรูปข้างต้น" src="../Image/conditionResult2.png"><br>ผลลัพธ์จากโปรแกรมที่ได้สร้างเงื่อนไขและตัวแปรตามรูปข้างต้น</center>

    
### Loop
โปรแกรมในการวนซ้ำเป็นโปรแกรมที่ใช้ลักษณะการสร้างเง่ือนไขมาเป็นข้อกำหนดในการทำงานและหยุดทำงานการวนซ้ำซึ่งจะมีอยู่ 3 วิธีการหลัก
1. While-Loop <br>
   While-Loop เป็นการสร้างการวนซ้ำจากเงื่อนไขที่กำหนดไว้ในคำสั่ง while() เพื่อจะควบคุมการทำงาน <br>
   โดยจะทำการเริ่มทำงานหรือวนซ้ำเมื่อเงื่อนไขถูกต้องและหยุดการทำงานเมื่อเงื่อนไขผิด
2. Do While-Loop <br>
   Do While-Loop จะมีลักษณะการสร้างเงื่อนไขเพื่อควบคุมการทำงานเหมือน While-Loop <br>
   แต่จะแตกต่างกันที่ Do While-Loop จะเริ่มทำงานทันทีโดยไม่สนใจเงื่อนไข แล้วค่อยเริ่มตรวจเงื่อนไขในการวนซ้ำครั้งต่อไป <br>
3. For-Loop <br>
   For-Loop มีลักษณะการควบคุมการทำงานด้วยเงื่อนไขเหมือน While-loop <br>
   แต่จะมีความแตกต่างกันในการกำหนดขอบเขตการวนซ้ำโดยจะมีการสร้างตัวแปรเพิ่มเติมขึ้นมาที่ใช้ในการวนซ้ำของ For-Loop ภายใน for() <br>
    <center><img title="การสร้าง For-Loop" src="../Image/createForLoop.png"><br>การสร้าง For-Loop<br></center>
    <center><img title="ผลลัพธ์จาก For-Loop ข้างต้น" src="../Image/resultForLoop.png"><br>ผลลัพธ์จาก For-Loop ข้างต้น</center>

## In-Lab
- สร้างโปรแกรมที่ช่วยให้พี่ปุ้นคำนวณค่าข้าวทั้งหมดใน 1 เดือน โดยพี่ปุ้นจะกินข้าวแพงขึ้น 1.2 เท่าจากวันล่าสุดที่กินข้าวหากเป็นวันคู่ และถูกลง 0.8 เท่าจากวันล่าสุดที่กินข้าวหากเป็นวันคี่่ และทุกๆวันที่ 15 พี่ปุ้นจะอดข้าวเพื่อเก็บเงินไว้กินกุ้งเผา<br>
กำหนดให้ 
   - 1 เดือนมี 30 วัน 
   - เริ่มต้นวันจากวันที่ 1
- สร้างโปรแกรมช่วยพี่เนคำนวณตำแหน่งปลายทางของการเดินใน 2 มิติ โดยจะรับค่าคำสั่งเป็น Array : [1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4]<br>
กำหนดให้
   - เริ่มต้นที่ตำแหน่งแกน x = 0, y = 0 
   - 1 คือคำสั่งเดินไปข้างหน้า 1 หน่วย
   - 2 คือคำสั่งเดินไปทางซ้าย 1 หน่วย
   - 3 คือคำสั่งเดินไปข้างหลัง 1 หน่วย
   - 4 คือคำสั่งเดินไปทางขวา 1 หน่วย
   - หากพี่เนกลับมาที่ตำแหน่งเริ่มต้น พี่เนจะวาร์ปไปยังตำแหน่งแกน x = 1, y = 1

## Post-Lab
ตรวจ Exercise ใน In-Lab กับพี่ๆ T.A.