#ifndef _GridLayout_example_GridLayout_example_h
#define _GridLayout_example_GridLayout_example_h

#include <CtrlLib/CtrlLib.h>
#include <GridLayout/GridLayout.h>

using namespace Upp;

#define LAYOUTFILE <GridLayout_example/GridLayout_example.lay>
#include <CtrlCore/lay.h>

class GridLayout_example : public WithGridLayout_exampleLayout<TopWindow> {
public:
	Button btnA, btnB, btnC, btnD, btnE, btnF;
	Button btn1, btn2, btn3, btn4;
	
	GridLayout GLb;
	
	EditString es;
	Label lbl;
	Option op1, op2, op3;
	Button kbtn, cbtn;
	GridLayout GLd, GLe, GLf;
	
	ParentCtrl PC;
	
	GridLayout_example();
};

#endif
