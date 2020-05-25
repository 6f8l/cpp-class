#include <complex>
#include <iostream>
#include <memory>

using namespace std;

int main() {
  using cplx = complex<double>;

  cplx *a = new cplx(1., 2.);
  cplx *b = new cplx(9., 8.);

  shared_ptr<cplx> pa = make_shared<cplx>(*a);
  shared_ptr<cplx> pb = make_shared<cplx>(*b);

  cout << "入力値: ";
  cout << "a=" << *pa;
  cout << ", b=" << *pb << endl;
  shared_ptr<cplx> pc = make_shared<cplx>((*pa).real() + (*pb).real(),
                                          (*pa).imag() + (*pb).imag());
  cout << "出力値: ";
  cout << *pc << endl;
  return 0;
}