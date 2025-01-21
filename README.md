### README.md

# Havaalanı Yönetim Sistemi (HYS)

Bu proje, basit bir **Havaalanı Yönetim Sistemi (HYS)** uygulamasıdır. Kullanıcı dostu bir menü arayüzü ile havaalanı bilgilerini görüntüleyebilir, iniş ve kalkış yapan uçak duyuruları yapabilir ve ekstra duyurular ekleyebilirsiniz. Kod, tamamen C dilinde yazılmıştır.

---

## Özellikler
1. **Havaalanı Bilgilerini Görüntüleme**  
   Havaalanı ile ilgili genel bilgileri görüntüleyebilirsiniz.

2. **İniş Yapan Uçak Duyuruları**  
   İniş yapan uçakların isimlerini duyurabilirsiniz.

3. **Kalkış Yapan Uçak Duyuruları**  
   Kalkış yapan uçakların isimlerini duyurabilirsiniz.

4. **Ekstra Duyurular**  
   İstediğiniz duyuruyu metin olarak ekleyebilirsiniz.

5. **Çıkış**  
   Programdan güvenli bir şekilde çıkabilirsiniz.

---

## Kullanım

### Adım 1: Programı Derleme
Programı çalıştırmadan önce bir C derleyicisi (örneğin `gcc`) kullanarak derleyin:
```bash
gcc -o hys hys.c
```

### Adım 2: Programı Çalıştırma
Derleme işleminden sonra programı çalıştırmak için:
```bash
./hys
```

### Adım 3: Kullanıcı Adını Girme
Program başladığında sizden bir **kullanıcı adı** girmeniz istenecektir. Bu ad, komut satırı arayüzünde gösterilecektir.

### Adım 4: Menü Kullanımı
Ana menüden aşağıdaki işlemleri seçebilirsiniz:
- **1:** Havaalanı bilgilerini görüntülemek için.
- **2:** İniş yapan uçakları duyurmak için.
- **3:** Kalkış yapan uçakları duyurmak için.
- **4:** Ekstra duyurular eklemek için.
- **5:** Programdan çıkmak için.

Menüden seçim yaptıktan sonra istenilen bilgileri girip işlem yapabilirsiniz.

---

## Fonksiyonlar

### `bilgiShow()`
- Havaalanı bilgilerini ekranda görüntüler.
- Kullanıcıdan devam etmek için bir giriş bekler.

### `inisShow()`
- İniş yapan uçakların isimlerini girmeyi sağlar ve ekrana duyurur.
- Kullanıcıdan devam etmek için bir giriş bekler.

### `kalkisShow()`
- Kalkış yapan uçakların isimlerini girmeyi sağlar ve ekrana duyurur.
- Kullanıcıdan devam etmek için bir giriş bekler.

### `ekstraShow()`
- İstediğiniz herhangi bir duyuruyu metin olarak eklemeyi sağlar.
- **fgets** kullanılarak bir satır duyuru alınır ve ekrana yazdırılır.

### `main()`
- Programın ana menüsünü içerir ve kullanıcıyı yönlendirir.
- Kullanıcı seçimlerine göre ilgili işlemleri çalıştırır.

---

## Örnek Kullanım

### Giriş
```
Kullanici Adi : user
Hava Alani Yonetim Sistemine
Hosgeldiniz!
Lutfen yapmak istediginiz islemi seciniz:
1. Havaalani Bilgilerini Goster
2. Inis Yapan Usak Duyurusu
3. Kalkis Yapan Usak Duyurusu
4. Ekstra Duyurular
5. Cikis
HYS@user:/#
```

### Havaalanı Bilgisi
```
Havaalani Bilgileri
Havaalani Adi: Ataturk Havalimani
Havaalani Sehri: Istanbul
Havaalani Ulkesi: Turkiye
Havaalani Kapasitesi: 1000
Havaalani Yuksekligi: 1000
Havaalani Genisligi: 1000
Havaalani Uzunlugu: 1000

Devam etmek icin 0'a basiniz
HYS@user:~/HBG$
```

### Çıkış
```
HYS@user:/# 5
Cikis
```

---

## Notlar
- Kullanıcı adı, komut satırı arayüzünde bir etiket olarak kullanılmaktadır.
- Kullanıcı dostu bir arayüz sağlamak için giriş ve çıktı formatlarına özen gösterilmiştir.
- **Ekstra duyuru** fonksiyonu, duyuruları bir satır halinde alır ve ekrana yazdırır.
- **Geliştirici:** ZekaNet Labs

---

## Gereksinimler
- GCC veya herhangi bir C derleyici
- Windows, Linux veya macOS üzerinde çalıştırılabilir.

---
