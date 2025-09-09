// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,temp;
//     cout<<"enter two number";
//     cin>>a>>b;

//     cout <<"before swapping:a="<<a<<",b"<<b<<endl;

//     temp = a;
//     a = b;
//     b = temp;
//     cout <<"after swapping: a ="<<a<<",b ="<<b<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "Before swapping: a = " << a << ", b = " << b << endl;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "After swapping: a = " << a << ", b = " << b << endl;

//     return 0;
// }

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

