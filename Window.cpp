#include "Window.h"


void Window::DrawRect (const Point& p1, const Point& p2) {
WindowImp* imp = GetWindowImp();
imp->DeviceRect(p1.X(), p1.Y(), p2.X(), p2.Y());
}


void Window::Open()
{

}

void Window::Close()
{

}

void Window::Iconify()
{

}

void Window::Deiconify()
{

}

void Window::SetOrigin()
{

}

void Window::SetExtent()
{

}

void Window::Raise()
{

}

void Window::Lower()
{

}

void Window::DrawLine()
{

}

void Window::DrawContents()
{

}

void Window::DrawPolygon()
{

}


void Window::DrawText()
{

}




