#include<stdio.h>
struct _triangle
{
float base,altitude,area;
}; 
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle t;
  printf("enter the values\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
  
}
void output(Triangle t)
{
  printf("the area of triangle %f and %f is %f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle a;
  a=input_triangle();
  find_area(&a);
  output(a);
  return 0;
  
}