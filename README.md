# SoalShiftSISOP20_modul3_T14

Fancista Syarif Hidayatullah 05311840000027
Agnes Lesmono 05311840000044

-----------------------------------------------------------------------------------------------------------------------
1. Poke*ZONE adalah sebuah game berbasis text terminal mirip dengan Pokemon GO.
Ketentuan permainan sebagai berikut:
a. Menggunakan IPC-shared memory, thread, fork-exec.
b. Kalian bebas berkreasi dengan game ini asal tidak konflik dengan
requirements yang ada. (Contoh: memberi nama trainer, memberi notifikasi
kalau barang di shop sudah penuh, dan lain-lain).
c. Terdapat 2 code yaitu soal2_traizone.c dan soal2_pokezone.c.
d. soal2_traizone.c mengandung fitur:
i. Normal Mode (3 Menu)
1. Cari Pokemon
a. Jika diaktifkan maka setiap 10 detik akan memiliki
60% chance untuk menemui pokemon bertipe normal,
rare, legendary dengan encounter rate sesuai pada
tabel di bawah (Gunakan Thread).
b. Cari pokemon hanya mengatur dia menemukan
pokemon atau tidak. Untuk tipe pokemon dan pokemon
tersebut shiny atau tidak diatur oleh soal2_pokezone.c.
c. Opsi “Cari Pokemon” akan berubah jadi “Berhenti
Mencari” ketika state mencari pokemon aktif.
d. State mencari pokemon hanya bisa dihentikan ketika
pokemon sudah ditemukan atau trainer memilih untuk
berhenti pada menu.
e. Jika menemui pokemon maka akan masuk ke Capture
Mode.
f. Untuk mempermudah boleh menambah menu go to
capture mode untuk berpindah dari mode normal ke
mode capture setelah menemukan pokemon dari
thread Cari Pokemon.

2. Pokedex
a. Melihat list pokemon beserta Affection Point (AP) yang
dimiliki.
b. Maksimal 7 pokemon yang dimiliki.
c. Jika menangkap lebih dari 7 maka pokemon yang baru
saja ditangkap akan langsung dilepas dan
mendapatkan pokedollar sesuai dengan tabel dibawah.
d. Setiap pokemon yang dimiliki, mempunyai Affection
Point (AP) dengan initial value 100 dan akan terus
berkurang sebanyak -10 AP/10 detik dimulai dari
waktu ditangkap (Gunakan Thread).
e. Jika AP bernilai 0, maka pokemon tersebut memiliki
90% chance untuk lepas tanpa memberikan pokedollar
ke trainer atau 10% chance untuk reset AP menjadi 50
AP.
f. AP tidak akan berkurang jika dalam Capture Mode.

g. Di Pokedex trainer juga bisa melepas pokemon yang
ditangkap dan mendapat pokedollar sesuai dengan
tabel dibawah.
h. Bisa memberi berry ke semua pokemon yang dimiliki
untuk meningkatkan AP sebesar +10 (1 berry untuk
semua pokemon yang ada di pokedex).

3. Shop
a. Membeli item dari soal2_pokezone.
b. Maksimal masing-masing item yang dapat dibeli dan
dipunya oleh trainer adalah 99.

ii. Capture Mode (3 Menu)
1. Tangkap → Menangkap menggunakan pokeball. Berhasil
ditangkap maupun tidak, pokeball di inventory -1 setiap
digunakan.
2. Item → Menggunakan item sesuai dengan tabel item dibawah
(hanya lullaby powder).
3. Keluar → Keluar dari Capture Mode menuju Normal Mode.
● Pokemon tersebut memiliki peluang untuk lari dari trainer
sesuai dengan persentase escape rate pada tabel dibawah
(gunakan thread).
e. soal2_pokezone.c mengandung fitur:
i. Shutdown game → Mematikan program soal2_pokezone dan
soal2_traizone (Gunakan fork-exec).
ii. Jual Item (Gunakan Thread)
1. Stock awal semua item adalah 100.
2. Masing-masing item akan bertambah +10 item/10 detik.
3. Maximum item yang dalam shop adalah 200.
4. List item ada pada tabel dibawah.
No Nama Item Effect Harga
(Pokedollar)
Durasi
(Detik)
Capture
Mode

Normal
Mode

1 Lullaby
Powder

● Meningkatkan chance untuk
menangkap sebesar 20%
(misal normal pokemon jadi
90% capture ratenya).
● Menurunkan escape rate jadi
0% sehingga Pokemon tidak
bisa lari.

60 10 Yes No

2 Pokeball Menangkap pokemon. 5 - Yes No
3 Berry Meningkatkan AP semua
pokemon yang ada di pokedex
sebesar +10.

15 - No Yes

5. Gunakan thread untuk implementasi lullaby powder dibuatkan
masing-masing 1 thread.

iii. Menyediakan Random Pokemon (Gunakan Thread)
1. Setiap tipe pokemon memiliki peluang 1/8000 untuk jadi shiny
pokemon. (Random dulu antara normal, rare, legendary sesuai
rate mereka, baru setelah itu di random dengan peluang
1/8000 untuk tahu dia shiny atau tidak).
2. Shiny Pokemon meningkatkan escape rate sebesar +5%
(misal: tipe normal jadi 10%), capture rate berkurang menjadi
-20% (misal: tipe rare jadi 30%), dan pokedollar dari melepas
+5000 (misal: tipe legendary jadi 5200 pokedollar).
3. Setiap 1 detik thread ini akan mengkalkulasi random ulang lagi
untuk nantinya diberikan ke soal2_traizone.

No Pokemon Type Encounter
Rate

Escape
Rate

Capture
Rate

Pokedollar
dari
melepas

List Nama Pokemon
(random)

1 Normal 80% 5% setiap
20 detik

70% 80 ● Bulbasaur
● Charmander
● Squirtle
● Rattata
● Caterpie

2 Rare 15% 10% setiap
20 detik

50% 100 ● Pikachu
● Eevee
● Jigglypuff
● Snorlax
● Dragonite

3 Legendary 5% 20% setiap
20 detik

30% 200 ● Mew
● Mewtwo
● Moltres
● Zapdos
● Articuno
-----------------------------------------------------------------------------------------------------------------------
Kesulitan :
Level kesulitan soal terlalu tinggi, otak kami tidak mampu :(
Waktu yang diberikan untuk mengerjakan soal shift dengan level kesulitan seperti ini kurang
Soal sangat berbeda dengan contoh dan latihan yang diberikan, sehingga tidak paham

----------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------
2. Qiqi adalah sahabat MamMam dan Kaka. Qiqi , Kaka dan MamMam sangat senang
bermain “Rainbow six” bersama-sama , akan tetapi MamMam sangat Toxic ia selalu
melakukan Team killing kepada Qiqi di setiap permainannya. Karena Qiqi orang yang
baik hati, meskipun marah Qiqi selalu berkata “Aku nggk marah!!”. Kaka ingin
meredam kemarahan Qiqi dengan membuatkannya sebuah game yaitu TapTap
Game. akan tetapi Kaka tidak bisa membuatnya sendiri, ia butuh bantuan mu. Ayo!!
Bantu Kaka menenangkan Qiqi.
TapTap Game adalah game online berbasis text console. Terdapat 2 program yaitu
tapserver.c dan tapplayer.c
Syarat :
- Menggunakan Socket, dan Thread
Hint :
- fwrite, fread
Spesifikasi Game :

CLIENT SIDE

Screen 1 :
1. Login
2. Register
Choices : {your input}
★ Pada screen 1 kalian dapat menginputkan “login”, setelah menekan enter
anda diminta untuk menginputkan username dan password seperti berikut
Screen 1 :
1. Login
2. Register
Choices : login
Username : { ex : qiqi }
Password : { ex : aku nggak marah!! }
★ Jika login berhasil maka akan menampilkan pesan “login success”, jika gagal
akan menampilkan pesan “login failed” (pengecekan login hanya mengecek
username dan password, maka dapat multi autentikasi dengan username dan
password yang sama)
★ Pada screen 1 kalian juga dapat menginputkan “register”, setelah menekan
enter anda diminta untuk menginputkan username dan password sama
halnya seperti login
★ Pada register tidak ada pengecekan unique username, maka setelah register
akan langsung menampilkan pesan “register success” dan dapat terjadi
double account
★ Setelah login berhasil maka anda berpindah ke screen 2 dimana
menampilkan 2 fitur seperti berikut.

Screen 2 :
1. Find Match
2. Logout
Choices : {your input}
★ Pada screen 2 anda dapat menginputkan “logout” setelah logout anda akan
kembali ke screen 1
★ Pada screen 2 anda dapat menginputkan “find”, setelah itu akan
menampilkan pesan “Waiting for player ...” print terus sampai menemukan
lawan
★ Jika menemukan lawan maka akan menampilkan pesan “Game dimulai
silahkan tap tap secepat mungkin !!”
★ Pada saat game dimulai diberikan variable health = 100,dan anda dapat
men-tap (menekan space pada keyboard tanpa harus menekan enter)
★ Pada saat anda men-tap maka akan menampilkan pesan “hit !!”, dan pada
lawan healthnya akan berkurang sebanyak 10 kemudian pada lawan
menampilkan pesan status healthnya sekarang. (conclusion : anda tidak bisa
melihat status health lawan)
★ Jika health anda <= 0 maka akan menampilkan pesan “Game berakhir kamu
kalah”, apabila lawan anda healthnya <= 0 maka akan menampilkan pesan
”Game berakhir kamu menang”
★ Setelah menang atau kalah maka akan kembali ke screen 2

SERVER SIDE

★ Pada saat program pertama kali dijalankan maka program akan membuat file
akun.txt jika file tersebut tidak ada. File tersebut digunakan untuk menyimpan
username dan password
★ Pada saat user berhasil login maka akan menampilkan pesan “Auth success” jika
gagal “Auth Failed”
★ Pada saat user sukses meregister maka akan menampilkan List account yang
terdaftar (username dan password harus terlihat)
-----------------------------------------------------------------------------------------------------------------------
Kesulitan :
Level kesulitan soal terlalu tinggi, otak kami tidak mampu :(
Waktu yang diberikan untuk mengerjakan soal shift dengan level kesulitan seperti ini kurang
Soal sangat berbeda dengan contoh dan latihan yang diberikan, sehingga tidak paham

-----------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------
3. Buatlah sebuah program dari C untuk mengkategorikan file. Program ini akan
memindahkan file sesuai ekstensinya (tidak case sensitive. JPG dan jpg adalah
sama) ke dalam folder sesuai ekstensinya yang folder hasilnya terdapat di working
directory ketika program kategori tersebut dijalankan.
● Semisal program dijalankan:
# File kategori terletak di /home/izone/kategori
$ ./kategori -f path/to/file1.jpg path/to/file2.c path/to/file3.zip
#Hasilnya adalah sebagai berikut
/home/izone
|-jpg
|--file1.jpg
|-c
|--file2.c
|-zip
|--file3.zi
● Pada opsi -f tersebut, user bisa menambahkan argumen file yang bisa
dikategorikan sebanyak yang user inginkan seperti contoh di atas.
● Pada program kategori tersebut, folder jpg,c,zip tidak dibuat secara manual,
melainkan melalui program c. Semisal ada file yang tidak memiliki ekstensi,
maka dia akan disimpan dalam folder “Unknown”.
● Program kategori ini juga menerima perintah (*) seperti di bawah;
$ ./kategori \*
● Artinya mengkategori seluruh file yang ada di working directory ketika
menjalankan program C tersebut.
● Selain hal itu program C ini juga menerima opsi -d untuk melakukan kategori
pada suatu directory. Untuk opsi -d ini, user hanya bisa menginput 1 directory
saja, tidak seperti file yang bebas menginput file sebanyak mungkin.
$ ./kategori -d /path/to/directory/
● Hasilnya perintah di atas adalah mengkategorikan file di /path/to/directory dan
hasilnya akan disimpan di working directory di mana program C tersebut
berjalan (hasil kategori filenya bukan di /path/to/directory).
● Program ini tidak rekursif. Semisal di directory yang mau dikategorikan, atau
menggunakan (*) terdapat folder yang berisi file, maka file dalam folder
tersebut tidak dihiraukan, cukup file pada 1 level saja.
● Setiap 1 file yang dikategorikan dioperasikan oleh 1 thread agar bisa berjalan
secara paralel sehingga proses kategori bisa berjalan lebih cepat. Dilarang
juga menggunakan fork-exec dan system.
● Silahkan download soal3.zip sebagai percobaan. Namun silahkan
dicoba-coba sendiri untuk kemungkinan test case lainnya yang mungkin
belum ada di soal3.zip.
-----------------------------------------------------------------------------------------------------------------------
Kesulitan :
Level kesulitan soal terlalu tinggi, otak kami tidak mampu :(
Waktu yang diberikan untuk mengerjakan soal shift dengan level kesulitan seperti ini kurang
Soal sangat berbeda dengan contoh dan latihan yang diberikan, sehingga tidak paham

----------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------
4. Norland adalah seorang penjelajah terkenal. Pada suatu malam Norland menyusuri
jalan setapak menuju ke sebuah gua dan mendapati tiga pilar yang pada setiap
pilarnya ada sebuah batu berkilau yang tertancap. Batu itu berkilau di kegelapan dan
setiap batunya memiliki warna yang berbeda.
Norland mendapati ada sebuah teka-teki yang tertulis di setiap pilar. Untuk dapat
mengambil batu mulia di suatu pilar, Ia harus memecahkan teka-teki yang ada di
pilar tersebut. Norland menghampiri setiap pilar secara bergantian.
- Batu mulia pertama. Emerald. Batu mulia yang berwarna hijau mengkilat. Pada
batu itu Ia menemukan sebuah kalimat petunjuk. Ada sebuah teka-teki yang berisi:
1. Buatlah program C dengan nama "4a.c", yang berisi program untuk
melakukan perkalian matriks. Ukuran matriks pertama adalah 4x2, dan
matriks kedua 2x5. Isi dari matriks didefinisikan di dalam kodingan. Matriks
nantinya akan berisi angka 1-20 (tidak perlu dibuat filter angka).
2. Tampilkan matriks hasil perkalian tadi ke layar.

- Batu kedua adalah Amethyst. Batu mulia berwarna ungu mengkilat. Teka-tekinya
adalah:

1. Buatlah program C kedua dengan nama "4b.c". Program ini akan
mengambil variabel hasil perkalian matriks dari program "4a.c" (program
sebelumnya), dan tampilkan hasil matriks tersebut ke layar.
(Catatan!: gunakan shared memory)
2. Setelah ditampilkan, berikutnya untuk setiap angka dari matriks
tersebut, carilah nilai faktorialnya, dan tampilkan hasilnya ke layar dengan
format seperti matriks.

Contoh: misal array [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], ...],

maka:

1 2 6 24
120 720 ... ...
...

(Catatan! : Harus menggunakan Thread dalam penghitungan
faktorial)
- Batu ketiga adalah Onyx. Batu mulia berwarna hitam mengkilat. Pecahkan
teka-teki berikut!

1. Buatlah program C ketiga dengan nama "4c.c". Program ini tidak
memiliki hubungan terhadap program yang lalu.
2. Pada program ini, Norland diminta mengetahui jumlah file dan
folder di direktori saat ini dengan command "ls | wc -l". Karena sudah belajar
IPC, Norland mengerjakannya dengan semangat.
(Catatan! : Harus menggunakan IPC Pipes)
Begitu batu terakhir berhasil didapatkan. Gemuruh yang semakin lama semakin
besar terdengar. Seluruh tempat berguncang dahsyat, tanah mulai merekah. Sebuah
batu yang di atasnya terdapat kotak kayu muncul ke atas dengan sendirinya.

Sementara batu tadi kembali ke posisinya. Tanah kembali menutup, seolah tidak
pernah ada lubang merekah di atasnya satu detik lalu.
Norland segera memasukkan tiga buah batu mulia Emerald, Amethys, Onyx pada
Peti Kayu. Maka terbukalah Peti Kayu tersebut. Di dalamnya terdapat sebuah harta
karun rahasia. Sampai saat ini banyak orang memburu harta karun tersebut.
Sebelum menghilang, dia menyisakan semua petunjuk tentang harta karun tersebut
melalui tulisan dalam buku catatannya yang tersebar di penjuru dunia. "One Piece
does exist".
-----------------------------------------------------------------------------------------------------------------------
4a : [Source](https://github.com/lumbricina/SoalShiftSISOP20_modul3_T14/blob/master/Soal4/Soal4a.c)

4b : [Source](https://github.com/lumbricina/SoalShiftSISOP20_modul3_T14/blob/master/Soal4/Soal4b.c)

4c : [Source](https://github.com/lumbricina/SoalShiftSISOP20_modul3_T14/blob/master/Soal4/Soal4c.c)

###4a

Pada bagian (a), diminta untuk membuat sebuah program yang dapat melakukan
proses perkalian dua buah matriks, dimana matriks pertama berordo 4x2 dan
matriks kedua berordo 2x5. Nantinya, hasil dari perkalian matriks ini akan
digunakan juga pada program `4b.c`.

```c
key_t key = 1234;
int shmid = shmget(key, sizeof(int[WIDTH][WIDTH1]), IPC_CREAT | 0666);
matrixC = shmat(shmid, NULL, 0);
```

Pada bagian ini, dibuat uniqe key yaitu `1234`, dimana nantinya akan digunakan
sebagai key shared memory. Nantinya, hasil perkalian matriks akan disimpan pada
`matrixC` dan akan di share dengan program `4b.c`.

```c
for (int i = 0; i < WIDTH; i++) { 
  for (int j = 0; j < LENGTH; j++) { 
    matrixA[i][j] = (j+1);
  } 
}

for (int i = 0; i < LENGTH; i++) { 
  for (int j = 0; j < WIDTH1; j++) { 
    matrixB[i][j] = (j+1);
  } 
}
```

Bagian ini digunakan untuk mengisi nilai dari matriks yang dibuat. `matrixA` dan
`matrixB` akan diisi dengan nilai `j+1`.

```c
printf("Matrix A:\n");
for (int i = 0; i < WIDTH; i++) { 
  for (int j = 0; j < LENGTH; j++)  
    printf("%d ",matrixA[i][j]);
  printf("\n");
} 
  
printf("Matrix B:\n");
for (int i = 0; i < LENGTH; i++) { 
  for (int j = 0; j < WIDTH1; j++)  
    printf("%d ",matrixB[i][j]);
  printf("\n");
}
```

Bagian ini untuk menampilkan nilai dari `matrixA` dan `matrixB` yang dimana
pada bagian sebelumnya sudah diisi dengan nilai `j+1`.

```c
pthread_t threads;

for (int i = 0; i < WIDTH; i++) {
  for(int j = 0;j < WIDTH1; j++) {
    matrixC[i][j] = 0;
  }
  pthread_create(&threads,NULL, kali, NULL);
  pthread_join(threads, NULL); 
} 
```

Pada bagian ini, dibuat thread untuk mengoperasikan perkalian dari matriks
yang sudah dibuat tadi. `matrixC` yang digunakan sebagai hasil dari perkalian
`matrixA` dan `matrixB` dideklarasikan terlebih dahulu dengan nilai nol.

```c
void* kali(void* arg){
    int i, j, k;
    for (i = 0 ; i < WIDTH; i++) {
        for (j = 0; j < WIDTH1; j++) {  
            for (k = 0; k < LENGTH; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}
```

Thread dengan nama `kali` ini akan melakukan proses perkalian
matriks, yang dimana hasil dari perkalian tersebut yaitu `matrixC` dengan ordo 4x5.

```c
printf("Hasil Perkalian:\n");
  for (int i = 0; i < WIDTH; i++) { 
    for (int j = 0; j < WIDTH1; j++)  
      printf("%d ",matrixC[i][j]);
    printf("\n");
} 
```

Hasil dari perkalian matriks akan ditampilkan melalui proses iterasi tersebut.

###4b

Pada bagian (b), diminta untuk menampilkan hasil perkalian matriks dari
program `4a.c`, kemudian menjumlahkan setiap angka dari matriks tersebut
dari n sampai 1.

```c
key_t key = 1234;
int shmid = shmget(key, sizeof(int[WIDTH][WIDTH1]), IPC_CREAT | 0666);
matrixC = shmat(shmid, 0, 0);
```

Dibuat unique key untuk digunakan sebagai key shared memory dengan program
`4a.c` yang sudah dibuat sebelumnya. Nilai dari `matrixC` ini yang akan 
saling berbagi antara program `4a.c` dengan `4b.c`.

```c
printf("Hasil dari program 4a.c:\n");
  for (int i = 0; i < WIDTH; i++) { 
    for (int j = 0; j < WIDTH1; j++) { 
      printf("%d ", matrixC[i][j]);
    }
  printf("\n");
}

pthread_create(&thread, NULL, count, NULL);
pthread_join(thread, NULL);

```

Bagian ini akan menampilkan nilai dari `matrixC` yang dimana tadinya pada
program `4a.c` melakukan share memory dengan program `4b.c`.

```c
void* count(void *arg) {
    int temp;
    int ops = 0;
    int i,j,k;
    for (i = 0; i < WIDTH; i++) { 
        for (j = 0; j < WIDTH1; j++) { 
            temp = matrixC[i][j];
            for(k = temp; k > 0; k--) {
                ops+=k;
            }
            reslt[i][j] = ops;
            ops = 0;
        }
    }
}
```

Penjumlahan dari angka yang terdapat pada matriks `matrixC` dilakukan dengan
thread dimana setiap angka akan disimpan terlebih dahulu di variabel `temp` dan
akan di jumlahkan secara iterasi. Hasilnya akan dikembalikan ke tiap ordo masing-masing.

```c
printf("Hasil operasi pernjumlahan dari matriks 4a.c:\n");
  for (int i = 0; i < WIDTH; i++) { 
    for (int j = 0; j < WIDTH1; j++) { 
      printf("%d ", reslt[i][j]);
     }
  printf("\n");
  }
```

Hasil dari penjumlahan akan di tampilkan dengan bagian diatas

###4c

Pada bagian (c), kita diminta untuk menghitung jumlah file dan direktori yang
terdapat di dalam direktori saat ini dengan command `ls | wc -l`. Menggunakan 
pipe untuk membuat grep line disini, digunakan `dup2()` untuk write dan read 
dari pipe yang dibuat. `0` berarti read, dan `1` berarti write.

----------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------
