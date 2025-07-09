<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Menghitung Diskon Harga Barang</title>
</head>

<body>
  <h2>Form Diskon Barang</h2>
  <form method="post">
    <label for="kategori">Kategori Barang:</label>
    <select name="kategori" required>
      <option value="Elektronik">Elektronik</option>
      <option value="Pakaian">Pakaian</option>
      <option value="Buku">Buku</option>
    </select>
    <br><br>

    <label for="harga">Harga Asli (Rp):</label>
    <input type="number" name="harga" step="any" required>
    <br><br>

    <button type="submit">Hitun Diskon Barang</button>
  </form>

  <?php
  if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $kategori = $_POST["kategori"];
    $hargaAsli = $_POST["harga"];

    $diskonList = [
      "Elektronik" => 10,
      "Pakaian" => 15,
      "Buku" => 5
    ];

    if (array_key_exists($kategori, $diskonList)) {
      $persenDiskon = $diskonList[$kategori];
      $jumlahDiskon = ($persenDiskon / 100) * $hargaAsli;
    }
    $hargaSetelahDiskon = $hargaAsli - $jumlahDiskon;

    echo "<p>Kategori: <strong>$kategori</strong></p>";
    echo "<p>Harga Asli: Rp " . number_format($hargaAsli, 2, ',', '.') . "</p>";
    echo "<p>Diskon: $persenDiskon%</p>";
    echo "<p><strong>Harga Setelah Diskon: Rp " . number_format($hargaSetelahDiskon, 2, ',', '.') . "</strong></p>";
  } else {
    echo "<p>Kategori tidak ditemukan.</p>";
  }
  ?>
</body>

</html>