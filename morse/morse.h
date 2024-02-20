#ifndef __MORSE_H__
#define __MORSE_H__





class Morse {
private:
  static int pin;
  static int time_unit;
public:
  static void set_pin(int _pin);
  static void set_time_unit(int _time_unit);
  static int get_pin();
  static int get_time_unit();

  static void plot_string(String _s);
  static void plot_string(const char* _s);
  static void plot_char(char _c);

  static void dot();
  static void dash();
  static void pause();
  static void space();
  static void halt();

  static void a();
  static void b();
  static void c();
  static void d();
  static void e();
  static void f();
  static void g();
  static void h();
  static void i();
  static void j();
  static void k();
  static void l();
  static void m();
  static void n();
  static void o();
  static void p();
  static void q();
  static void r();
  static void s();
  static void t();
  static void u();
  static void v();
  static void w();
  static void x();
  static void y();
  static void z();

  static void one();
  static void two();
  static void three();
  static void four();
  static void five();
  static void six();
  static void seven();
  static void eight();
  static void nine();
  static void zero();
};





int Morse::pin = 13;

int Morse::time_unit = 100;

void Morse::set_pin(int _pin) {
  Morse::pin = _pin;
}

void Morse::set_time_unit(int _time_unit) {
  Morse::time_unit = _time_unit;
}

int Morse::get_pin() {
  return Morse::pin;
}

int Morse::get_time_unit() {
  return Morse::time_unit;
}





void Morse::plot_string(String _s) {
  Morse::plot_string( _s.c_str() );
}

void Morse::plot_string(const char* _s) {
  int i = 0;
  while( _s[i] != '\0' ) {
    Morse::plot_char( _s[i] );
    ++i;
  }
}





void Morse::plot_char(char _c) {
  switch (_c){
  case 'a':
  case 'A':
    Morse::a();
    break;
  case 'b':
  case 'B':
    Morse::b();
    break;
  case 'c':
  case 'C':
    Morse::c();
    break;
  case 'd':
  case 'D':
    Morse::d();
    break;
  case 'e':
  case 'E':
    Morse::e();
    break;
  case 'f':
  case 'F':
    Morse::f();
    break;
  case 'g':
  case 'G':
    Morse::g();
    break;
  case 'h':
  case 'H':
    Morse::h();
    break;
  case 'i':
  case 'I':
    Morse::i();
    break;
  case 'j':
  case 'J':
    Morse::j();
    break;
  case 'k':
  case 'K':
    Morse::k();
    break;
  case 'l':
  case 'L':
    Morse::l();
    break;
  case 'm':
  case 'M':
    Morse::m();
    break;
  case 'n':
  case 'N':
    Morse::n();
    break;
  case 'o':
  case 'O':
    Morse::o();
    break;
  case 'p':
  case 'P':
    Morse::p();
    break;
  case 'q':
  case 'Q':
    Morse::q();
    break;
  case 'r':
  case 'R':
    Morse::r();
    break;
  case 's':
  case 'S':
    Morse::s();
    break;
  case 't':
  case 'T':
    Morse::t();
    break;
  case 'u':
  case 'U':
    Morse::u();
    break;
  case 'v':
  case 'V':
    Morse::v();
    break;
  case 'w':
  case 'W':
    Morse::w();
    break;
  case 'x':
  case 'X':
    Morse::x();
    break;
  case 'y':
  case 'Y':
    Morse::y();
    break;
  case 'z':
  case 'Z':
    Morse::z();
    break;



  case '1':
    Morse::one();
    break;
  case '2':
    Morse::two();
    break;
  case '3':
    Morse::three();
    break;
  case '4':
    Morse::four();
    break;
  case '5':
    Morse::five();
    break;
  case '6':
    Morse::six();
    break;
  case '7':
    Morse::seven();
    break;
  case '8':
    Morse::eight();
    break;
  case '9':
    Morse::nine();
    break;
  case '0':
    Morse::zero();
    break;



  case ' ':
    Morse::space();
    break;
  default:
    // Ignore char
    break;
  }
}





void Morse::dot(){
  digitalWrite(Morse::pin, HIGH);
  delay(Morse::time_unit);
  digitalWrite(Morse::pin, LOW);
  delay(Morse::time_unit);
}

void Morse::dash(){
  digitalWrite(Morse::pin, HIGH);
  delay(Morse::time_unit * 3);
  digitalWrite(Morse::pin, LOW);
  delay(Morse::time_unit);
}

void Morse::pause(){
  digitalWrite(Morse::pin, LOW);
  delay(Morse::time_unit * 3);
}

void Morse::space(){
  digitalWrite(Morse::pin, LOW);
  delay(Morse::time_unit * 7);
}

void Morse::halt() {
  digitalWrite(Morse::pin, HIGH);
  delay(Morse::time_unit * 7);
  digitalWrite(Morse::pin, LOW);
  delay(Morse::time_unit * 7);
}





void Morse::a() {
  Morse::dot();
  Morse::dash();

  Morse::pause();
}

void Morse::b() {
  Morse::dash();
  Morse::dot();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::c() {
  Morse::dash();
  Morse::dot();
  Morse::dash();
  Morse::dot();

  Morse::pause();
}

void Morse::d() {
  Morse::dash();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::e() {
  Morse::dot();

  Morse::pause();
}

void Morse::f() {
  Morse::dot();
  Morse::dot();
  Morse::dash();
  Morse::dot();

  Morse::pause();
}

void Morse::g() {
  Morse::dash();
  Morse::dash();
  Morse::dot();

  Morse::pause();
}

void Morse::h() {
  Morse::dot();
  Morse::dot();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::i() {
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::j() {
  Morse::dot();
  Morse::dash();
  Morse::dash();
  Morse::dash();

  Morse::pause();
}

void Morse::k() {
  Morse::dash();
  Morse::dot();
  Morse::dash();

  Morse::pause();
}

void Morse::l() {
  Morse::dot();
  Morse::dash();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::m() {
  Morse::dash();
  Morse::dash();

  Morse::pause();
}

void Morse::n() {
  Morse::dash();
  Morse::dot();

  Morse::pause();
}

void Morse::o() {
  Morse::dash();
  Morse::dash();
  Morse::dash();

  Morse::pause();
}

void Morse::p() {
  Morse::dot();
  Morse::dash();
  Morse::dash();
  Morse::dot();

  Morse::pause();
}

void Morse::q() {
  Morse::dash();
  Morse::dash();
  Morse::dot();
  Morse::dash();

  Morse::pause();
}

void Morse::r() {
  Morse::dot();
  Morse::dash();
  Morse::dot();

  Morse::pause();
}

void Morse::s() {
  Morse::dot();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::t() {
  Morse::dash();

  Morse::pause();
}

void Morse::u() {
  Morse::dot();
  Morse::dot();
  Morse::dash();

  Morse::pause();
}

void Morse::v() {
  Morse::dot();
  Morse::dot();
  Morse::dot();
  Morse::dash();

  Morse::pause();
}

void Morse::w() {
  Morse::dot();
  Morse::dash();
  Morse::dash();

  Morse::pause();
}

void Morse::x() {
  Morse::dash();
  Morse::dot();
  Morse::dot();
  Morse::dash();

  Morse::pause();
}

void Morse::y() {
  Morse::dash();
  Morse::dot();
  Morse::dash();
  Morse::dash();

  Morse::pause();
}

void Morse::z() {
  Morse::dash();
  Morse::dash();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}





void Morse::one() {
  Morse::dot();
  Morse::dash();
  Morse::dash();
  Morse::dash();
  Morse::dash();

  Morse::pause();
}

void Morse::two() {
  Morse::dot();
  Morse::dot();
  Morse::dash();
  Morse::dash();
  Morse::dash();

  Morse::pause();
}

void Morse::three() {
  Morse::dot();
  Morse::dot();
  Morse::dot();
  Morse::dash();
  Morse::dash();

  Morse::pause();
}

void Morse::four() {
  Morse::dot();
  Morse::dot();
  Morse::dot();
  Morse::dot();
  Morse::dash();

  Morse::pause();
}

void Morse::five() {
  Morse::dot();
  Morse::dot();
  Morse::dot();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::six() {
  Morse::dash();
  Morse::dot();
  Morse::dot();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::seven() {
  Morse::dash();
  Morse::dash();
  Morse::dot();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::eight() {
  Morse::dash();
  Morse::dash();
  Morse::dash();
  Morse::dot();
  Morse::dot();

  Morse::pause();
}

void Morse::nine() {
  Morse::dash();
  Morse::dash();
  Morse::dash();
  Morse::dash();
  Morse::dot();

  Morse::pause();
}

void Morse::zero() {
  Morse::dash();
  Morse::dash();
  Morse::dash();
  Morse::dash();
  Morse::dash();

  Morse::pause();
}





#endif //__MORSE_H__
