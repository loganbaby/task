#pragma once

#include <Windows.h>

class Figure {
 protected:
  POINT op;
  HWND hWnd = nullptr;
  HDC hDC = nullptr;

 public:
  explicit Figure();
  ~Figure(){};
  virtual void show() = 0;
};

namespace Figures {
	class Circle : public Figure {
	 public:
	  virtual void show() override;
	};

	class Rectangle : public Figure {
	 public:
	  virtual void show() override;       //новые фигуры добавляются в иерархию аналогично
	};
}  // namespace Figures