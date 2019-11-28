#include <math.h>


/*!
������ �������� ���������
\param b, c ������������ ������ � ������� ������� ��������������
\param x ������� ����� �������� ����(���� ���������� � ������������)
\return 0 - ��� ������� 
\return 1 - ���������� ������������ ������� 
\return 3 - ���������� ����� ������� 
\return -1 - � ������ ������(NAN, inf, nullptr)
*/
int solveLinear(double b, double c, double *x);
/*!
������ ���������� ���������
\param a, b, c ������������ ������, ������ � ������� ������� ��������������
\param x1, x2 ������� ����� �������� ����(���� ����������)
\return 0 - ��� ������� 
\return 1 - ���������� ������������ �������
\return 2 - ���������� ��� �������
\return 3 - ���������� ����� ������� 
\return -1 - � ������ ������(NAN, inf, nullptr)
*/
int solveSquare(double a, double b, double c, double *x1, double *x2);