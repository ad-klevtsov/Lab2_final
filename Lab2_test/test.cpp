#include "pch.h"
#include <complex>
#include "../Lab2_final/ClassVector_template.h"

TEST(vector, Constructor) {
	vector<int> a;
	EXPECT_EQ(0, a.GetSize());
}

TEST(vector, Constructor_Parametric) {
	vector<std::complex<double>> a(2);
	EXPECT_EQ(2, a.GetSize());
}

TEST(vector, Constructor_Copy) {
	vector<double> a(3);
	a[0] = 1.5;
	a[1] = 2.7;
	a[2] = 3.2;
	vector<double> b = a;
	EXPECT_EQ(a[0], b[0]);
	EXPECT_EQ(a[1], b[1]);
	EXPECT_EQ(a[2], b[2]);
}

TEST(vector, Method_GetSize) {
	vector<std::complex<double>> a(3);
	EXPECT_EQ(3, a.GetSize());
}

TEST(vector, Operator_SquareBrackets) {
	vector<int> a(3);
	a[0] = 1;
	EXPECT_EQ(1, a[0]);
}

TEST(vector, Operator_SquareBrackets_Exception) {
	vector<std::complex<float>> a(3);
	EXPECT_THROW(a[-1], const char*);
}

TEST(vector, Operator_Plus) {
	vector<double> a(3);
	vector<double> b(4);
	EXPECT_THROW(a + b, const char*);
}

TEST(vector, Operator_ScalarMultiplication) {
	vector<float> a(3);
	vector<float> b(4);
	EXPECT_THROW(a * b, const char*);
}

TEST(vector, Operator_MultiplicationByNumber) {
	vector<double> a(3);
	a[0] = 1.5;
	a[1] = 1.5;
	a[2] = 1.5;
	vector<double> b = a * 2;
	EXPECT_EQ(3, b[0]);
	EXPECT_EQ(3, b[1]);
	EXPECT_EQ(3, b[2]);
}

TEST(vector, Operator_DivisionByNumber) {
	vector<int> a(3);
	a[0] = 2;
	a[1] = 2;
	a[2] = 2;
	vector<int> b = a / 2;
	EXPECT_EQ(1, b[0]);
	EXPECT_EQ(1, b[1]);
	EXPECT_EQ(1, b[2]);
}

TEST(vector, Operator_DivisionByNumber_Exception) {
	vector<int> a(3);
	a[0] = 2;
	a[1] = 2;
	a[2] = 2;
	EXPECT_THROW(a / 0, const char*);
}

TEST(vector, Operator_ScalarMultiplication_Complex) {
	vector<std::complex<double>> a(2);
	a[0] = std::complex<double>(15, 20);
	a[1] = std::complex<double>(23, 23);
	vector<std::complex<double>> b(2);
	b[0] = std::complex<double>(12, 21);
	b[1] = std::complex<double>(44, 44);
	std::complex<double> result = a * b;
	EXPECT_EQ(-240, result.real());
	EXPECT_EQ(2579, result.imag());
}