include <iostream>

using namespace std;

int main() {

    float a, b;

    cin >> a >> b;

    cout << "Sum = " << a + b;          
    include <iostream>
#include <iostream>
using namespace std;

int main() {

    int side;

    cin >> side;

    int perimeter = 4 * side;

    cout << "Perimeter = " << perimeter << endl;

    cout << "Double perimeter = " << perimeter;
}
#include <iostream>

#include <cmath>

using namespace std;

int main() {

    int base, power;

    cin >> base >> power;

    cout << base << "^" << power << " = "

         << pow(base, power)
}

#include <iostream>

#include <string>

using namespace std;

int main() {

    string sentence;

    getline(cin, sentence);

    cout << "You said: " << sentence;
}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if (n % 2 == 0)

        cout << n << " is even";

    else

        cout << n << " is odd";
}

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    int largest = (a > b) ? a : b;

    cout << "Largest = " << largest;
}

#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if (a > b) swap(a, b);

    if (a > c) swap(a, c);

    if (b > c) swap(b, c);

    cout << "Sorted: "

         << a << " "

         << b << " "

         << c;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int result = 5 * 4 + 2;

    cout << "Result = "

         << result;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int result = 2 + 3 * 4 / 2 - 1;

    cout << "Result = "

         << result;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int num;

    cin >> num;

    int d1 = num / 1000;

    int d2 = (num / 100) % 10;

    int d3 = (num / 10) % 10;

    int d4 = num % 10;

    cout << "Digit1 = " << d1 << endl;

    cout << "Digit2 = " << d2 << endl;

    cout << "Digit3 = " << d3 << endl;

    cout << "Digit4 = " << d4;

    return 0;
}

#include <iostream>

#include <string>

using namespace std;

int main() {

    string feedback;

    getline(cin, feedback);

    cout << "Your feedback: "

         << feedback;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    float a, b, c;

    cin >> a >> b >> c;

    float average = (a + b + c) / 3;

    cout << "Average = "

         << average;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if (n % 5 == 0)

        cout << "Divisible by 5";

    else

        cout << "Not divisible by 5";
}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if (n >= 10 && n <= 20)

        cout << n << " is in range [10,20]";

    else

        cout << n << " is not in range";

    return 0;

}

#include <iostream>

#include <string>

using namespace std;

int main() {

    string username;

    cin >> username;

    cout << "Welcome "

         << username;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int num;

    cin >> num;

    int d1 = num / 1000;

    int d2 = (num / 100) % 10;

    int d3 = (num / 10) % 10;

    int d4 = num % 10;

    cout << "Reversed = "

         << d4 << d3 << d2 << d1;

    return 0;

}

#include <iostream>

#include <cstdlib>

using namespace std;

int main() {

    int n;

    cin >> n;

    cout << "abs(" << n << ") = "

         << abs(n);

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    cout << "Name: Ahmad" << endl;

    cout << "Last Name: Molakhil";

    return 0;

}

#include <iostream>

#include <cmath>

using namespace std;

int main() {

    double n;

    cin >> n;

    double root = cbrt(n);

    cout << root << " "

         << root << " "

         << root;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    cout << "Square = "

         << n * n

         << ", Cube = "

         << n * n * n;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int x = 10;

    cout << "Address of x = "

         << &x;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    string binary = "";

    while (n > 0) {

        binary = char(n % 2 + '0') + binary;

        n /= 2;

    }

    cout << "Binary = " << binary;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {

        sum += 1.0 / i;

    }

    cout << "Sum of series = "

         << sum;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int age;

    cin >> age;

    if (age >= 18)

        cout << "You can drive";

    else

        cout << "You cannot drive";

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int a = 10;

    int b = 5;

    int c = 2;

    cout << "Without parentheses: "

         << c * b / a << endl;

    cout << "With parentheses: "

         << c * (b / a);

    return 0;

}

#include <iostream>

#include <string>

using namespace std;

int main() {

    string username, password;

    cin >> username >> password;

    if (username == "admin" && password == "1234")

        cout << "Login successful";

    else

        cout << "Login failed";

    return 0;

}

#include <iostream>

#include <iomanip>

using namespace std;

int main() {

    float f = 1.0f / 3.0f;

    double d = 1.0 / 3.0;

    cout << fixed << setprecision(8);

    cout << "float: " << f << endl;

    cout << setprecision(16);

    cout << "double: " << d;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int a = 5, b = 10;

    a = a ^ b;

    b = a ^ b;

    a = a ^ b;

    cout << "After swap: a="

         << a << ", b="

         << b;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    cout << "Result = "

         << (a + b) * c;

    return 0;

}

#include <iostream>

#include <string>

using namespace std;

int main() {

    string address;

    getline(cin, address);

    cout << "Your address: "

         << address;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    float a, b, c;

    cin >> a >> b >> c;

    float avg = (a + b + c) / 3;

    cout << "Average = "

         << avg << endl;

    if (avg > 50)

        cout << "Above average";

    else

        cout << "Below average";

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if (n >= 50 && n <= 100)

        cout << n << " is between 50 and 100";

    else

        cout << n << " is not between 50 and 100";

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if (a == 0 || b == 0 || c == 0)

        cout << "At least one number is zero";

    else

        cout << "No zero found";

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    float celsius;

    cin >> celsius;

    float fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Fahrenheit = "

         << fahrenheit;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    char ch;

    cin >> ch;

    cout << "Next character = "

         << char(ch + 1);

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    float a, b, c, d;

    cin >> a >> b >> c >> d;

    float avg = (a + b + c + d) / 4;

    cout << "Average = "

         << avg << endl;

    if (avg > 60)

        cout << "Above 60";

    else

        cout << "Below 60";

    return 0;

}

#include <iostream>

#include <string>

using namespace std;

int main() {

    string text;

    cin >> text;

    cout << "Length = "

         << text.length();

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int age = 20;

    float salary = 2500.5;

    char grade = 'A';

    cout << "Age = " << age << endl;

    cout << "Salary = " << salary << endl;

    cout << "Grade = " << grade;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    for(int i = 2; i <= 10; i += 2) {

        cout << n << " x " << i

             << " = " << n * i << endl;

    }

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    cout << "Result = "

         << (a % b) + (c % b);

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if(n >= 0 && n <= 100)

        cout << "Between 0 and 100";

    else

        cout << "Not between 0 and 100";

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if (n < 5 || n > 10)

        cout << "Number is less than 5 or greater than 10";

    else

        cout << "Number is between 5 and 10";

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    const int x = 10;

    cout << "x = " << x << endl;

    // x = 20;  // Compilation Error

    return 0;

}

#include <iostream>

#include <cfloat>

using namespace std;

int main() {

    float x = FLT_MIN;

    x = x / 1000000.0f;

    cout << "Underflow: "

         << x;

    return 0;

}

#include <iostream>

#include <cmath>

using namespace std;

int main() {

    double n;

    cin >> n;

    cout << "sqrt(" << n << ") = "

         << sqrt(n);

    return 0;

}

#include <iostream>

#include <cmath>

using namespace std;

int main() {

    double n;

    cin >> n;

    cout << "Square root of "

         << n << " = "

         << pow(n, 0.5);

    return 0;

}

#include <iostream>

#include <cmath>

using namespace std;

int main() {

    double degree;

    cin >> degree;

    double radian = degree * 3.14159265 / 180.0;

    cout << "sin(" << degree << ") = "

         << sin(radian) << endl;

    cout << "cos(" << degree << ") = "

         << cos(radian);

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int fact = 1;

    for(int i = 1; i <= 5; i++)

        fact *= i;

    cout << "Factorial of 5 = "

         << fact;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    double base, height;

    cin >> base >> height;

    double area = 0.5 * base * height;

    cout << "Area = "

         << area;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    int myVar = 10;

    int myvar = 20;

    cout << "myVar = "

         << myVar << endl;

    cout << "myvar = "

         << myvar;

    return 0;

}

#include <iostream>

using namespace std;

int main() {

    cout << "===== Good Teacher Information =====" << endl;

    cout << "Name: Dr. Ahmad" << endl;

    cout << "Specialization: Computer Science" << endl;

    cout << "Experience: 15 Years" << endl;

    cout << "Teaching Skill: Excellent" << endl;

    cout << "Professional Ethics: Very Good" << endl;

    cout << "Communication Skill: Strong" << endl;

    cout << "Leadership: Excellent" << endl;

    cout << "Responsibility: High" << endl;

    return 0;

}