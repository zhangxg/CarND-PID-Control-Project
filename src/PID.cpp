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
}

void PID::UpdateError(double cte) {
    int_cte += cte;
    prev_cte = cte;
    cte = cte;
}

double PID::TotalError() {
    double diff_cte = cte - prev_cte;
    int_cte += cte;
    prev_cte = cte;
    cout << Kp << "," << Kd << "," << Ki << endl;
    return -Kp * cte - Kd * diff_cte - Ki * int_cte;
}

