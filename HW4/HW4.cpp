//#include <iostream>
//#include <iomanip>
//using namespace std;

//int main() {
//    setlocale(0, "");
//    char b[5] = "Only";
//    float x[2] = { 44.0, -24.1 };
//    cout << "Адреса массива b[5]:" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << "b[" << i << "] = '" << b[i] << "' по адресу: "
//            << static_cast<void*>(&b[i]) << endl;
//    }
//    cout << "\nАдреса массива x[2]:" << endl;
//    for (int i = 0; i < 2; i++) {
//        cout << "x[" << i << "] = " << x[i] << " по адресу: "
//            << &x[i] << endl;
//    }
//}
// 
//int main() {
//    setlocale(0, "");
//    int* p1 = (int*)0xF100;
//    double* p2 = (double*)0xF2CC;
//    cout << hex;
//    cout << "Исходные значения:" << endl;
//    cout << "p1 = " << p1 << endl;
//    cout << "p2 = " << p2 << endl;
//    cout << "\nПосле операций:" << endl;
//    p1 = (int*)0xF100;
//    p1 = p1 + 2;
//    cout << "a. p1 + 2 = " << p1 << endl;
//    p1 = (int*)0xF100;
//    p1 = p1 - 2;
//    cout << "b. p1 - 2 = " << p1 << endl;
//    p2 = (double*)0xF2CC;
//    p2 = p2 + 2;
//    cout << "c. p2 + 2 = " << p2 << endl;
//    p2 = (double*)0xF2CC;
//    p2 = p2 - 2;
//    cout << "d. p2 - 2 = " << p2 << endl;
//
//}
// 
//int main() {
//    setlocale(0, "");
//    short* i = (short*)0xF400;
//    float* x = (float*)0xBBB0;
//    short* p1 = (short*)0xF410;
//    float* p2 = (float*)0xBBC0;
//    cout << "Массив i[]:" << endl;
//    cout << "i[0] = " << i << endl;
//    cout << "p1 = " << p1 << endl;
//    cout << "Разница в байтах: " << (char*)p1 - (char*)i << endl;
//    cout << "Индекс: " << (p1 - i) << endl;
//    cout << "\nМассив x[]:" << endl;
//    cout << "x[0] = " << x << endl;
//    cout << "p2 = " << p2 << endl;
//    cout << "Разница в байтах: " << (char*)p2 - (char*)x << endl;
//    cout << "Индекс: " << (p2 - x) << endl;
//}

//#include<iostream>
//#include<stdlib.h>
//using namespace std;  // Исправлено: добавлен пробел между using и namespace
//
//int main() {
//    int a = 2, b = 3, c = 4;
//    float d = 8.5;
//    int* ptr1 = &a, * ptr2 = &b;  // Исправлено: добавлено * перед ptr2
//    float* x, y = 3.5;           // x - указатель на float, y - обычная переменная
//    void* ptr;
//
//    cout << "Enter b = " << endl;
//    cin >> b;                    // Исправлено: ввод в переменную b, а не в указатель ptr2
//    cout << "ptr1 = " << ptr1 << "\t*ptr1 = " << *ptr1 << "\tptr2 = " << ptr2 << "\t*ptr2 = " << *ptr2 << endl;
//    // Исправлено: "\*tptr2" заменено на "\t*ptr2" для правильного вывода табуляции и значения
//
//    *(ptr2) = 15;               // Исправлено: убрано +1 (ptr2 указывает на b, записываем 15 в b)
//    cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
//
//    x = &y;                     // Указатель x теперь указывает на переменную y
//    cout << "x = " << x << "\t*x = " << *x << "\ty = " << y << endl;
//
//    ptr = x;
//    // *ptr = 45;               // УДАЛЕНО: нельзя разыменовывать void* указатель без приведения типа
//    *(float*)ptr = 45;          // Исправлено: приведение типа void* к float* перед разыменованием
//    cout << "ptr = " << ptr << "\t*(float*)ptr = " << *(float*)ptr << "\tx = " << x << "\t*x = " << *x << "\ty = " << y << endl;
//    // Исправлено: добавлено приведение типа для вывода значения через void* указатель
//}
//
//int main() {
//    setlocale(0, "");
//    int A[10] = { 45, -84, 1, 5, 8, 35, 0, 76, -23, 90 };
//
//    cout << "Початковий масив:" << endl;
//    for (int i = 0; i < 10; i++) {
//        cout << *(A + i) << " ";
//    }
//    cout << endl;
//    int* first = A;
//    int* last = A + 9;
//    int temp = *first;
//    *first = *last;
//    *last = temp;
//    cout << "\nМасив після обміну:" << endl;
//    for (int i = 0; i < 10; i++) {
//        cout << *(A + i) << " ";
//    }
//    cout << endl;
//}
//


//#include <iostream>
//using namespace std;
//
//void mysmpg(float& x, float& y) {
//    cout << "В середине" << &x << " " << &y << endl;
//    float buf = x;
//    x = y;
//    y = buf;
//}
//
//int main()
//{
//    setlocale(0, "");
//    float a = 0;
//    float b = 0;
//    cout << "Введите два числа" << endl;
//    cin >> a >> b;
//
//    cout << "В главной функцие" << &a << " " << &b << endl;
//    mysmpg(a, b);
//    cout << a << " " << b << endl;
//}

#include <iostream>
#include <cmath>
using namespace std;

//void RectPS(int x1, int y1, int x2, int y2, int* P, int* S) {
//    int a = abs(x2 - x1);
//    int b = abs(y2 - y1);
//    *P = 2 * (a + b);
//    *S = a * b;
//}
//
//int main() {
//    setlocale(0, "");
//    for (int i = 0; i < 3; i++) {
//        int x1, x2, y1, y2;
//        int p = 0, s = 0;
//        cout << "Введіть координати першої точки: ";
//        cin >> x1 >> y1;
//        cout << "Введіть координати другої точки: ";
//        cin >> x2 >> y2;
//        RectPS(x1, y1, x2, y2, &p, &s);
//        cout << "Периметр: " << p << endl;
//        cout << "Площа: " << s << endl;
//        cout << "-------------------" << endl;
//    }
//}

void Tres(int D, int& K) {
	K = K * 10 + D;}
int main() {
	int uno = 123;
	int dos = 5;
	Tres(dos, uno);
	Tres(1, uno);
	Tres(9, uno);
	cout << uno;}
