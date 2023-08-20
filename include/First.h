// Main.h

#ifndef _FIRST_h
#define _FIRST_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Mode.h"
#include "Workmodes.h"

class First: public Mode {
public:
	First(Aggregates * a,Hardware * h);

	void draw(long m);
	void showState();
	void initDraw();
	void makeMenu();
	void command(MenuCommand * id);
	void initParams(MenuParameter * mp);
	void acceptParams(MenuParameter * mp);
	void process(long ms) {};
	String getData(uint w) { return Mode::getData(w); }
private:
	
	int counter;
};





#endif

