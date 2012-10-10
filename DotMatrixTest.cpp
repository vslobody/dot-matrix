#include "DotMatrixTest.h"
#include "DotMatrix.h"
#include "DotFont.h"
#include "DotString.h"
#include "Driver_PCD8544.h"

#include "Font0703.h"

Driver_PCD8544 lcd(A5, A4, A3, A2, A1);
DotMatrix dm = lcd.getDM();

void setup()
{
	pinMode(A0, OUTPUT);
	digitalWrite(A0, HIGH);

	lcd.init();

	dm.clear();
	dm.setMoveDirection(DotMatrix::BIT_IN_COL_POSI);

	DotFont df(dm);

	df.setPattern(FONT_0703, FONT_0703_STATE);
	DotString ds(df, 32, true);

	dm.setDot(0,0);

	ds.printf("Hello, world.");
	ds.postAt(2,0);

	df.setVertical(false);
	ds.printf("Font Display on Nokia");
	ds.postAt(0, 0);

	ds.printf("5110, driven by");
	ds.postAt(0, 9);

	ds.printf("Arduino.");
	ds.postAt(0, 18);

	ds.printf("aGuegu.net");
	ds.postAt(0, 27);

	ds.printf("%2d-%02d, %d", 5, 31, 2012);
	ds.postAt(0, 36);
}

void loop()
{
	lcd.putDM();

	dm.move(true);
	delay(200);
}
