<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Latihan Grade Struktur Kontrol</title>
</head>

<body>
  <form method="post">
    <h3>Lat Menentukan Grade pada if elseif</h3>
    <label for="">Masukan Nilai :</label>
    <input type="text" name="nilai" required>
    <button type="submit">Hasilnya</button><br>
  </form>

  <?php
  if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $nilai = $_POST['nilai'];
    $grade = '';
    $nb = '';
    $pk = '';
    $kn = '';

    if ($nilai > 100) {
      echo 'Nilai tidak boleh lebih dari 100';
    } else {
      if ($nilai >= 86 && $nilai <= 100) {
        $grade = 'A';
        $nb = '4,00';
        $pk = 'Unggul';
        $kn = 'Lulus';
      } elseif ($nilai >= 85) {
        $grade = 'A';
        $nb = '3,67';
        $pk = 'Sangat Baik';
        $kn = 'Lulus';
      } elseif ($nilai >= 79) {
        $grade = 'B+';
        $nb = '3,67';
        $pk = 'Baik';
        $kn = 'Lulus';
      } elseif ($nilai >= 74) {
        $grade = 'B';
        $nb = '3,33';
        $pk = 'Cukup Baik';
        $kn = 'Lulus';
      } elseif ($nilai >= 69) {
        $grade = 'C+';
        $nb = '2,58';
        $pk = 'Cukup';
        $kn = 'Lulus';
      } elseif ($nilai >= 59) {
        $grade = 'C';
        $nb = '2,00';
        $pk = 'Sangat Rendah';
        $kn = 'Lulus Bersyarat *)';
      } elseif ($nilai >= 49) {
        $grade = 'D';
        $nb = '1,00';
        $pk = 'Sangat Rendah';
        $kn = 'Lulus Bersyarat **)';
      } elseif ($nilai >= 40) {
        $grade = 'E';
        $nb = '0,00';
        $pk = 'Gagal';
        $kn = 'Tidak Lulus';
      }
      echo "Nilai Anda $nilai, Grade Anda $grade, Nilai Bobot $nb, Predikat Anda $pk, Keterangan Anda $kn";
    }
  }
  ?>

</body>

</html>