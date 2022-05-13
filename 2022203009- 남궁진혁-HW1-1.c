#include <stdio.h>
int main(void)                                                     // 2022203009 남궁진혁
{
	double x1, x2, x3, y1, y2, y3;                          // 처음 입력할 좌표 변수 선언
	double S, s, a, b, c, d;                                     //정수 변환 전 좌표 담을 변수 선언 (삼각형 넓이 계산용 좌표)
	double K, k, e, f, g, h;                                    //정수 변환 후 좌표 담을 변수 선언 (삼각형 넓이 계산용 좌표)
	double err;                                                     // 오차 변수 선언
	int x_1, x_2, x_3, y_1, y_2, y_3;   //정수 변환 좌표 변수 선언

	printf("첫 번째 좌표 입력: ");
	scanf_s("%lf %lf", &x1, &y1);

	printf("두 번째 좌표 입력: ");
	scanf_s("%lf %lf", &x2, &y2);

	printf("세 번째 좌표 입력: ");
	scanf_s("%lf %lf", &x3, &y3);

	//x2,y2를 원점으로 옮기고 계산 시작(밑에 식은  x1, y1, x3, y3도 옮기는 과정)
	a = x1 - x2;        
	b = y3 - y2;
	c = x3 - x2;
	d = y1 - y2;

	s = 0.5*((a * b) - (c * d)) ;   // 삼각형 넓이 계산
	 
	S = s * s;                             // 삼각형 넓이 제곱 계산

	printf("삼각형 넓이의 제곱 계산:%f \n", S);

	x_1 = (int)x1, x_2 = (int)x2, x_3 = (int)x3, y_1 =(int) y1, y_2 = (int)y2, y_3 = (int)y3;         //처음에 입력한 좌표 정수형 변환

	//위와 같이 x_2, y_2를 원점으로 옮기고 계산 시작(밑에 식은  x_1, y_1, x_3, y_3도 옮기는 과정)
	e = x_1 - x_2;
	f = y_3 - y_2;
	g = x_3 - x_2;
	h = y_1 - y_2;

	k = 0.5*((e * f) - (g * h));      //정수 변환후 삼각형 넓이 구하는 과정
	
	K = k * k;                               //정수 변환후 삼각형 넓이 제곱 구하기

	printf("좌표의 정수 변환후 삼각형 넓이의 제곱 계산:%f \n", K);

	err = S - K;             //오차 계산

	printf("삼각형 넓이의 오차:%f \n", err);   

    return 0;
}