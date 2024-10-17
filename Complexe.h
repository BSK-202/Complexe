#pragma once
class Complexe
{
private:
	double re;
	double img;
public:
	Complexe();
	Complexe(double, double);
	void afficher()const;
	double module()const;
	Complexe conjugue()const;
	Complexe operator +(const Complexe&) const;
	Complexe operator +(double)const;
	Complexe operator - (const Complexe&) const;
	Complexe operator -(double)const;
	Complexe operator *(const Complexe&) const;
	Complexe operator *(double)const;
	Complexe operator /(const Complexe&)const;
	bool operator==(const Complexe&)const;

};
