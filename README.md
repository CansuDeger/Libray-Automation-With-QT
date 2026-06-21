# 📚 Kütüphane Otomasyon Sistemi

Qt/C++ ve SQL ile geliştirilmiş, masaüstü tabanlı bir **kütüphane yönetim sistemi**. Üye kaydı, kitap takibi, ödünç alma ve teslim süreçlerini tek bir arayüzden yönetmenizi sağlar.

## ✨ Özellikler

### 👥 Üye Yönetimi
- Yeni üye kaydı oluşturma (ad, soyad)
- Üye bilgilerini güncelleme
- Üye silme — **ödünç kaydı açık olan üyeler silinemez**, sistem otomatik kontrol eder

### 📖 Kitap Yönetimi
- Kitap ekleme, güncelleme ve silme
- Anlık stok takibi (`kitap_sayisi`)
- Her kitabın **güncel ödünç durumu** ve **geçmiş teslim kayıtları** tek tıkla görüntülenir
- Stokta teslim edilmemiş kaydı bulunan kitaplar silinemez

### 🔄 Ödünç Alma
- Üye ve kitap listesinden seçim yaparak hızlı ödünç işlemi
- **Aynı kitabın aynı kişi tarafından mükerrer ödünç alınmasını engelleme**
- Stokta kitap kalmadıysa işlem otomatik reddedilir
- Ödünç alındığında stok adedi otomatik 1 azaltılır

### ✅ Teslim İşlemleri
- Ödünç tarihine göre **otomatik gecikme/borç hesaplama**
  - 15 günlük serbest süre
  - Süre aşımında her gün için **4 TL** gecikme bedeli
- Teslim alınan kitap stoğu otomatik 1 artırılır
- Geçmiş tüm teslimler ayrı bir tabloda saklanır

## 🛠️ Teknoloji Yığını

| Katman | Teknoloji |
|---|---|
| Arayüz | Qt Widgets (C++17) |
| Veritabanı Erişimi | Qt SQL Module (`QSqlDatabase`, `QSqlQuery`, `QSqlQueryModel`) |
| Derleme Sistemi | qmake (`.pro`) |

## 📁 Proje Yapısı

```
├── main.cpp / mainwindow.*     # Uygulama giriş noktası ve ana pencere
├── uyeler.*                    # Üye yönetimi modülü
├── kitapp.*                    # Kitap yönetimi modülü
├── odunc_alma.*                # Ödünç alma işlemleri
├── teslim.*                    # Teslim ve borç hesaplama işlemleri
├── kitaplar.*                  # Kitap listeleme dialog'u
├── Resources.qrc               # Uygulama kaynak dosyaları (ikonlar vb.)
└── Final_odev.pro              # Qt proje dosyası
```

## 🗄️ Veritabanı Şeması

Proje aşağıdaki tabloları kullanır (SQL şeması yaklaşık olarak):

```sql
CREATE TABLE uyeler (
    uye_no    INTEGER PRIMARY KEY AUTOINCREMENT,
    uye_ad    TEXT,
    uye_soyad TEXT
);

CREATE TABLE kitaplar (
    kitap_no      INTEGER PRIMARY KEY AUTOINCREMENT,
    kitap_ad      TEXT,
    kitap_sayisi  INTEGER
);

CREATE TABLE odunc (
    uye_no             INTEGER,
    kitap_no           INTEGER,
    odunc_alma_tarihi  TEXT
);

CREATE TABLE teslim (
    uye_no         INTEGER,
    kitap_no       INTEGER,
    alma_tarihi    TEXT,
    verme_tarihi   TEXT,
    borc           INTEGER
);
```

> Not: Tarihler `dd/MM/yyyy` formatında metin olarak saklanır.

## 🚀 Kurulum

1. [Qt](https://www.qt.io/download) (Qt Creator önerilir, Qt 5.12+ veya Qt 6) kurulu olmalı
2. Repoyu klonlayın:
   ```bash
   git clone https://github.com/kullanici-adi/kutuphane-otomasyon.git
   ```
3. `Final_odev.pro` dosyasını Qt Creator ile açın
4. Veritabanı bağlantı ayarlarını kendi ortamınıza göre düzenleyin
5. Projeyi derleyip çalıştırın (`Ctrl+R`)

## 🖥️ Kullanım

Uygulama açıldığında ana pencereden:
- **Üyeler** ekranına geçerek yeni üye ekleyebilir veya mevcut üyeleri yönetebilirsiniz
- **Kitaplar** ekranından kitap envanterini güncelleyebilirsiniz
- **Ödünç Alma** ekranından üye ve kitap seçerek ödünç işlemi başlatabilirsiniz
- **Teslim** ekranından kitabı teslim alıp varsa gecikme borcunu görüntüleyebilirsiniz

## 📌 Notlar

- Bu proje bir ders ödevi kapsamında geliştirilmiştir
- Tüm form doğrulamaları (`QMessageBox`) zorunlu alan kontrolü ve veri bütünlüğü kuralları içerir

---

**Geliştirici:** Cennet Cansu Değer
