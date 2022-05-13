# 42 İstanbul Libft Projesi!

Merhaba! ben **Tarık Yıldırım**. Ve karşınızda ana eğitimdeki ilk projem. Libft projesini kısaca özetleyeyim. Projenin zorunlu kısmında havuz sürecinde işlediğimiz projelerimizin genel bir tekrarını yapıyoruz. Bonus kısmında ise yeni bir şey öğreniyoruz ve "Linked List" yapısını işliyoruz.

# Proje Dosyaları

Projemiz toplamda **44** adet dosyadan oluşmaktadır.

|                |Açıklama                          |Dosya Uzantısı                         |
|----------------|-------------------------------|-----------------------------|
|C Dosyaları|`Fonksiyonları içeren dosyalar`            |".c" uzantılı dosyalar            |
|Makefile          |`Projeyi derleyen komut dosyası `            |Uzantı bulunamadı!            |
|Kütüphane          |`Projenin kütüphane dosyası`|".h" uzantılı dosyalar|

## Hesaplarımı Takip Edebilirsiniz

TikTok Hesabım: [tarikyilds](https://www.tiktok.com/@tarikyilds) => 100K takipçili resmi hesabım.
Instagram: [tarikyilds](https://www.instagram.com/tarikyilds/) | Gmail adresim: [tarikyilds@gmail.com](tarikyilds@gmail.com)

## Kısa Açıklamalar...

 - ***ft_isdigit***
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin rakam olup olmadığı kontrol edilir.
	 - Ascii tablosunda rakamlar decimal değere göre 48 - 57 arasındadır.
	 - Dönüş değeri bulunan rakamın ascii decimal karşılığıdır.
	 - **c** değişkeni rakam değilse **0** döner.

 - ***ft_isalpha***
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin harf olup olmadığı kontrol edilir.
	 - Ascii tablosunda harfler decimal değere göre 65-90 (büyük harfler) ve 97-122 (küçük harfler) arasındadır.
	 -  Dönüş değeri bulunan harfin ascii decimal karşılığıdır.
	 - **c** değişkeni harf değilse **0** döner.

 - ***ft_isalnum***
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin harf veya rakam olup olmadığı kontrol edilir.
	 - Ascii tablosunda decimal aralıkları sırayla; 48-57, 65-90 ve 97-122'dir.
	 - Dönüş değeri bulunan karakterin decimal karşılığıdır.
	 - **c** değişkeni harf veya rakam değilse **0** döner

- ***ft_isascii***
	- Ascii tablosunda decimal değere göre 0-127 arası karakterler main ascii karakterleri olarak kabul edilir. 
	- 128-255 arası karakterler ise **extended ascii** karakterleri olarak geçer.
	- Fonksiyon parametresinde int tipinde c değişkeni alır.
	- **c** değişkeninin ascii decimal karşılığının 0-127 aralığında olup olmadığı kontrol edilir.
	- Dönüş değeri, kontrol işlemi doğru ise **1** değil ise **0** olarak belirlenir.
	
- ***ft_isprint***
	- Ascii tablosunda decimal değere göre 32-126 arası karakterler **printable** karakterlerdir.
	- Yine decimal değere göre 0-31 arası karakterler ve 127 karakteri ise **non-printable** karakterler olarak geçer.
	- Printable karakterler ekrana yazdırabilirken non-printable karakterler ekrana yazdırılamazlar. 
	- Fonksiyon parametresinde int tipinde c değişkeni alır.
	- **c** değişkeninin ascii decimal karşılığının 32-126 aralığında olup olmadığı kontrol edilir.
	- Dönüş değeri, karakter printable ise **decimal karşılığı** değilse **0** olarak belirlenir.

- ***ft_strlen***
	- Fonksiyon parametresinde **const char  \*s** değişkenini alır.
	- char *s içerisinde char karakterleri tutan bir dizi olarakta tanımlanabilir.
	- Ancak aslında, ramde bulunan belirli bir karakteri işaret eden ve index mantığıyla ilerlediğimizde sonraki karakterlere ulaşmamızı sağlayan  işaretçidir.
	- char *'ın önüne const sınıfını getirdiğimizde char * içerisindeki değerler yalnız okunabilir (read only) olur.
	- Dönüş değeri const char *s in **işaretlediği alandaki** karakterlerin toplamıdır.
