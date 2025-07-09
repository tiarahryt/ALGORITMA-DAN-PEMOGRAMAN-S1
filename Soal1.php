<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Menentukan Angka Ganjil atau Genap</title>
</head>

<body>
  <h2>Masukkan sebuah angka</h2>
  <form method="post">
    <input type="number" name="angka" required>
    <button type="submit">Tentukan</button>
  </form>

  <?php
  if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $angka = $_POST["angka"];

    if ($angka % 2 == 0) {
      echo "<p>Angka <strong>$angka</strong> adalah <strong>Genap</strong>.</p>";
    }
  }
  ?>
</body>

</html>