<?php
echo "<table border='2' cellspacing='0' cellpadding='3' style='border-collapse: collapse; text-align: center;'>";
echo "<tr style='background-color:#00FF00; font-weight: bold;'><th>&times;</th>";

for ($i = 1; $i <= 50; $i++) {
  echo "<th style='padding: 7px;'>$i</th>";
}
echo "</tr>";

for ($i = 1; $i <= 50; $i++) {
  echo "<tr>";
  echo "<th style='background-color: #00FF00; font-weight: bold; padding: 7px;'>$i</th>";
  for ($j = 1; $j <= 50; $j++) {
    echo "<td style='padding: 7px;'>" . ($i * $j) . "</td>";
  }
  echo "</tr>";
}

echo "</table>";
