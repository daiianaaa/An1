// Rectangle.h - clasa Rectangle

class Rectangle
{
// membri private
  int height;
  int width;
public:
// membri publici
    Rectangle (int h = 10, int w = 10);    // constructor explicit cu toate val. implicite
    int det_area(void);
  void setHeight (int);
  void setWidth (int);
   ~Rectangle (void);        // destructor explicit
   };
    Rectangle::Rectangle (int h, int w)
  {
    height = h;
    width = w;
  }
  Rectangle::~Rectangle (void)
  {
// definire constructor explicit
  cout << "\n Apel destructor...";
  height = 0;
  width = 0;
  }
// destructor
  int Rectangle::det_area (void)
  {
    return height * width;
  }
  void Rectangle::setHeight (int init_height)
  {
    height = init_height;
  }
  void Rectangle::setWidth (int init_width)
  {
    width = init_width;
  }
