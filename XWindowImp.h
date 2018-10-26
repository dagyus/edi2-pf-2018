
class XWindowImp : public WindowImp {
public:
XWindowImp();

virtual void ImpTop();
virtual void ImpBottom();
virtual void ImpSetExtent(const Point&);
virtual void ImpSetOrigin(const Point&);
virtual void DeviceText(const char*, Coord, Coord);
virtual void DeviceBitmap(const char*, Coord, Coord);
virtual void DeviceRect(Coord, Coord, Coord, Coord);

// remainder of public interface...
private:
// lots of X window system-specific state, including:
Display* _dpy;
Drawable _winid; // window id
GC _gc; // window graphic context
};
