#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int data[8192] = {0};
int contextStack[8192] = {0}, contextStackIndex = 0;
int opStack[8192] = {0}, opStackIndex = 0, opTemp = 0;
int lastBindDataIndex = 0;

int main() {
    contextStackIndex = 0;
    opStackIndex = 0;
    opTemp = 0;
    lastBindDataIndex = 0;

    //";"

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"read"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //null statement (non-context)

    //"8"
    opStack[++opStackIndex] = opTemp = 0x00000008;

    //"read"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //"while"
LABEL__WHILE_00007FF6E96AB078:

    //"CA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "while")
    if (opTemp == 0) goto LABEL__AFTER_WHILE_00007FF6E96AB078;

    //"CA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"CA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"mul"
    opTemp = opStack[opStackIndex - 1] *= opStack[opStackIndex]; --opStackIndex;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //"CA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //end of while
    goto LABEL__WHILE_00007FF6E96AB078;
LABEL__AFTER_WHILE_00007FF6E96AB078:

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"20"
    opStack[++opStackIndex] = opTemp = 0x00000014;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //"while"
LABEL__WHILE_00007FF6E96B39A0:

    //"CA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "while")
    if (opTemp == 0) goto LABEL__AFTER_WHILE_00007FF6E96B39A0;

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //"while"
LABEL__WHILE_00007FF6E96B73D0:

    //"CB"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "while")
    if (opTemp == 0) goto LABEL__AFTER_WHILE_00007FF6E96B73D0;

    //"VL"
    opStack[++opStackIndex] = opTemp = data[0x00000014];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"20"
    opStack[++opStackIndex] = opTemp = 0x00000014;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //"CB"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //end of while
    goto LABEL__WHILE_00007FF6E96B73D0;
LABEL__AFTER_WHILE_00007FF6E96B73D0:

    //"CA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //end of while
    goto LABEL__WHILE_00007FF6E96B39A0;
LABEL__AFTER_WHILE_00007FF6E96B39A0:

    //null statement (non-context)

    //"VL"
    opStack[++opStackIndex] = opTemp = data[0x00000014];

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    return 0;
}