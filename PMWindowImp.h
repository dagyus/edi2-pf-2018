

class PMWindowImp : public WindowImp {
public:
PMWindowImp();
virtual void DeviceRect(Coord, Coord, Coord, Coord);
virtual void ImpTop();
virtual void ImpBottom();
virtual void ImpSetExtent(const Point&);
virtual void ImpSetOrigin(const Point&);
virtual void DeviceText(const char*, Coord, Coord);
virtual void DeviceBitmap(const char*, Coord, Coord);


// remainder of public interface...
private:
// lots of PM window system-specific state, including:
HPS _hps;
};


