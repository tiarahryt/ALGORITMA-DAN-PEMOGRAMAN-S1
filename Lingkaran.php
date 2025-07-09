<?php
// Mendefinisikan konstanta π (phi)
define('PI', 3.14);

// Menghitung luas lingkaran
function hitungLuasLingkaran($jariJari)
{
  return PI * $jariJari * $jariJari;
}

// Menghitung keliling lingkaran
function hitungKelilingLingkaran($jariJari)
{
  return 2 * PI * $jariJari;
}

// Contoh penggunaan
$jariJari = 5;
$luas = hitungLuasLingkaran($jariJari);
$keliling = hitungKelilingLingkaran($jariJari);

echo "Jari-jari: $jariJari cm\n";
echo "Luas Lingkaran: $luas cm²\n";
echo "Keliling Lingkaran: $keliling cm\n";
