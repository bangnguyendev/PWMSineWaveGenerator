float x = 0;

float y = 0;

const float pi = 3.1415926;

int z = 0;

float v = 0;

int w = 0;

void setup() {

  Serial.begin(9600);

}


void loop() {

  if (w == 0) {

    v = x * pi / 180; // tạo góc radian

    y = sin(v); // tính toán vị trí trục tung

    z = y * 250; // tính toán duty cycle(250 not 255 because will help to turn off transistors)

    delay(1000);

    x = x + 0.5737; // tạo góc tiếp tục

  }

  if (x > 90) { //dừng lại, chỉ tính nhỏ hơn 90 độ, còn bên nữa còn lại lấy đối xứng

    x = 0;

    w == 1;

  }

  Serial.println(z);// xuất ra màn hình chạy từ 0 đến 90 độ

}
