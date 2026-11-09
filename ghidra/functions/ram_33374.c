/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033374 */

void FUN_ram_00033374(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int aiStack_88 [12];
  uint auStack_58 [12];
  
  uVar5 = 0;
  if (((param_3 < 3) && (param_4 < 3)) && (param_5 < 4)) {
    FUN_ram_0003ec60(aiStack_88,&PTR_DAT_ram_0005b2e0_ram_00054dac,0x30);
    FUN_ram_0003ec60(auStack_58,&DAT_ram_00054ddc,0x30);
    iVar3 = aiStack_88[param_5 + param_3 * 4];
    uVar2 = auStack_58[param_5 + param_3 * 4];
    iVar7 = aiStack_88[param_4 * 4 + param_5];
    uVar6 = auStack_58[param_4 * 4 + param_5];
    if (param_3 < param_4) {
      uVar4 = 1;
      if (1 < uVar6) {
        do {
          if (uVar5 < uVar2) {
            cVar1 = *(char *)(iVar3 + uVar5);
            while ((cVar1 != *(char *)(iVar7 + uVar4) && (uVar5 = uVar5 + 1, uVar5 < uVar2))) {
              cVar1 = *(char *)(iVar3 + uVar5);
            }
          }
          if (uVar5 < uVar2) {
            FUN_ram_0003ec60(uVar4 * 0x10 + param_2,uVar5 * 0x10 + param_1,0x10);
            uVar5 = uVar5 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
      }
    }
    else {
      FUN_ram_0003ec60(param_2,param_1,uVar2 << 4);
    }
  }
  return;
}


