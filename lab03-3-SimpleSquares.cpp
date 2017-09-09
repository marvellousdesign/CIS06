// Mary Luong - CIS 6 - Lab 3, 3 - Simple Squares 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void fact(int n) {
	int square;
	double squareRoot;
	if (n > 81) {
		return;
	}
	if (n <= 81) {
		cout << setw(3) << n << " | Square: " << setw(4) ;
		square = n * n;
		squareRoot = sqrt(n);
		cout << square << " | Square Root: " << setw(7) << squareRoot << endl;
	}
	fact(n + 1);
}

int main() {
	fact(1);

}

/*
OUTPUT:
 1 | Square:    1 | Square Root:       1
 2 | Square:    4 | Square Root: 1.41421
 3 | Square:    9 | Square Root: 1.73205
 4 | Square:   16 | Square Root:       2
 5 | Square:   25 | Square Root: 2.23607
 6 | Square:   36 | Square Root: 2.44949
 7 | Square:   49 | Square Root: 2.64575
 8 | Square:   64 | Square Root: 2.82843
 9 | Square:   81 | Square Root:       3
10 | Square:  100 | Square Root: 3.16228
11 | Square:  121 | Square Root: 3.31662
12 | Square:  144 | Square Root:  3.4641
13 | Square:  169 | Square Root: 3.60555
14 | Square:  196 | Square Root: 3.74166
15 | Square:  225 | Square Root: 3.87298
16 | Square:  256 | Square Root:       4
17 | Square:  289 | Square Root: 4.12311
18 | Square:  324 | Square Root: 4.24264
19 | Square:  361 | Square Root:  4.3589
20 | Square:  400 | Square Root: 4.47214
21 | Square:  441 | Square Root: 4.58258
22 | Square:  484 | Square Root: 4.69042
23 | Square:  529 | Square Root: 4.79583
24 | Square:  576 | Square Root: 4.89898
25 | Square:  625 | Square Root:       5
26 | Square:  676 | Square Root: 5.09902
27 | Square:  729 | Square Root: 5.19615
28 | Square:  784 | Square Root:  5.2915
29 | Square:  841 | Square Root: 5.38516
30 | Square:  900 | Square Root: 5.47723
31 | Square:  961 | Square Root: 5.56776
32 | Square: 1024 | Square Root: 5.65685
33 | Square: 1089 | Square Root: 5.74456
34 | Square: 1156 | Square Root: 5.83095
35 | Square: 1225 | Square Root: 5.91608
36 | Square: 1296 | Square Root:       6
37 | Square: 1369 | Square Root: 6.08276
38 | Square: 1444 | Square Root: 6.16441
39 | Square: 1521 | Square Root:   6.245
40 | Square: 1600 | Square Root: 6.32456
41 | Square: 1681 | Square Root: 6.40312
42 | Square: 1764 | Square Root: 6.48074
43 | Square: 1849 | Square Root: 6.55744
44 | Square: 1936 | Square Root: 6.63325
45 | Square: 2025 | Square Root:  6.7082
46 | Square: 2116 | Square Root: 6.78233
47 | Square: 2209 | Square Root: 6.85565
48 | Square: 2304 | Square Root:  6.9282
49 | Square: 2401 | Square Root:       7
50 | Square: 2500 | Square Root: 7.07107
51 | Square: 2601 | Square Root: 7.14143
52 | Square: 2704 | Square Root:  7.2111
53 | Square: 2809 | Square Root: 7.28011
54 | Square: 2916 | Square Root: 7.34847
55 | Square: 3025 | Square Root:  7.4162
56 | Square: 3136 | Square Root: 7.48331
57 | Square: 3249 | Square Root: 7.54983
58 | Square: 3364 | Square Root: 7.61577
59 | Square: 3481 | Square Root: 7.68115
60 | Square: 3600 | Square Root: 7.74597
61 | Square: 3721 | Square Root: 7.81025
62 | Square: 3844 | Square Root: 7.87401
63 | Square: 3969 | Square Root: 7.93725
64 | Square: 4096 | Square Root:       8
65 | Square: 4225 | Square Root: 8.06226
66 | Square: 4356 | Square Root: 8.12404
67 | Square: 4489 | Square Root: 8.18535
68 | Square: 4624 | Square Root: 8.24621
69 | Square: 4761 | Square Root: 8.30662
70 | Square: 4900 | Square Root:  8.3666
71 | Square: 5041 | Square Root: 8.42615
72 | Square: 5184 | Square Root: 8.48528
73 | Square: 5329 | Square Root:   8.544
74 | Square: 5476 | Square Root: 8.60233
75 | Square: 5625 | Square Root: 8.66025
76 | Square: 5776 | Square Root:  8.7178
77 | Square: 5929 | Square Root: 8.77496
78 | Square: 6084 | Square Root: 8.83176
79 | Square: 6241 | Square Root: 8.88819
80 | Square: 6400 | Square Root: 8.94427
81 | Square: 6561 | Square Root:       9
Press any key to continue . . .
*/