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

    //null statement (non-context)

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"read"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //"if"

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"CC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //"&"
    opTemp = opStack[opStackIndex - 1] &= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF6BFE8D5E0;

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF6BFE8D5E0:

    //"else" (part of "elseif")
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF6BFE8F2F8;

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"CC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //"&"
    opTemp = opStack[opStackIndex - 1] &= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "elseif")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF6BFE920B0;

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //"}" (after "then"-part of elseif-operator)
    opTemp = 1;
LABEL__AFTER_ELSE_00007FF6BFE8F2F8:
LABEL__AFTER_THEN_00007FF6BFE920B0:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF6BFE93DC8;

    //"CC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";" (after "else")
LABEL__AFTER_ELSE_00007FF6BFE93DC8:

    //null statement (non-context)

    //"MA"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //"if"

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"=="
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex]; --opStackIndex;

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"CC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"=="
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex]; --opStackIndex;

    //"&"
    opTemp = opStack[opStackIndex - 1] &= opStack[opStackIndex]; --opStackIndex;

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"CC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"=="
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex]; --opStackIndex;

    //"&"
    opTemp = opStack[opStackIndex - 1] &= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF6BFE9B228;

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF6BFE9B228:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF6BFE9CB18;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "else")
LABEL__AFTER_ELSE_00007FF6BFE9CB18:

    //"if"

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] > opStack[opStackIndex]; --opStackIndex;

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] > opStack[opStackIndex]; --opStackIndex;

    //"|"
    opTemp = opStack[opStackIndex - 1] |= opStack[opStackIndex]; --opStackIndex;

    //"CC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] > opStack[opStackIndex]; --opStackIndex;

    //"|"
    opTemp = opStack[opStackIndex - 1] |= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF6BFEA2260;

    //"-1"
    opStack[++opStackIndex] = opTemp = 0xFFFFFFFF;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF6BFEA2260:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF6BFEA3B50;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "else")
LABEL__AFTER_ELSE_00007FF6BFEA3B50:

    //"if"

    //"AA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"CC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] > opStack[opStackIndex]; --opStackIndex;

    //"!"
    opTemp = opStack[opStackIndex] = !opStack[opStackIndex];

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF6BFEA7DD0;

    //"10"
    opStack[++opStackIndex] = opTemp = 0x0000000A;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_00007FF6BFEA7DD0:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF6BFEA96C0;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";" (after "else")
LABEL__AFTER_ELSE_00007FF6BFEA96C0:

    return 0;
}