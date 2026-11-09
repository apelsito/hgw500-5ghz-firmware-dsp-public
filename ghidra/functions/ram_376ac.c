/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000376ac */

void FUN_ram_000376ac(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                     int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_2b8 [64];
  undefined4 auStack_1b8 [64];
  undefined4 auStack_b8 [33];
  
  FUN_ram_0004070c(local_2b8,0x80);
  FUN_ram_0004070c(local_2b8 + 0x20,0x80);
  FUN_ram_0004070c(auStack_1b8,0x80);
  FUN_ram_0004070c(auStack_1b8 + 0x20,0x80);
  FUN_ram_0004070c(auStack_b8,0x80);
  iVar7 = 0;
  iVar8 = 0;
  if (-1 < param_5) {
    do {
      iVar6 = 0;
      if (-1 < param_6) {
        do {
          iVar4 = 0;
          do {
            iVar2 = (iVar4 * 4 + iVar6) * 4;
            local_2b8[iVar4 * 8 + iVar6 * 2 + 0x20] = (int)*(short *)(param_2 + iVar2);
            iVar1 = iVar4 + 1;
            local_2b8[iVar4 * 8 + iVar6 * 2 + 0x21] = (int)*(short *)(iVar2 + param_2 + 2);
            iVar4 = iVar1;
          } while (iVar1 < 4);
          iVar6 = iVar6 + 1;
        } while (iVar6 <= param_6);
      }
      iVar6 = 0;
      iVar4 = 1;
      if (-1 < param_5) {
        do {
          if (iVar6 == iVar8) {
            iVar4 = 0;
            iVar1 = 0;
            do {
              iVar3 = (iVar1 * 4 + iVar8) * 4;
              iVar2 = iVar1 + 1;
              local_2b8[iVar1 * 8] = (int)*(short *)(param_1 + iVar3);
              local_2b8[iVar1 * 8 + 1] = (int)*(short *)(iVar3 + param_1 + 2);
              iVar1 = iVar2;
            } while (iVar2 < 4);
          }
          else {
            iVar2 = iVar6 + param_6 + iVar4;
            iVar1 = 0;
            do {
              iVar5 = (iVar1 * 4 + iVar6) * 4;
              local_2b8[iVar2 * 2 + iVar1 * 8 + 0x20] = (int)*(short *)(param_1 + iVar5);
              iVar3 = iVar1 + 1;
              local_2b8[iVar2 * 2 + iVar1 * 8 + 0x21] = (int)*(short *)(iVar5 + param_1 + 2);
              iVar1 = iVar3;
            } while (iVar3 < 4);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= param_5);
      }
      FUN_ram_00038f30(auStack_1b8,local_2b8,local_2b8 + 0x20,4,1,param_6 + param_5 + 1);
      iVar6 = 0;
      do {
        iVar4 = iVar6 + 1;
        auStack_1b8[iVar6 * 8 + iVar7 * 2 + 0x20] = auStack_1b8[iVar6 * 8];
        auStack_1b8[iVar6 * 8 + iVar7 * 2 + 0x21] = auStack_1b8[iVar6 * 8 + 1];
        iVar6 = iVar4;
      } while (iVar4 < 4);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar8 <= param_5);
  }
  iVar7 = 0;
  iVar8 = 0;
  if (-1 < param_6) {
    do {
      iVar6 = 0;
      if (-1 < param_5) {
        do {
          iVar4 = 0;
          do {
            iVar2 = (iVar4 * 4 + iVar6) * 4;
            local_2b8[iVar4 * 8 + iVar6 * 2 + 0x20] = (int)*(short *)(param_1 + iVar2);
            iVar1 = iVar4 + 1;
            local_2b8[iVar4 * 8 + iVar6 * 2 + 0x21] = (int)*(short *)(iVar2 + param_1 + 2);
            iVar4 = iVar1;
          } while (iVar1 < 4);
          iVar6 = iVar6 + 1;
        } while (iVar6 <= param_5);
      }
      iVar6 = 0;
      iVar4 = 1;
      if (-1 < param_6) {
        do {
          if (iVar6 == iVar8) {
            iVar4 = 0;
            iVar1 = 0;
            do {
              iVar3 = (iVar1 * 4 + iVar8) * 4;
              iVar2 = iVar1 + 1;
              local_2b8[iVar1 * 8] = (int)*(short *)(param_2 + iVar3);
              local_2b8[iVar1 * 8 + 1] = (int)*(short *)(iVar3 + param_2 + 2);
              iVar1 = iVar2;
            } while (iVar2 < 4);
          }
          else {
            iVar2 = iVar6 + param_5 + iVar4;
            iVar1 = 0;
            do {
              iVar5 = (iVar1 * 4 + iVar6) * 4;
              local_2b8[iVar2 * 2 + iVar1 * 8 + 0x20] = (int)*(short *)(param_2 + iVar5);
              iVar3 = iVar1 + 1;
              local_2b8[iVar2 * 2 + iVar1 * 8 + 0x21] = (int)*(short *)(iVar5 + param_2 + 2);
              iVar1 = iVar3;
            } while (iVar3 < 4);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= param_6);
      }
      FUN_ram_00038f30(auStack_1b8,local_2b8,local_2b8 + 0x20,4,1,param_6 + param_5 + 1);
      iVar6 = 0;
      do {
        iVar4 = iVar6 + 1;
        auStack_b8[iVar6 * 8 + iVar7 * 2] = auStack_1b8[iVar6 * 8];
        auStack_b8[iVar6 * 8 + iVar7 * 2 + 1] = auStack_1b8[iVar6 * 8 + 1];
        iVar6 = iVar4;
      } while (iVar4 < 4);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar8 <= param_6);
  }
  FUN_ram_000388c8(auStack_1b8 + 0x20,auStack_b8,param_1,param_2,param_3,param_4,param_5,param_6,
                   param_7,param_8,param_9);
  return;
}


