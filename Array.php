<?php
// Membuat array asosiatif berisi data mahasiswa dan umur
$mahasiswa = [
  "Sinta" => 27,
  "Supri" => 25,
  "Citra" => 18,
  "Doni" => 31
];

// Menampilkan daftar mahasiswa
foreach ($mahasiswa as $nama => $umur) {
  echo "<br>Nama Mahasiswa: $nama, Umur: $umur tahun";
}

// Menampilkan total jumlah mahasiswa
echo "<br>Jumlah Mahasiswa: " . count($mahasiswa);