# Tugas Asistensi Praktikum Dasar Pemrograman P2
Berikut merupakan hasil dari tugas asistensi praktikum dasar pemrograman dengan judul "Percabangan Perulangan Array String"

# Deskripsi Tugas
Membuat sebuah program c yang dapat menampilkan output gambar yang minimal tersusun dari simbol asterisk “*” dan space “ “ dan dapat menampilkan satu jenis gambar berukuran panjang dan lebar sesuai input dengan minimal panjang 10 karakter dan lebar 5 karakter serta maksimal panjang 100 karakter dan lebar 75 karakter. Apabila melebihi atau kurang dari batas maksimal dan minimal maka gambar tidak akan ditampilkan dan akan menampilkan pesan sesuai pelanggaran. Selain itu, program dapat menampilkan lebih dari satu jenis gambar tergantung demand dari input dan program dapat menerima input dan menampilkan output secara terus menerus sampai dihentikan secara paksa.

# Deskripsi Program
Program menggunakan Percabangan, Perulangan, dan fungsi untuk menampilkan pola gambar berupa persegi panjang atau segitiga, yang tersusun dari simbol asterisk (*) dan spasi (" ")
1. Fungsi print_rectangle(int lebar, int tinggi)

Fungsi ini bertanggung jawab untuk mencetak pola persegi panjang dengan kombinasi simbol * dan spasi. Fungsi ini menggunakan nested loop (perulangan bersarang) dengan struktur for.

3. print_triangle(int tinggi)

Fungsi ini bertanggung jawab untuk mencetak pola segitiga, di mana jumlah simbol yang dicetak meningkat pada setiap baris. Sama seperti print_rectangle, fungsi ini menggunakan nested loop untuk iterasi kolom dan baris.

4. Loop dan Input

Program menggunakan loop while (1) untuk memastikan program terus-menerus berjalan hingga pengguna memilih untuk menghentikannya. scanf digunakan untuk menerima input pilihan dari pengguna, serta input ukuran panjang (lebar) dan tinggi (tinggi) yang dibutuhkan untuk menggambar persegi panjang atau segitiga.

5. Validasi Input

Setelah input diterima, program memeriksa apakah ukuran yang dimasukkan berada dalam rentang yang diizinkan (lebar: 10-100, tinggi: 5-75). Jika input tidak valid, program menampilkan pesan kesalahan dan meminta pengguna untuk mengulang.

6. Switch Pilihan

Jika pengguna memilih persegi panjang, maka fungsi print_rectangle() dipanggil dengan parameter lebar dan tinggi yang dimasukkan. Jika pengguna memilih segitiga, maka fungsi print_triangle() dipanggil dengan parameter tinggi yang dimasukkan dan apabila pengguna memilih opsi keluar (3), program akan berhenti.

7. Pesan Kesalahan dan Validasi

Jika ukuran yang dimasukkan oleh pengguna berada di luar batas yang telah ditentukan (lebar: 10-100, tinggi: 5-75), program akan menampilkan pesan "Ukuran gambar tidak valid! Lebar harus di antara 10-100 dan tinggi harus di antara 5-75."
