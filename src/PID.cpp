#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {

  PID::Ki = Ki;
  PID::Kd = Kd;
  PID::Kp = Kp;

  PID::p_error = 0;
  PID::i_error = 0;

  PID::best_error = 0.1;
  PID::dp = {1,1,1};

}

void PID::UpdateError(double cte) {

  PID::d_error = cte - PID::p_error;
  PID::p_error = cte;
  PID::i_error += cte;

}

double PID::TotalError() {

  return PID::i_error + PID::p_error + PID::d_error;

}
