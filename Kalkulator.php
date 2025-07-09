<?php
session_start();
?>
<!DOCTYPE html>
<html>

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width-device-width, initial-scale=1.0">
  <title>Kalkulator dalam PHP
  </title>
</head>

<body>
  <form action="" method="post">
    <label for="">Masukkan Nilai Pertama</label><br>
    <input type="text" name="nilai1" id="">
    <br>
    <br>
    <input type="text" name="nilai2" id="">
    <br>
    <br>
    <button type="submit">Hitung</button>
  </form>

  <?php

  if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $a = $_POST['nilai1'];
    $b = $_POST['nilai2'];

    function jumlah($a, $b)
    {
      return $a + $b;
    }

    echo "<h2>Hasil Penjumlahan $a + $b = " . jumlah($a, $b) . "</h2>";
  }

  function kurang($a, $b)
  {
    return $a - $b;
  }

  echo "<h2>Hasil Pengurangan $a - $b = " . kurang($a, $b) . "</h2>";

  function kali($a, $b)
  {
    return $a * $b;
  }

  echo "<h2>Hasil Perkalian $a * $b = " . kali($a, $b) . "</h2>";

  function bagi($a, $b)
  {
    return $a / $b;
  }
  echo "<h2>Hasil Pembagian $a / $b = " . bagi($a, $b) . "</h2>";

  ?>
</body>

</html>