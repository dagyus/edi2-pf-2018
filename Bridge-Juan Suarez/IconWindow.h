
class IconWindow : public Window {
public:
// ...
virtual void DrawContents();
virtual void Open();
virtual void Close();
virtual void Iconify();
virtual void Deiconify();
// requests forwarded to implementation
virtual void SetOrigin(const Point& at);
virtual void SetExtent(const Point& extent);
virtual void Raise();
virtual void Lower();
virtual void DrawLine(const Point&, const Point&);
virtual void DrawRect(const Point&, const Point&);
virtual void DrawPolygon(const Point[], int n);
virtual void DrawText(const char*, const Point&);


private:
const char* _bitmapName;
};
