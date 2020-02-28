# esp8266-lcd-i2c
Contoh penggunaan lcd i2c esp8266 amica

## Perangkat yang dibutuhkan
+ esp8266 amica
+ LCD 16x2
+ i2c
+ kabel jumpter male to female 4 buah
+ Library LCD dapat diunduh di [https://github.com/johnrickman/LiquidCrystal_I2C.git](https://github.com/johnrickman/LiquidCrystal_I2C.git)

Untuk lebih detail pemasangan kabel dapat dilihat pada gambar di bawah

![](esp8266-lcd-i2c.png)

Sementara jika ingin mengunduh format fritzing dapat diunduh di [esp8266-lcd-i2c.fzz](esp8266-lcd-i2c.fzz)

## Tabel skematik
Untuk lebih jelaskan dapat dilihat pada tabel di bawah ini
| ESP8266 Amica | LCD I2C                            |
|---------------|------------------------------------|
| Vin           | GND                                |
| GND           | Hijau                              |
| D1            | SCL                                |
| D2            | SDA                                |