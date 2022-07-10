#include <stdio.h>
#include <math.h>
#define esp 10e-3
typedef struct Point_2D {
    double x, y;
} Point_2D;
typedef struct Circle {
    Point_2D I;
    double R;
} Circle;
double distance(Point_2D A, Point_2D B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}
int main() {
    Circle C1, C2;
    printf("Nhap xc, yc va R cua C1: "); scanf("%lf%lf%lf", &C1.I.x, &C1.I.x, &C1.R);
    printf("Nhap xc, yc va R cua C2: "); scanf("%lf%lf%lf", &C2.I.x, &C2.I.x, &C2.R);
    double d = distance(C1.I, C2.I);
    if(d < esp)  
        printf("Hai duong tron co tam trung nhau");
    else if(d - C1.R < esp || d - C2.R < esp)
        printf("Trong nhau");
    else 
        printf("Ngoai nhau");
    return 0;
}