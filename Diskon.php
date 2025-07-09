<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Document</title>
</head>

<body>
  <h3>Form Hitung Diskon</h3>
  <form action="" method="post">
    <label for="">Harga Barang (Rp.)</label><br>
    <input type="text" name="harga" id=""><br><br>
    <label for="">Diskon (%)</label><br>
    <input type="text" name="diskon" id=""><br><br>
    <button type="submit">Hitung</button>
  </form>

  <?php
  if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $harga = $_POST['harga'];
    $diskon = $_POST['diskon'];

    function hitungDiskon($harga, $diskon)
    {
      return $harga - ($harga * ($diskon / 100));
    }

    echo "<h1>Hasil Perhitungan Diskon</h1>";
    echo "<h3>Harga Barang: Rp. $harga</h3>";
    echo "<h3>Diskon: $diskon%</h3>";
    echo "<h3>Harga Setelah Diskon: Rp. " . hitungDiskon($harga, $diskon) . "</h3>";
  }

  ?>
</body>


</html>