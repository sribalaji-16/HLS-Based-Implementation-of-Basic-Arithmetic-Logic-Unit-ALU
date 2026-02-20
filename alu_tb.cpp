#include <iostream>
#include <ap_int.h>

using namespace std;

void basic_alu(ap_int<8> A, ap_int<8> B, ap_uint<3> opcode, ap_int<8> *result);

int main() {

    ap_int<8> A = 10;
    ap_int<8> B = 5;
    ap_int<8> result;

    // ADD
    basic_alu(A, B, 0, &result);
    cout << "ADD = " << result << endl;

    // SUB
    basic_alu(A, B, 1, &result);
    cout << "SUB = " << result << endl;

    // AND
    basic_alu(A, B, 2, &result);
    cout << "AND = " << result << endl;

    // OR
    basic_alu(A, B, 3, &result);
    cout << "OR = " << result << endl;

    // XOR
    basic_alu(A, B, 4, &result);
    cout << "XOR = " << result << endl;

    // NOT
    basic_alu(A, B, 5, &result);
    cout << "NOT A = " << result << endl;

    return 0;
}
