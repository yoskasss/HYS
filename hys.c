#include <stdio.h>
#include <string.h>


int secim;
char kullaniciAdi[20];

int bilgiShow() {
    printf("Havaalani Bilgileri\n");
    printf("Havaalani Adi: Ataturk Havalimani\n");
    printf("Havaalani Sehri: Istanbul\n");
    printf("Havaalani Ulkesi: Turkiye\n");
    printf("Havaalani Kapasitesi: 1000\n");
    printf("Havaalani YUksekligi: 1000\n");
    printf("Havaalani Genisligi: 1000\n");
    printf("Havaalani Uzunlugu: 1000\n");
    int gec0;
    printf("\n\nDevam etmek icin 0'a basiniz\n\nHYS@%s:~/HBG$  ", kullaniciAdi);
    scanf("%d", &gec0);

    return 0;
}

int inisShow() {
    char inisUcakAdi[20];
    printf("Inis Yapan Ucak Duyurusu\n");
    printf("Inis Yapan Ucak Adi Giriniz\n");
    printf("HYS@%s:~/IYUD$ ", kullaniciAdi);
    scanf("%s", inisUcakAdi);
    printf("Inis Yapan Ucak Adi: %s\n", inisUcakAdi);
    int gec2;
    printf("\n\nDevam etmek icin 0'a basiniz\n\nHYS@%s:~/IYUD$  ", kullaniciAdi);
    scanf("%d", &gec2);
    return 0;
}

int kalkisShow() {
    char kalkisUcakAdi[20];
    printf("Kalkis Yapan Ucak Duyurusu\n");
    printf("Kalkis Yapan Ucak Adi Giriniz\n");
    printf("HYS@%s:~/KYUD$ ", kullaniciAdi);
    scanf("%s", kalkisUcakAdi);
    printf("Kalkis Yapan Ucak Adi: %s\n", kalkisUcakAdi);
    int gec3;
    printf("\n\nDevam etmek icin 0'a basiniz\n\nHYS@%s:~/KYUD$  ", kullaniciAdi);
    scanf("%d", &gec3);
    return 0;
}

int ekstraShow() {
    char ekstraDuyuru[100];
    printf("Ekstra Duyuru Giriniz\n");
    printf("HYS@%s:~/ED$ ", kullaniciAdi);

    // Kullanıcıdan bir satır giriş alın
    fgets(ekstraDuyuru, sizeof(ekstraDuyuru), stdin);

    // Satır sonu karakterini kaldır
    size_t len = strlen(ekstraDuyuru);
    if (len > 0 && ekstraDuyuru[len - 1] == '\n') {
        ekstraDuyuru[len - 1] = '\0';
    }

    printf("Ekstra Duyuru: %s\n", ekstraDuyuru);

    int gec4;
    printf("\n\nDevam etmek icin 0'a basiniz\n\nHYS@%s:~/ED$  ", kullaniciAdi);
    scanf("%d", &gec4);
    return 0;
}

int main() {
    printf("Kullanici Adi : ");
    scanf("%s", kullaniciAdi);

    while (secim != 5)
    {
        printf("Hava Alani Yonetim Sistemine\nHosgeldiniz!\n");
        printf("Lutfen yapmak istediginiz islemi seciniz:\n");
        printf("1. Havaalani Bilgilerini Goster\n");
        printf("2. Inis Yapan Usak Duyurusu\n");
        printf("3. Kalkis Yapan Usak Duyurusu\n");
        printf("4. Ekstra Duyurular\n");
        printf("5. Cikis\n");
        printf("HYS@%s:/#  ", kullaniciAdi);
        
        scanf("%d", &secim);
        switch (secim) {
            case 1:
                bilgiShow();
                break;
            case 2:
                inisShow();
                break;
            case 3:
                kalkisShow();
                break;
            case 4:
                ekstraShow();
                break;
            case 5:
                printf("Cikis\n");
                break;
            default:
                printf("Hatali secim yaptiniz!\n");
                break;
        }
    }
    
    


    return 0;
}
