<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Hitung Luas dan Keliling Lingkaran</title>
</head>

<body>
  <h2>Masukkan jari-jari Lingkaran</h2>
  <form method="post">
    <input type="number" name="jari" step="any" required>
    <button type="submit">Hitung</button>
  </form>

  <?php
  if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $jari = $_POST["jari"];
    $phi = 3.14;

    $luas = $phi * $jari * $jari;
    $keliling = 2 * $jari * $jari;

    echo "<p>Luas Lingkaran dengan jari-jari<strong>$jari</strong> adalah: <strong>" . round($luas, 2) . "</stong></p>";
    echo "<p>Keliling Lingkaran adalah: <strong>" . round($keliling, 2) . "</stong></p>";
  }
  ?>
</body>

</html>