#inlcude <avr/io.h>

#define EIGHT_HOURS 28800
#define TWELVE_HOURS 43200

viod setup_8hr_12hr_timer(){
	// Set TC1 16 bit timer mode to Normal
	TCCR1A &= ~(1<<WGM10);
	TCCR1A &= ~(1<<WGM11);
	TCCR1A &= ~(1<<WGM12);
	TCCR1A &= ~(1<<WGM13);

	
}