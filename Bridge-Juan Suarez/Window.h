#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <string.h>
#include <cstdio>
#include "WindowImp.h"

using namespace std;

class Window {
public:
Window(View* contents);
// requests handled by window
virtual void DrawContents();
virtual void Open();
virtual void Close();
virtual void Iconify();
virtual void Deiconify();
// requests forwarded to implementation
virtual void SetOrigin(const & at);
virtual void SetExtent(const & extent);
virtual void Raise();
virtual void Lower();
virtual void DrawLine(const &, const &);
virtual void DrawRect(const &, const &);
virtual void DrawPolygon(const [], int n);
virtual void DrawText(const char*, const &);


protected:
WindowImp* GetWindowImp();
View* GetView();
private:
WindowImp* _imp;
View* _contents; // the window's contents
};

