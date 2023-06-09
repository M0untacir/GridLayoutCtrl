#include "GridLayoutCtrl.h"

using namespace Upp;


void GridLayoutCtrl::Layout() {
	Size sz = GetSize();
	int count = GetViewChildCount();
	if(count == 0)
		return;

	count--;

	int i = 0;
	int j = 0;
	for(Ctrl *q = GetFirstChild(); q; q = q->GetNext()) {
		if(!q->InFrame()) {
			q->Show();
			int w = GetSize().cx/col_;
			int h = (count/col_)+1;
			q->SetRect(w*i, (sz.cy/h)*j , w, (sz.cy/h));
			i++;
			if (i == col_){
				j++;
				i = 0;
			}
		}
	}

}

void GridLayoutCtrl::Add(Ctrl& pane)
{
	Ctrl::Add(pane);
	Layout();
}

void GridLayoutCtrl::Insert(int ii, Ctrl& pane)
{
	if(ii >= GetCount())
		Add(pane);
	else {	
		Ctrl::AddChildBefore(&pane, GetIndexChild(ii));
		Layout();
	}
}

void GridLayoutCtrl::Remove(Ctrl& ctrl)
{
	Ctrl *c = GetFirstChild();
	while(c) {
		if(c == &ctrl){
			RemoveChild(c);
			break;
		}
		c = c->GetNext();
	}
}

void GridLayoutCtrl::Clear() {
	while(GetFirstChild())
		RemoveChild(GetFirstChild());
}

void GridLayoutCtrl::Reset() {
	Clear();
}

GridLayoutCtrl::GridLayoutCtrl() {
	Transparent(true);
	col_ = 1;
	SetFrame(NullFrame());
	NoWantFocus();
	VSizePos(0, 0).HSizePos(0, 0);
}

GridLayoutCtrl::~GridLayoutCtrl() {}

