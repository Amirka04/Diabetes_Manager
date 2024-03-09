//
// Created by cyber_amirka on 10.03.24.
//

#include "window.h"


window::window(QWidget *parent) {
    setWindowTitle("Diabetes Manager");
    setWindowIcon(QIcon("diabetes.png"));
    setMinimumSize(QSize(500, 500));
}