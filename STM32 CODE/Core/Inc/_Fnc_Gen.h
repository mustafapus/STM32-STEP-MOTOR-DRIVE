


void delay_1ms(uint32_t num1){
	delay_1ms_cnt=0;
while (delay_1ms_cnt < num1) {asm("NOP");}
}

void delay_10us(uint32_t num1){
	delay_10us_cnt=0;
while (delay_10us_cnt < num1) {asm("NOP");}
}




void gonder(uint8_t a , uint8_t b , uint8_t c , uint8_t d){

	if(a==1){

		set_(IN1);
	}

	else if(a==0){

		res_(IN1);
	}

	 if(b==1){

		set_(IN2);
	}

	else if(b==0){

		res_(IN2);
	}

	 if(c==1){

		set_(IN3);
	}

	else if(c==0){

		res_(IN3);
	}

	 if(d==1){

		set_(IN4);
	}

	else if(d==0){

		res_(IN4);
	}

}


void sag(uint32_t bekle) {    // Sağa dönüş fonksiyonu
  int i = 0;
  while(i < tamtur / 4){
    gonder(1,0,0,1);     // Pinleri sola dönüşün tam tersine ayarlıyoruz
    delay_10us(bekle);
    gonder(0,0,0,1);
    delay_10us(bekle);
    gonder(0,0,1,1);
    delay_10us(bekle);
    gonder(0,0,1,0);
    delay_10us(bekle);
    gonder(0,1,1,0);
    delay_10us(bekle);
    gonder(0,1,0,0);
    delay_10us(bekle);
    gonder(1,1,0,0);
    delay_10us(bekle);
    gonder(1,0,0,0);
    delay_10us(bekle);
    i++;
  }
}


void sol(uint32_t bekle) {    // Sola dönüş fonksiyonu
  int i = 0;
  while(i < tamtur / 4){
    gonder(1,0,0,0);     // Pinleri belirli bir sırayla ayarlıyoruz
    delay_10us(bekle);
    gonder(1,1,0,0);
    delay_10us(bekle);
    gonder(0,1,0,0);
    delay_10us(bekle);
    gonder(0,1,1,0);
    delay_10us(bekle);
    gonder(0,0,1,0);
    delay_10us(bekle);
    gonder(0,0,1,1);
    delay_10us(bekle);
    gonder(0,0,0,1);
    delay_10us(bekle);
    gonder(1,0,0,1);
    delay_10us(bekle);
    i++;
  }
}
