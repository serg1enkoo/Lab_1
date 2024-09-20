//������ 2
#include <iostream>
#include <cmath>    // ��� ������������ �������

using namespace std;

int main() {
    // ����� �������� ������
    double a = 2;
    double b = 14.36;

    //���������� ���������� �������
    double ln_a = log(a);            // ����������� �������� a
    double cbrt_b = cbrt(b);         // ������� ����� � b
    double cos_b = cos(b);           // ������� b
    double exp_a = exp(a);           // ���������� a
    double a_pow_a = pow(a, a);      // a � ������ a

    //���������� ���������� �� ����������
    double numerator = 8.15 * cbrt_b * ln_a;
    double denominator = 24.38 * cos_b * (exp_a - a_pow_a);

    //��������� ���������� y
    double y = numerator / denominator;

    //��������� ����������
    cout << "�������� ������� y = " << y << endl;

    return 0;
}
