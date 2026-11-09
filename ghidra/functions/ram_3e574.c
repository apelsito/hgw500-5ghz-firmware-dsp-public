/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e574 */

void FUN_ram_0003e574(void)

{
  uint uVar1;
  undefined4 extraout_r2;
  uint extraout_r2_00;
  int iVar2;
  undefined4 extraout_r3;
  int *extraout_r4;
  int extraout_r5;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  char local_9 [9];
  
  lVar12 = FUN_ram_000297b4();
  lVar13 = CONCAT44(extraout_r3,extraout_r2);
  iVar7 = (int)((ulonglong)lVar12 >> 0x20);
  switch(iVar7) {
  case 2:
    uVar10 = 1;
    cVar11 = '\0';
    iVar8 = 1;
    iVar7 = 2;
    break;
  default:
    if (lVar12 < 0xb00000000) {
      cVar11 = '\0';
      uVar10 = 0;
      iVar8 = 0;
      break;
    }
    uVar10 = 0;
    iVar8 = 0;
    goto LAB_ram_0003e602;
  case 4:
    iVar8 = 2;
    cVar11 = '\0';
    uVar10 = 3;
    iVar7 = 4;
    break;
  case 8:
    iVar7 = 8;
    iVar8 = 3;
    uVar10 = 7;
    cVar11 = '\0';
    break;
  case 0x10:
    iVar7 = 0x10;
    iVar8 = 4;
    uVar10 = 0xf;
LAB_ram_0003e602:
    cVar11 = 'a';
    if (extraout_r5 == 0) {
      cVar11 = 'A';
    }
  }
  pcVar6 = local_9 + 1;
  local_9[1] = 0;
  iVar2 = 0;
  do {
    iVar9 = iVar2;
    uVar5 = (undefined4)((ulonglong)lVar13 >> 0x20);
    uVar1 = (uint)lVar13;
    if (iVar8 == 0) {
      lVar13 = FUN_ram_00040390(uVar1,uVar5,iVar7,iVar7 >> 0x1f);
      uVar4 = extraout_r2_00;
    }
    else {
      uVar4 = uVar10 & uVar1;
      lVar13 = FUN_ram_00040688(uVar1,uVar5,iVar8);
    }
    if ((int)uVar4 < 10) {
      cVar3 = (char)uVar4 + '0';
    }
    else {
      cVar3 = (char)uVar4 + cVar11 + -10;
    }
    pcVar6 = pcVar6 + -1;
    *pcVar6 = cVar3;
    iVar2 = iVar9 + 1;
  } while (lVar13 != 0);
  FUN_ram_0003ec60((int)lVar12,pcVar6,iVar9 + 2);
  if (extraout_r4 != (int *)0x0) {
    *extraout_r4 = iVar2;
  }
  FUN_ram_00029800((int)lVar12);
  return;
}


