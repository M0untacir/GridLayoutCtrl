#include <CtrlLib/CtrlLib.h>

namespace Upp
{

class GridLayout : public Ctrl {
public:
	virtual void   Layout();

protected: // Because of docking... (will be private)
	int			col_;
	friend class GridLayoutFrame;

public:
	void      SetColumns(int col) {col_ = col;};
	int       GetCount() const                     { return GetChildCount(); }
	void      Add(Ctrl& pane);
	GridLayout& operator<<(Ctrl& pane)               { Add(pane); return *this; }
	void      Insert(int pos, Ctrl& pane);
	void      Remove(Ctrl& pane);

	void      Clear();
	void      Reset();

	GridLayout();
	virtual ~GridLayout();
};

class GridLayoutFrame : public CtrlFrame, private Ctrl {
public:
	virtual void FrameAdd(Ctrl& parent);
	virtual void FrameRemove();
	virtual void FrameAddSize(Size& sz);
	virtual void FrameLayout(Rect& r);

	virtual void Paint(Draw& draw);

	void Show(bool show = true)				  { Ctrl::Show(show); }
	void Hide()								  { Ctrl::Hide(); }
	bool IsShown()							  { return Ctrl::IsShown(); }

	GridLayoutFrame();
};

}