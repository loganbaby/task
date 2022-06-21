#include "Figure.h"

Figure::Figure() {
  hWnd = GetConsoleWindow();
  hDC = GetDC(hWnd);
  SelectObject(hDC, GetStockObject(WHITE_PEN));
}

void Figures::Circle::show() {
  while (true) {
    Ellipse(hDC, 12, 23, 130, 120);
  }
  ReleaseDC(hWnd, hDC);
}

void Figures::Rectangle::show() {
  while (true) {
    ::Rectangle(hDC, 100, 23, 300, 400);
  }
  ReleaseDC(hWnd, hDC);
}