#include "Figure.h"

#include <iostream>

enum class FiguresEnum {
	CIRCLE = 1,
	RECTANGLE
};

int main() {
  setlocale(LC_ALL, "rus");
  std::cout << "Какую фигуру нарисовать?" << std::endl;
  std::cout << static_cast<int>(FiguresEnum::CIRCLE) << "# Круг" << std::endl;
  std::cout << static_cast<int>(FiguresEnum::RECTANGLE) << "# Прямоугольник"
            << std::endl;
  std::cout << ">>> ";
  int command = 0;
  std::cin >> command;
  system("cls");
  
  Figures::Circle *circle = new Figures::Circle;
  Figures::Rectangle *rectangle = new Figures::Rectangle;
  switch (command) {
    case static_cast<int>(FiguresEnum::CIRCLE):
      circle->show();
      break;
    case static_cast<int>(FiguresEnum::RECTANGLE):
      rectangle->show();
      break;
    default:
      std::cout << "Неверный ввод!";
      std::exit(1);
  }

  delete circle;
  delete rectangle;
}