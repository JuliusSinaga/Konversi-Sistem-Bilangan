# Konversi Sistem Bilangan

Pada program ini, kita melakukan input untuk bilangan bulat dan melakukan konversi ke sistem bilangan heksadesimal, okta atau binary menggunakan bahasa C. Program ini juga digunakan untuk membantu mempercepat proses pencarian bilangan heksadesimal, oktal, atau binary. Range bilangan yang akan input yaitu (-9223372036854775808 <= Bilangan <= 9223372036854775807) dengan tipe data long long. Setelah kita diminta untuk menginput bilangan desimal, kita diminta untuk mengetikkan satu karakter yang mewakili ke sistem bilangan yang akan dikonversi. 


## Konversi Desimal ke Binary
Dalam mengkonversi nilai desimal ke binary menggunakan bahasa c, kita dapat menggunakan fungsi ---- untuk melakukan konversi desimal ke binary(basis 2). Sebagai contoh :
**Input**:
```bash
Bilangan Desimal : 25
Ketik B untuk konversi ke binary
Ketik H untuk konversi ke heksadesimal
Ketik O untuk konversi ke oktal
B
```

**Output**:
```bash
Dalam sistem bilangan Binary : 11001
```

## Konversi Desimal ke Heksadesimal
Dalam mengkonversi nilai desimal ke heksadesimal menggunakan bahasa c, kita dapat menggunakan format "%x"(untuk tipe data integer) atau "%llx"(untuk tipe data long long) untuk melakukan konversi desimal ke heksadesimal(basis 16). Sebagai contoh :
**Input**:
```bash
Bilangan Desimal : 2000000
Ketik B untuk konversi ke binary
Ketik H untuk konversi ke heksadesimal
Ketik O untuk konversi ke oktal
H
```

**Output**:
```bash
Dalam sistem bilangan Heksadesimal : 1e8480
```

## Konversi Desimal ke Oktal
Dalam mengkonversi nilai desimal ke oktal menggunakan bahasa c, kita dapat menggunakan format "%o"(untuk tipe data integer) atau "%llo"(untuk tipe data long long) untuk melakukan konversi desimal ke oktal(basis 8). Sebagai contoh :

**Input**:
```bash
Bilangan Desimal : 100
Ketik B untuk konversi ke binary
Ketik H untuk konversi ke heksadesimal
Ketik O untuk konversi ke oktal
O
```

**Output**:
```bash
Dalam sistem bilangan Oktal : 144
```