#include <stdio.h>
 
struct Point {
    int x, y,z;
};
 
int main()
{
    struct Point p1 = { 0, 1,6};
 
    // Accessing members of point p1
    //p1.x = 20;
    printf("y = %d, x = %d,z= %d", p1.y, p1.x,p1.z);
 
    return 0;
}