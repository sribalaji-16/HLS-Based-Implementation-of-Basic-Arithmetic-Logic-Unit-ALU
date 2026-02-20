#include <ap_int.h>

// Top function for HLS synthesis
void basic_alu(
    ap_int<8> A,
    ap_int<8> B,
    ap_uint<3> opcode,
    ap_int<8> *result
) {

#pragma HLS INTERFACE ap_none port=A
#pragma HLS INTERFACE ap_none port=B
#pragma HLS INTERFACE ap_none port=opcode
#pragma HLS INTERFACE ap_none port=result
#pragma HLS INTERFACE ap_ctrl_none port=return

    switch(opcode)
    {
        case 0: // ADD
            *result = A + B;
            break;

        case 1: // SUB
            *result = A - B;
            break;

        case 2: // AND
            *result = A & B;
            break;

        case 3: // OR
            *result = A | B;
            break;

        case 4: // XOR
            *result = A ^ B;
            break;

        case 5: // NOT (only A used)
            *result = ~A;
            break;

        default:
            *result = 0;
            break;
    }
}
