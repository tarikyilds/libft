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

 - ft_isdigit
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin rakam olup olmadığı kontrol edilir.
	 - Ascii tablosunda rakamlar decimal değere göre 48 - 57 arasındadır.
	 - Dönüş değeri bulunan rakamın ascii decimal karşılığıdır.
	 - **c** değişkeni rakam değilse 0 döner.
 - ft_isalpha
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin harf olup olmadığı kontrol edilir.
	 - Ascii tablosunda harfler decimal değere göre 65-90 (büyük harfler) ve 97-122 (küçük harfler) arasındadır.
	 -  Dönüş değeri bulunan harfin ascii decimal karşılığıdır.
	 - **c** değişkeni harf değilse 0 döner.
 - ft_isalnum
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin harf veya rakam olup olmadığı kontrol edilir.
	 - Ascii tablosunda decimal aralıkları sırayla; 48-57, 65-90 ve 97-122'dir.
	 - Dönüş değeri bulunan karakterin decimal karşılığıdır.
	 - **c** değişkeni harf veya rakam değilse 0 döner
