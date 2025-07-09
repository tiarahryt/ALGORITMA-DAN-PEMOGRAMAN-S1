<!DOCTYPE html>
<html>

<head>
  <title>Input Nilai Mahasiswa</title>
</head>

<body>

  <h2>Form Input Nilai Mahasiswa</h2>
  <form method="post">
    <?php
    $mataKuliah = ["Algoritma", "Pemrograman Web II", "Basis Data"];
    foreach ($mataKuliah as $mk) {
      echo "<h3>$mk</h3>";
      echo "Presensi (%): <input type='number' name='nilai[$mk][presensi]' min='0' max='100' required><br>";
      echo "Tugas: <input type='number' name='nilai[$mk][tugas]' min='0' max='100' required><br>";
      echo "UTS: <input type='number' name='nilai[$mk][uts]' min='0' max='100' required><br>";
      echo "UAS: <input type='number' name='nilai[$mk][uas]' min='0' max='100' required><br><br>";
    }
    ?>
    <button type="submit">Proses Nilai</button>
  </form>

  <?php
  function tentukanGrade($presensi, $nilaiAkhir)
  {
    if ($presensi < 50) return 'E';
    if ($presensi < 75) return 'D';
    if ($nilaiAkhir >= 85) return 'A';
    elseif ($nilaiAkhir >= 75) return 'B';
    elseif ($nilaiAkhir >= 65) return 'C';
    elseif ($nilaiAkhir >= 60) return 'D';
    else return 'E';
  }

  if ($_SERVER["REQUEST_METHOD"] == "POST") {
    echo "<h2>Hasil Penilaian</h2>";
    foreach ($_POST['nilai'] as $mataKuliah => $komponen) {
      $presensi = $komponen['presensi'];
      $tugas = $komponen['tugas'];
      $uts = $komponen['uts'];
      $uas = $komponen['uas'];

      $nilaiAkhir = ($presensi * 0.10) + ($tugas * 0.20) + ($uts * 0.30) + ($uas * 0.40);
      $grade = tentukanGrade($presensi, $nilaiAkhir);
      $status = ($nilaiAkhir >= 60 && $presensi >= 50) ? "Lulus" : "Tidak Lulus";

      echo "<h3>$mataKuliah</h3>";
      echo "Nilai Akhir: <strong>" . round($nilaiAkhir, 2) . "</strong><br>";
      echo "Grade: <strong>$grade</strong><br>";
      echo "Status: <strong>$status</strong><br><br>";
    }
  }
  ?>

</body>

</html>