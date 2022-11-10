// ******************PRINTING HELLO WORLD IN C++***********************

// #include <iostream>

// int main() {
//     std::cout<<"Hello World";

//     return 0;
// }

// *****************SUM OF TWO USER INPUT NUMBER*********************
// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2;

//     cout<<"Enter the value of num1:\n";
//     cin>>num1;

//     cout<<"Enter the value of num2:\n";
//     cin>>num2;

//     cout<<"The sum is "<<num1+num2;

//     return 0;
// }

// *********************PRINTING MULTIPLICATION TABLE******************
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cout<<"Enter the number for multiplication table"<<endl;
//     cin>>n;

//     for(int i=1;i<=10;i++) {
//         m=n*i;
//         cout<<n<<" x "<<i<<" = "<<m<<endl;
//     }

//     return 0;
// }

// *******************PRINTING AN ARRAY WITH WHILE AND DO WHILE LOOP********************
// #include <iostream>

// using namespace std;

// int main() {
//     int arr[5]={10,20,30,40,50};
//     int i=0, j=0;

//     cout<<"Array printing using while loop"<<endl;
//     while(i<5) {
//         cout<<"The value at "<<i<<" index is "<<arr[i]<<endl;
//         i++;
//     }

//     cout<<endl;

//     cout<<"Array printing using do while loop"<<endl;
//     do {
//         cout<<"The value at "<<j<<" index is "<<arr[j]<<endl;
//         j++;
//     }while(j<5);

//     return 0;
// }

// *****************SWAP TWO VARIABLE USING POINTER*************************
// #include <iostream>
// using namespace std;
// void swapptr(int* x, int* y) {
//     int temp;

//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a, b;
//     a = 10, b = 20;

//     cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
//     swapptr(&a,&b);
//     cout<<"The value of a is "<<a<<" and b is "<<b<<endl;

//     return 0;
// }

// *****************SWAP TWO VARIABLE USING REFERENCE VARIABLE*************************
// #include <iostream>
// using namespace std;
// void swaprefernce(int &x, int &y) {
//     int temp;

//     temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int a, b;
//     a = 10, b = 20;

//     cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
//     swaprefernce(a,b);
//     cout<<"The value of a is "<<a<<" and b is "<<b<<endl;

//     return 0;
// }

// **********************FACTORIAL OF NUMBER USING RECURSIVE FUNCTION**********************
// #include <iostream>
// using namespace std;

// int factorial(int number) {

//     if (number<=1) {
//         return 1;
//     }

//     return number * factorial(number-1);
// }

// int main() {
//     int n;

//     cout<<"Enter the number for factorial"<<endl;
//     cin>>n;

//     cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;

//     return 0;
// }

// *************************CALCULATING & ORINTING THE FIBONACCI SERIES TILL USER INPUT NUMBER BY RECURIVE FUNCTION*******************
// #include <iostream>
// using namespace std;

// int fib(int number) {

//     if (number==1) {
//         return 1;
//     }
//     if (number==0) {
//         return 0;
//     }

//     return (fib(number-1) + fib(number-2));
// }

// int main() {
//     int n;

//     cout<<"Enter the index of fibonacci series"<<endl;
//     cin>>n;

//     cout<<"The fibonacci series till "<<n<<" is: "<<endl;
//     for(int i=0;i<=n;i++) {
//         cout<<fib(i)<<" ";

//     }

//     return 0;
// }

// *********************EXAMPLE OF CLASSES, PRIVATE & PUBLIC VARIABLES IN CLASSES***************************
// #include <iostream>
// using namespace std;

// class employee {
//     private:
//     int a, b, c;

//     public:
//     int d, e;

//     void setdata(int a1, int b1, int c1);
//     void getdata(){
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;
//     }
// };

// void employee :: setdata(int a1, int b1, int c1) {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main() {
//     employee yogi;
//     yogi.d = 8;
//     yogi.e = 7;
//     yogi.setdata(15,20,25);
//     yogi.getdata();

//     return 0;
// }

// ************************THIS IS THE CLASS WHICH TAKES INPUT OF BINARY NUMBER, CHECK THE NUMBER AND DISPLAY MAKES THE NUMBER 0 TO 1 & 1 TO 0**************************
// #include <iostream>
// #include <string>
// using namespace std;

// class binary {
//     string s;
//     public:
//     void inputstr(void);
//     void checkbinary(void);
//     void swap0to1(void);
//     void display(void);

// };

// void binary :: inputstr(void) {
//         cout<<"Enter a number to check for binary: "<<endl;
//         cin>>s;
//     }
// void binary :: checkbinary(void) {
//         for(int i=0;i<s.length();i++){
//             if (s.at(i) != '0' && s.at(i) != '1') {
//                 cout<<"Invalid binary number"<<endl;
//                 exit(0);
//             }
//         }
//     }
// void binary :: swap0to1(void) {
//     for (int i=0; i<s.length();i++) {
//         if (s.at(i)=='0') {
//             s.at(i)='1';
//         }
//         else {
//             s.at(i)='0';
//         }
//     }
// }
// void binary :: display(void) {
//     cout<<"Your binary number is:"<<endl;
//     for(int i=0;i<s.length();i++) {
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }

// int main() {
//     binary e1;
//     e1.inputstr();
//     e1.checkbinary();
//     e1.display();
//     e1.swap0to1();
//     e1.display();

//     return 0;
// }

// *************THIS IS A EXAMPLE OF FRIEND FUNCTION WHICH TAKES INPUT OF PRIVATE MEMBER OF 2 CLASSES AND RETURN THEIR SUM***************************
// #include <iostream>
// using namespace std;

// class Y;

// class X {
//     int a;
//     friend void sum(X, Y);
//     public:
//         void setval1(int val1) {
//             a=val1;
//         }
// };

// class Y {
//     int b;
//     friend void sum(X, Y);
//     public:
//         void setval2(int val2) {
//             b=val2;
//         }
// };

// void sum(X o1, Y o2) {
//     cout<<"The sum of number is "<<(o1.a+o2.b);
// }

// int main() {
//     X x1;
//     x1.setval1(3);
//     Y x2;
//     x2.setval2(2);

//     sum(x1, x2);

//     return 0;
// }

// ***********************INT THIS THE CLASS WILL BE FRIEND OF TWO FUNCTION AND WILL SHARE THE PRIVATE MEMBER BY FRIEND FUNCTION***************
// #include <iostream>
// using namespace std;

// class Y;

// class X
// {
//     int m1;
//     friend int multiply(X, Y);
//     friend int add(X, Y);

// public:
//     void getm1()
//     {
//         int n1;
//         cout << "Enter first number " << endl;
//         cin >> n1;
//         m1 = n1;
//     }
// };

// class Y
// {
//     int m2;
//     friend int multiply(X, Y);
//     friend int add(X, Y);

// public:
//     void getm2()
//     {
//         int n2;
//         cout << "Enter second number: " << endl;
//         cin >> n2;
//         m2 = n2;
//     }
// };

// int multiply(X o1, Y o2)
// {
// cout << "The multiplication of both number is " << (o1.m1 * o2.m2)<<endl;;
// }

// int add(X o1, Y o2)
// {
//     cout<<"The addition of both number is " << (o1.m1 + o2.m2)<<endl;
// }

// int main()
// {
//     X a;
//     a.getm1();
//     Y b;
//     b.getm2();

//     multiply(a, b);
//     add(a, b);

//     return 0;
// }

// **************************THIS IS AN EXAMPLE OF CONSTRUCTOR WHICH INVOKES A & B IN CLASS FUNCTION INSELF************************************
// #include <iostream>
// using namespace std;

// class add
// {
//     int a;
//     int b;

// public:
//     add(void);

//     printadd() {
//         cout<<"The addition of "<<a<<" and b "<<b<<" is: "<<a+b<<endl;
//     }
// };

// add :: add(void)
// {
//     a=50;
//     b=100;
// }

// int main()
// {
//     add a;
//     a.printadd();

//     return 0;
// }

// *********************THIS IS AN EXAMPLE OF PERAMETERIZED CONSTRUCTOR (IMPLICIT CALL & EXPLICIT CALL)******************************
// #include <iostream>
// using namespace std;

// class add
// {
//     int a;
//     int b;

// public:
//     add(int, int);

//     printadd() {
//         cout<<"The addition of "<<a<<" and b "<<b<<" is: "<<a+b<<endl;
//     }
// };

// add :: add(int x, int y)
// {
//     a=x;
//     b=y;
// }

// int main()
// {
//     add a(30,20); //Implicit call
//     a.printadd();

//     add b = add(50,100); //Explicit call
//     b.printadd();

//     return 0;
// }

// ***************************THIS IS THE CODE WHICH CALCULATE THE DISTANCE BETWEEN 2 POINTS**************************
// #include <iostream>
// #include <math.h>
// using namespace std;

// class point {
//     int x;
//     int y;
//     friend float distance(point ,point);

//     public:
//         point(int a, int b){
//             x=a;
//             y=b;
//         }

//         void display() {
//             cout<<"The point is "<<x<<" & "<<y<<endl;
//         }

// };

// float distance(point c, point d) {
//     int diffc, diffd, ans;
//     diffc = (c.x-d.x);
//     diffd = (c.y-d.y);

//     ans = sqrt(pow(diffc, 2) + pow(diffd, 2));

//     cout<<"The distance of two point is "<<ans<<endl;

// }

// int main() {
//     point ob1(1,1);
//     ob1.display();

//     point ob2(1,1);
//     ob2.display();

//     distance(ob1,ob2);

//     return 0;
// }

// *****************************THIS IS AN EXAMPLE OF COPY CONSTRUCTOR********************************
// #include <iostream>
// using namespace std;

// class number{
//     int a;

//     public:
//         number () {}
//         number(int num) {
//             a=num;
//         }
//         number (number &obj) {
//             cout<<"This is copy constructor"<<endl;
//             a=obj.a;
//         }
//         display() {
//             cout<<"The number is "<<a<<endl;
//         }

// };

// int main() {
//     number x(5);
//     x.display();
//     number y(100);
//     y.display();

//     number z(y);
//     z.display();

//     return 0;
// }

//**********************THIS IS A EXAMPLE OF CLASS WHICH IS HAVING A CONSTRUCTOR AS WELL AS DISTRUCTUR*****************************
// #include <iostream>
// using namespace std;

// int count=0;

// class demo{

//     public:
//         demo() {
//             cout<<"This is a constructor for the number "<<count<<endl;
//             count++;
//         }
//         ~demo() {
//             count--;
//             cout<<"This is a distructor for the number "<<count<<endl;
//         }
// };

// int main() {
//     cout<<"We are in main fuction..."<<endl;
//     demo a1;
//     {
//         cout<<"We are at inner scope..."<<endl;
//         demo a2, a3;
//         cout<<"Exiting inner scope..."<<endl;
//     }

//     cout<<"On the way to exit the whole code..."<<endl;

//     return 0;
// }

// ************************THIS IS AN EXAMPLE OF SINGLE INHERITANCE BY PRIVATE VISIBILITY MODE**************************
// #include <iostream>
// using namespace std;

// class base
// {
//     int data1;

// public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };

// void base ::setdata()
// {
//     data1 = 10;
//     data2 = 20;
// }

// int base ::getdata1()
// {
//     return data1;
// }

// int base ::getdata2()
// {
//     return data2;
// }

// class derived : base
// {
// public:
//     int data3;
//     int setprocess();
//     void display();
// };

// int derived ::setprocess()
// {
//     setdata();
//     data3 = data2 * getdata1();
// }

// void derived ::display()
// {
//     cout << "The data 1 is " << getdata1() << endl;
//     cout << "The data 2 is " << getdata2() << endl;
//     cout << "The data 3 is " << data3 << endl;
// }

// int main()
// {
//     derived ob1;

//     ob1.setprocess();
//     ob1.display();

//     return 0;
// }


// ****************THIS IS AN EXAMPLE OF SINGLE INHERITANCE CLASS WHICH HAS TWO CLASS EMPLOYEE ----> SALARY**************************
// #include <iostream>
// using namespace std;

// class employee {
//     public:
//         int id;
//         string name;
//         void getdata();
// };

// void employee :: getdata() {
//     cout<<"Enter your id"<<endl;
//     cin>>id;
//     cout<<"Enter your name"<<endl;
//     cin>>name;
// }

// class salary : public employee {
//    public: 
//     int basicsal, dearnessall, travelall, providentf, netsalary;
//     void getdatasalary();
//     int calculate_salary();
//     void display();
// };

// void salary :: getdatasalary() {
//     cout<<"Enter your basic salary"<<endl;
//     cin>>basicsal;
//     cout<<"Enter your dearness allowance"<<endl;
//     cin>>dearnessall;
//     cout<<"Enter your travel allowance"<<endl;
//     cin>>travelall;
//     cout<<"Enter your provident fund"<<endl;
//     cin>>providentf;
// }

// int salary :: calculate_salary() {
//     netsalary = basicsal + dearnessall + travelall - providentf;
//     return netsalary;
// }

// void salary :: display() {
//     cout<<"The name of employee is "<<name<<endl;
//     cout<<"The id of employee is "<<id<<endl;
//     cout<<"The basic salary of employee is "<<basicsal<<endl;
//     cout<<"The net drawn salary of employee is "<<netsalary<<endl;
// }


// int main() {

//     salary e[3];
//     for (int i=0; i<3; i++) {
//         cout<<"Enter the data of employee no. "<<i+1<<endl;
//         e[i].getdata();
//         e[i].getdatasalary();
//         e[i].calculate_salary();
//         cout<<endl;
//     }

//     for (int i=0;i<3;i++) {
//         cout<<"Information of employee no. "<<i+1<<" is"<<endl;
//         e[i].display();
//         cout<<endl;
//     }
    
//     return 0;
// }


//************************THIS IS AN EXAMPLE OF MULITPLE INHERITANCE WHICH HAS TWO CLASSES(SIMPLE CLACULATOR & SCIENTIFIC CALCULATOR) AND THE HYBRID CALCULATOR IS DERIVED FROM TWO CLASSES********************
// #include <iostream>
// #include <math.h>
// using namespace std;

// class simple_calculator {
//     protected:
//         float num1;
//         float num2;
//     public:
//         void getnum(float, float);
//         void shownum();
// };

// void simple_calculator :: getnum(float a, float b) {
//     num1=a;
//     num2=b;
// }

// void simple_calculator :: shownum() {
//     cout<<"The addition of both number is "<<num1+num2<<endl;
//     cout<<"The substraction of both number is "<<num1-num2<<endl;
//     cout<<"The multiplication of both number is "<<num1*num2<<endl;
//     cout<<"The division of both number is "<<num1/num2<<endl;
// }

// class scientific_calculator {
//     protected:
//         float num3;
//         float num4;
//     public:
//         void getnum1(float,float);
//         void shownum1();
// };

// void scientific_calculator :: getnum1(float c, float d) {
//     num3=c;
//     num4=d;
// }

// void scientific_calculator :: shownum1() {
//     cout<<"The power 2 of both numbers are "<<pow(num3,2)<<" and "<<pow(num4,2)<<endl;
//     cout<<"The sqaure root of both number are "<<sqrt(num3)<<" and "<<sqrt(num4)<<endl;
// }

// class hybrid_calculator : public simple_calculator, public scientific_calculator {

// };

// int main() {
//     hybrid_calculator nums;

//     nums.getnum(10,20);
//     nums.shownum();
//     nums.getnum1(10,20);
//     nums.shownum1();

//     return 0;
// }


// ***********CALCULATOR USING SWITCH CASE*****************
// #include <iostream>
// using namespace std;

// int main() {
    
//     int a,b;

//     cout<<"Enter the value of a "<<endl;
//     cin>>a;

//     cout<<"Enter the value of b "<<endl;
//     cin>>b;

//     char op;
//     cout<<" Enter the operation you want to perform"<<endl;
//     cin>>op;

//     switch (op)
//     {
//     case '+': cout<<(a+b)<<endl;
//         break;

//     case '-': cout<<(a-b)<<endl;
//         break;

//     case '*': cout<<(a*b)<<endl;
//         break;

//     case '/': cout<<(a/b)<<endl;
//         break;

//     case '%': cout<<(a%b)<<endl;
//         break;
    
//     default: cout<<"Enter valid operation"<<endl;
//         break;
//     }


//     return 0;
// }


// ******FORMULA OF nCr USING FUNCTION*************

// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;

//     for(int i=1;i<=n;i++) {
//         fact = fact * i;
//     }
    
//     return fact;
// }

// int nCr(int n, int r) {

//     int nume = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return nume/denom;
// }

// int main() {
    
//     int n, r;
//     cout<<"Enter value of n & r"<<endl;

//     cin>> n >> r;

//     cout<<"The answer is "<<nCr(n,r)<<endl;


//     return 0;
// }


//**********GET MAXIMUM AND MINIMUM NUMBER IN ARRAY***************** 
// #include <iostream>
// using namespace std;

// int getMax(int arr[], int n) {

//     int max = INT64_MIN;

//     for (int i=0;i<n;i++) {
//         if (arr[i]>max) {
//             max = arr[i];
//         }
//     }

//     return max;

// }

// int getMin(int arr[], int n) {

//     int min = INT64_MAX;

//     for (int i=0;i<n;i++) {
//         if (arr[i]<min) {
//             min = arr[i];
//         }
//     }

//     return min;

// }

// int main() {
    
//     int size;
//     cout<<"Hello"<<endl;
//     cin>>size;

//     int arr[100];

//     for (int i=0;i<size;i++) {
//         cin>>arr[i];
//     }

//     cout<<"The maximum is "<<getMax(arr, size)<<endl;
//     cout<<"The minimum is "<<getMin(arr, size)<<endl;

//     return 0;
// }


// ********** FIND UNIQUE VALUE IN AN ARRAY*********
// #include <iostream>
// using namespace std;

// int main() {
    
//     int arr[11] = {5,9,6,8,9,5,6,4,4,8,7};
//     int n = 0;

//     while (n<11) {
//         int num = arr[n];
//         int count = 0;

//         for (int i=0; i<11; i++) {
//             if (num == arr[i]) {
//                 count++;
//             }
//         }

//         if (count==1) {
//             cout<<num<<endl;
//         }

//         n++;
//     }

//     return 0;
// }


