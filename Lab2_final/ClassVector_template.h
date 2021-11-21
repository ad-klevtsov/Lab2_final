#pragma once
#include <iostream>
#include <string>
#include <complex>

template <typename T>
class vector {
private:
	size_t size;
	T* v;
public:
	vector() { //basic
		size = 0;
		v = NULL;
	}

	vector(const size_t size) {  //parametric
		this->size = size;
		v = new T[size];
		for (size_t i = 0; i < size; i++) {
			v[i] = 0;
		}
	}

	vector(const vector& vec) {   //copy
		size = vec.size;
		v = new T[size];
		for (size_t i = 0; i < vec.size; i++)
		{
			v[i] = vec.v[i];
		}
	}

	size_t  GetSize() const
	{
		return size;
	}

	T& operator[] (const size_t index)
	{
		if (index > size) throw ("Invalid index");
		return v[index];
	}

	T  operator[] (const size_t index) const
	{
		if (index > size) throw("Invalid index");
		return v[index];
	}

	vector<T>  operator+= (const vector& vec)
	{
		if (size != vec.size) throw("Different sizes");
		for (size_t i = 0; i < size; i++)
		{
			v[i] += vec.v[i];
		}
		return *this;
	}

	vector<T>  operator+ (const vector& vec)
	{
		if (size != vec.size) throw("Different sizes");
		vector tmp(*this);
		tmp += vec;
		return tmp;
	}

	vector<T>& operator= (const vector& vec)
	{
		if (this == &vec) return *this;
		if (size != vec.size)
		{
			delete[] v;
			size = vec.size;
			v = new T[size];
			for (size_t i = 0; i < size; i++)
			{
				v[i] = vec.v[i];
			}
			return *this;
		}
		else
		{
			for (size_t i = 0; i < size; i++)
			{
				v[i] = vec.v[i];
			}
			return *this;
		}
	}

	vector<T>  operator-= (const vector& vec)
	{
		if (size != vec.size) throw("Different sizes");
		for (size_t i = 0; i < size; i++)
		{
			v[i] -= vec.v[i];
		}
		return *this;
	}


	vector<T>  operator- (const vector& vec)
	{
		if (size != vec.size) throw("Different sizes");
		vector tmp(*this);
		tmp -= vec;
		return tmp;
	}

	T  operator* (const vector& vec)
	{
		if (size != vec.size) throw("Different sizes");
		T result = 0;
		for (size_t i = 0; i < size; i++) {
			result += vec.v[i] * v[i];
		}
		return result;
	}

	vector<T>  operator*= (const T x) //multiplied by number
	{
		for (size_t i = 0; i < size; i++) {
			v[i] = v[i] * x;
		}
		return *this;
	}

	vector<T>  operator* (const T x)  //multiplied by number
	{
		vector tmp = *this;
		tmp *= x;
		return tmp;
	}

	vector<T>  operator/= (const T x)
	{
		if (x == T(0)) throw("Invalid denominator");
		for (size_t i = 0; i < size; ++i) {
			v[i] /= x;
		}
		return *this;
	}

	vector<T>  operator/ (const T x)
	{
		if (x == T(0)) throw("Invalid denominator");
		vector tmp = *this;
		tmp /= x;
		return tmp;
	}

	~vector()
	{
		delete[] v;
	}

	friend std::ostream& operator<< (std::ostream& out, const vector<T>& vec)
	{
		out << "Size:" << vec.GetSize() << std::endl;
		for (size_t i = 0; i < vec.GetSize(); i++)
		{
			out << vec[i] << std::endl;
		}
		return out;
	}

	std::complex<float> operator* (const vector<std::complex<float>>& vec) const
	{
		if (vec.size != size) throw "Different sizes\n";
		std::complex<float> result = 0;
		for (size_t i = 0; i < size; i++)
		{
			float real = v[i].real() * vec[i].real();
			float imag = (-1) * v[i].imag() * vec[i].imag();
			result += std::complex<float>(real,imag);
		}
		return result;
	}

	std::complex<double> operator* (const vector<std::complex<double>>& vec) const
	{
		if (vec.size != size) throw "Different sizes\n";
		std::complex<double> result = 0;
		for (size_t i = 0; i < size; i++)
		{
			double real = v[i].real() * vec[i].real();
			double imag = (-1) * v[i].imag() * vec[i].imag();
			result += std::complex<double>(real,imag);
		}
		return result;
	}

};