#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    p_error = 1;
    i_error = 1;
    d_error = 1;

    int_cte = 0;

    step = 0;
}

void PID::UpdateError(double cte) {
    if (step == 0) {
        step = 1;
        prev_cte = cte;
        return;
    }
    diff_cte = cte - prev_cte;
    prev_cte = cte;
    int_cte += cte;
    this->cte = cte;
    cout << cte << "," << prev_cte << "," << int_cte << endl;
}

double PID::TotalError() {
    return -Kp * cte - Kd * diff_cte - Ki * int_cte;
}

