/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003edf0 */

void FUN_ram_0003edf0(void)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r2;
  uint extraout_r3;
  int extraout_r4;
  int extraout_r5;
  int *extraout_r6;
  uint *extraout_r7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  char extraout_N;
  char extraout_N_00;
  char extraout_N_01;
  char extraout_N_02;
  char extraout_V;
  char extraout_V_00;
  char extraout_V_01;
  char extraout_V_02;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int in_stack_00000024;
  uint in_stack_00000028;
  undefined1 auStack_1c [12];
  int aiStack_10 [4];
  
  uVar11 = FUN_ram_000297b0();
  iVar10 = (int)((ulonglong)uVar11 >> 0x20);
  puVar2 = (undefined1 *)uVar11;
  *extraout_r7 = 0;
  *extraout_r6 = 0;
  in_stack_00000024 = extraout_r2;
  in_stack_00000028 = extraout_r3;
  iVar3 = FUN_ram_0003f16c(&stack0x00000024,extraout_r4,extraout_r5,extraout_r6,extraout_r7);
  uVar1 = in_stack_00000028;
  iVar4 = in_stack_00000024;
  iVar5 = extraout_r5;
  if (iVar3 == 0) {
    if ((in_stack_00000028 & 0x7fffffff) != 0 || in_stack_00000024 != 0) {
      FUN_ram_0003f308(in_stack_00000024,in_stack_00000028,0,0);
      *extraout_r7 = (uint)(extraout_N != extraout_V);
      if ((extraout_N != extraout_V) != 0) {
        in_stack_00000028 = uVar1 ^ 0x80000000;
        in_stack_00000024 = iVar4;
      }
      iVar5 = FUN_ram_0003f1c8(&stack0x00000024);
      if (iVar5 < 0) {
        iVar4 = iVar5 * 0x4d + 0x4d >> 8;
        if (0x134 < -iVar4) {
          iVar4 = -0x134;
        }
        uVar11 = FUN_ram_0003f0ac(-iVar4);
        _in_stack_00000024 =
             FUN_ram_0003ff6c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),in_stack_00000024,
                              in_stack_00000028);
      }
      else {
        iVar5 = (iVar5 * 0x4d >> 8) + 1;
        iVar4 = 0x134;
        if (iVar5 < 0x135) {
          iVar4 = iVar5;
        }
        uVar11 = FUN_ram_0003f0ac();
        _in_stack_00000024 =
             FUN_ram_0003f9e8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),in_stack_00000024,
                              in_stack_00000028);
      }
      uVar13 = _in_stack_00000024;
      if ((_in_stack_00000024 & 0x7fffffff00000000) != 0 || (int)_in_stack_00000024 != 0) {
        while( true ) {
          uVar6 = (undefined4)(uVar13 >> 0x20);
          FUN_ram_0003f308((int)uVar13,uVar6,DAT_ram_0003f09c,DAT_ram_0003f0a0);
          if (extraout_V_00 == extraout_N_00) break;
          uVar13 = FUN_ram_0003ff6c((int)uVar13,uVar6,0,DAT_ram_0003f098);
          iVar4 = iVar4 + -1;
        }
        while( true ) {
          uVar6 = (undefined4)(uVar13 >> 0x20);
          uVar9 = (undefined4)uVar13;
          FUN_ram_0003f308(uVar9,uVar6,0,DAT_ram_0003f0a4);
          if (extraout_V_01 != extraout_N_01) break;
          uVar13 = FUN_ram_0003f9f4(uVar9,uVar6,0,DAT_ram_0003f098);
          iVar4 = iVar4 + 1;
        }
        _in_stack_00000024 = uVar13;
        FUN_ram_0003f308(uVar9,uVar6,DAT_ram_0003f09c,DAT_ram_0003f0a0);
        if (extraout_V_02 != extraout_N_02) {
          _in_stack_00000024 = CONCAT44(DAT_ram_0003f0a0,DAT_ram_0003f09c);
        }
      }
      if (extraout_r4 == 0x66) {
        iVar3 = extraout_r5 + iVar4;
LAB_ram_0003ef78:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = extraout_r5;
        if (extraout_r4 == 0x67) goto LAB_ram_0003ef78;
      }
      if (0x13 < iVar3) {
        iVar3 = 0x13;
      }
      iVar5 = iVar10 + -2;
      if (iVar3 < iVar10 + -1) {
        iVar5 = iVar3;
      }
      iVar3 = 0;
      puVar8 = puVar2;
      uVar13 = _in_stack_00000024;
      if (-1 < iVar5) {
        do {
          in_stack_00000028 = (uint)(uVar13 >> 0x20);
          in_stack_00000024 = (int)uVar13;
          uVar11 = FUN_ram_0003ff6c(in_stack_00000024,in_stack_00000028,0,DAT_ram_0003f0a8);
          _in_stack_00000024 = uVar13;
          uVar6 = FUN_ram_000402c0();
          uVar12 = FUN_ram_0003ff0c();
          uVar13 = FUN_ram_0003f340((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                                    (int)((ulonglong)uVar11 >> 0x20));
          _in_stack_00000024 = uVar13;
          FUN_ram_0003e430(auStack_1c,10,uVar6,aiStack_10,0);
          iVar10 = aiStack_10[0];
          if (iVar3 != 0) {
            for (iVar7 = 8; aiStack_10[0] < iVar7; iVar7 = iVar7 + -1) {
              *puVar8 = 0x30;
              iVar3 = iVar3 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          FUN_ram_0003ec60(puVar8,auStack_1c,aiStack_10[0]);
          iVar3 = iVar3 + iVar10;
          puVar8 = puVar8 + iVar10;
          uVar13 = _in_stack_00000024;
        } while (iVar3 <= iVar5);
      }
      if (0x34 < (byte)puVar2[iVar5]) {
        iVar3 = iVar5 + -1;
        if (-1 < iVar3) {
          LP_START = 0x3f024;
          LP_END = 0x3f036;
          iVar10 = iVar5;
          do {
            if (puVar2[iVar3] != '9') {
              puVar2[iVar3] = puVar2[iVar3] + '\x01';
              break;
            }
            puVar2[iVar3] = '0';
            iVar3 = iVar3 + -1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (iVar3 < 0) {
          *puVar2 = 0x31;
          iVar4 = iVar4 + 1;
          if (iVar5 == 0) {
            iVar5 = 1;
          }
        }
      }
      if (iVar5 == 0) {
        iVar5 = 1;
        *puVar2 = 0x30;
      }
      puVar2[iVar5] = 0;
      *extraout_r6 = iVar4;
      goto LAB_ram_0003f06c;
    }
  }
  else {
    iVar4 = FUN_ram_0003e90c(iVar3,PTR_DAT_ram_00055218_ram_0003f094);
    if (iVar4 != 0) {
      FUN_ram_0003f0ec(puVar2,iVar3);
      goto LAB_ram_0003f06c;
    }
  }
  *extraout_r6 = 0;
  FUN_ram_0003edc0(extraout_r5,iVar10,puVar2);
LAB_ram_0003f06c:
  if (extraout_r4 == 0x67) {
    while ((iVar5 = iVar5 + -1, iVar5 != 0 && (puVar2[iVar5] == '0'))) {
      puVar2[iVar5] = 0;
    }
  }
  FUN_ram_000297fa(puVar2);
  return;
}


