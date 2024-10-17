#include "Complexe.h"
#include "Cmath"
#include <iostream>
using namespace std;

Complexe::Complexe()
{
    this->re = 0;
    this->img = 0;
}

Complexe::Complexe(double reel, double img)
{
    this->re = reel;
    this->img = img;
}

void Complexe::afficher() const
{
    cout << this->re << "+" << this->img << endl;

}

double Complexe::module() const
{
    return sqrt(pow(this->re, 2) + pow(this->img, 2));
}

Complexe Complexe::conjugue() const
{
    Complexe c;
    c.re = this->re;
    c.img = -this->img;
    return c;
}

Complexe Complexe::operator+(const Complexe& cmp) const
{
    Complexe autre;
    autre.re = cmp.re + this->re;
    autre.img = cmp.img + this->img;
    return autre;
}

Complexe Complexe::operator+(double opd2) const
{
    Complexe cmp;
    cmp.re = opd2 + this->re;
    cmp.img = this->img;
    return cmp;
}

Complexe Complexe::operator-(const Complexe& autre) const
{
    Complexe cmp;
    cmp.re = this->re - autre.re;
    cmp.img = this->img - autre.img;
    return cmp;
}

Complexe Complexe::operator-(double opd2) const
{
    Complexe autre;
    autre.re = this->re - opd2;
    autre.img = this->img;
    return autre;
}

Complexe Complexe::operator*(const Complexe& autre) const
{
    Complexe autre1;
    autre1.re = this->re * autre.img - this->img * autre.img;
    autre1.img = this->re * autre.img + this->img * autre.re;
    return autre1;
}

Complexe Complexe::operator*(double autre) const
{
    Complexe nv;
    nv.re = autre * this->re;
    nv.img = autre * this->img;
    return nv;
}
Complexe Complexe::operator/(const Complexe& opd2)const
{
    double denominator = opd2.re * opd2.re + opd2.img * opd2.img;
    Complexe autre;
    autre.re = (this->re * opd2.re + this->img * opd2.img) / denominator;
    autre.img = (this->img * opd2.re - this->re * opd2.img) / denominator;
    return autre;
}
bool Complexe::operator==(const Complexe& cmp)const
{
    if (cmp.re == this->re && cmp.img == this->img)
        return true;
    return false;

}