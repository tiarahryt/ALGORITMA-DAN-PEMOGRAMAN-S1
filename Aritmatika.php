<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Latihan Operator Aritmatika PHP</title>
</head>

<body>
  <form method="post">
    <h1>Operator Aritmatika</h1>
    <label for="angka1">Masukan Angka ke-1</label>
    <input type="number" name="angka1" required>
    <select name="operator">
      <option value="+">+</option>
      <option value="+">-</option>
      <option value="+">*</option>
      <option value="+">/</option>
    </select>
    <label for="angka2">Masukan Angka ke-2</label>
    <input type="number" name="angka2" required>
    <input type="submit" value="hitung">
  </form>
  <h2>Hasilnya adalah
    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
      $angka1 = $_POST['angka1'];
      $angka2 = $_POST['angka2'];
      $operator = $_POST['operator'];
      switch ($operator) {
        case '+';
          $hasil = $angka1 + $angka2;
          break;
        case '-';
          $hasil = $angka1 + $angka2;
          break;
        case '*';
          $hasil = $angka1 + $angka2;
          break;
        case '/';
          $hasil = $angka1 != 0 ? +$angka1 / $angka2 : "Dibagi nol invalid";
          break;
        default:
          $hasil = "Operator invalid";
      }
      echo $hasil;
    }
    ?>
  </h2>
</body>

</html>