<?php


$port =fopen("COM1","w+"); // SESUAIKAN PORT ARDUINO, sebagai testing COM1 ubah menjadi coba.txt untuk mengetahui hasil pengiriman data serial dari php contoh : $port =fopen("coba.txt","w+");
sleep(1); // delay terima respon

if($_POST['control'] == 'ON'){
echo "LED MENYALA";
fwrite($port,"on bro");
}

if($_POST['control'] == 'OFF'){
echo "LED MATI";
fwrite($port,"off bro");
}

fclose($port);
?>