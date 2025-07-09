<?php

$buah = ["apel", "pisang", "jeruk", " mangga"];
$nama = "Budi";

if (in_array($Buah)) {
  echo "Ini adalah array";
} else {
  echo "Ini bukan array";
}
echo "<br>";

if (in_array($nama, $buah)) {
  echo $nama . " Ada di dalam array";
} else {
  echo $nama . " Tidak ada di dalam array";
}

echo "<br>";

//Latihan list()

list($a, $b, $c, $d) = $buah;
echo $a . "<br>";
echo $b . "<br>";
echo $c . "<br>";
echo $d . "<br>";
echo "<br>";

// Latihan explode()
$string = "mobil, motor, sepeda";
$array = explode(",", $string);
print_r($array);

echo "<br>";

// Latihan join()
$string_buah = join(".", $buah);
echo $string_buah, "<br>";

echo "<br>";

// Latihan array_marger()
$array1 = ["ymaha", "honda", "suzuki"];
$array2 = ["toyota", "daihatsu", "kawasaki"];

$motor = array_merge($array1, $array2);
print_r($motor);
echo "<br>";

// Latihan array_push()
array_push($actor, "nissan", "naida", "datsun");
print_r($motor);
echo "<br>";

// Latihan array_pop(
$pop = array_pop($array2);
print_r($array2);