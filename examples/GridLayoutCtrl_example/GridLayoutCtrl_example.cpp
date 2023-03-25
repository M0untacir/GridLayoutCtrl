#include "GridLayoutCtrl_example.h"

GridLayoutCtrl_example::GridLayoutCtrl_example()
{
	CtrlLayout(*this, "GridLayoutCtrl Example");
	GLa.SetColumns(3);
	btnA.SetLabel("A");
	btnB.SetLabel("B");
	btnC.SetLabel("C");
	btnD.SetLabel("D");
	btnE.SetLabel("E");
	GLa.Add(btnA);
	
	btnB.VCenterPos(40);
	btnB.HCenterPos(40);
	PC.Add(btnB);
	GLa.Add(PC);
	
	GLa.Add(btnC);
	GLa.Add(btnD);
	GLa.Add(btnE);
	
	btn1.SetLabel("1");
	btn2.SetLabel("2");
	btn3.SetLabel("3");
	btn4.SetLabel("4");

	GLb.Add(btn1);
	GLb.Add(btn2);
	GLb.Add(btn3);
	GLb.Add(btn4);
	GLb.SetColumns(2);
	GLa.Add(GLb);
	
	btnF.SetLabel("F");
	GLa.Add(btnF);
	
	
	//GLa.Remove(btnA);
	
	GLd.SetColumns(2);
	lbl.SetText("Label:");
	GLd.Add(lbl);
	GLd.Add(es);
	GLc.Add(GLd);
	
	GLe.SetColumns(3);
	op1.SetLabel("Option 1");
	op2.SetLabel("Option 2");
	op3.SetLabel("Option 3");
	GLe.Add(op1);
	GLe.Add(op2);
	GLe.Add(op3);
	GLc.Add(GLe);
	
	GLf.SetColumns(2);
	kbtn.SetLabel("OK");
	cbtn.SetLabel("Cancel");
	GLf.Add(kbtn);
	GLf.Add(cbtn);
	GLc.Add(GLf);
	
	
	
}

GUI_APP_MAIN
{
	GridLayoutCtrl_example().Zoomable().Sizeable().Run();
}
