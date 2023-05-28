#ifndef _GridLayout_example_GridLayout_example_h
#define _GridLayout_example_GridLayout_example_h

#include <CtrlLib/CtrlLib.h>
#include <GridLayoutCtrl/GridLayoutCtrl.h>

using namespace Upp;

#define LAYOUTFILE <examples/GridLayoutCtrl_example/GridLayoutCtrl_example.lay>
#include <CtrlCore/lay.h>

class GridLayoutCtrl_example : public WithGridLayout_exampleLayout<TopWindow> {
public:
	Button btnA, btnB, btnC, btnD, btnE, btnF;
	Button btn1, btn2, btn3, btn4;
	
	GridLayoutCtrl GLb;
	
	EditString es;
	Label lbl;
	Option op1, op2, op3;
	Button kbtn, cbtn;
	GridLayoutCtrl GLd, GLe, GLf;
	
	ParentCtrl PC;
	
	GridLayoutCtrl_example();
};

#endif
