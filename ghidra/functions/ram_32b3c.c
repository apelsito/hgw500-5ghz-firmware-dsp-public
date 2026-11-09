/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00032b3c */

void FUN_ram_00032b3c(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6
                     )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int aiStack_88 [12];
  uint auStack_58 [12];
  
  FUN_ram_0003ec60(aiStack_88,&PTR_DAT_ram_0005b2e0_ram_00054d1c,0x30);
  FUN_ram_0003ec60(auStack_58,&DAT_ram_00054d4c,0x30);
  uVar7 = 0;
  if (((param_4 < 3) && (param_5 < 3)) && (param_6 < 4)) {
    iVar3 = aiStack_88[param_6 + param_4 * 4];
    uVar2 = auStack_58[param_6 + param_4 * 4];
    iVar9 = aiStack_88[param_6 + param_5 * 4];
    uVar10 = auStack_58[param_6 + param_5 * 4];
    if (param_4 < param_5) {
      uVar5 = 1;
      if (1 < uVar10) {
        do {
          if (uVar7 < uVar2) {
            cVar1 = *(char *)(iVar3 + uVar7);
            while ((cVar1 != *(char *)(iVar9 + uVar5) && (uVar7 = uVar7 + 1, uVar7 < uVar2))) {
              cVar1 = *(char *)(iVar3 + uVar7);
            }
          }
          if (uVar7 < uVar2) {
            FUN_ram_0003ed78(uVar5 * 0x20 + param_2,uVar7 * 0x20 + param_1,0x20);
            uVar7 = uVar7 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar10);
      }
    }
    else {
      iVar6 = uVar10 - 1;
      iVar8 = uVar2 - 1;
      if (iVar6 != 0 && 0 < (int)uVar10) {
        do {
          iVar4 = iVar8 * 0x20 + param_1;
          FUN_ram_0003ed78(iVar6 * 0x20 + param_2,iVar4,0x20);
          if (iVar6 + -1 == 0) {
            FUN_ram_0004070c(param_2,0x20);
          }
          else {
            FUN_ram_0003ed78((iVar6 + -1) * 0x20 + param_2,iVar4,0x20);
          }
          if ((0 < iVar8) && (*(char *)(iVar3 + iVar8) == *(char *)(iVar9 + iVar6 + -1))) {
            iVar8 = iVar8 + -1;
          }
          iVar6 = iVar6 + -2;
        } while (0 < iVar6);
      }
    }
  }
  return;
}


