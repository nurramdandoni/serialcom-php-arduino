char e;
void setup()
{
	Serial.begin(9600); // kecepatan transfer (per bit)
	pinMode(3, OUTPUT);
}

void loop()
{
	if (Serial.avaiable() > 0)
	{
		e = Serial.read();
		Serial.println(e); // hanya untuk testing

			if(e=='on bro')
			{
				Serial.println("LAMPU MENYALA");
				digitalWrite(3, HIGH); // menghidupkan lampu
			}
			if(e=='off bro')
			{
				Serial.println("LAMPU MATI");
				digitalWrite(3, LOW); // memetaikan lampu
			}
	}
	else
	{
		delay(100);
	}

	
}