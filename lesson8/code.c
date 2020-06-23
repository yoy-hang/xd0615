/*

阅读模拟电压

在引脚0上读取模拟输入，将其转换为电压，并打印结果到串行监视器。

打开串行监视器，查看输出>>

将电位器的中心引脚连接到引脚A0上，将外部引脚连接到+5V和地面上。

此示例代码位于公共域。

*/


// 当按下reset时，设置程序运行一次:
void setup() {
  // 初始化串行通信为每秒9600位:
  Serial.begin(9600);
}

// loop代码块会一直循环运行:
void loop() {
  // 读取模拟引脚0上的输入:
  int sensorValue = analogRead(A0);
  // 将模拟读数(0 - 1023)转换为电压(0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // 打印出读取的值:
  Serial.println(voltage);
}