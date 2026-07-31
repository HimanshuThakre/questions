// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     int a;
//     long b;
//     char c;
//     float d;
//     double f;
    
//     cin >> a >> b >> c >> d  >> f ;
//     cout << a << endl << b << endl << c << endl << d << endl << f ;
//     // Complete the code.
//     return 0;
// }
#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int i;
    long l;
    char c;
    float f;
    double d;


    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna