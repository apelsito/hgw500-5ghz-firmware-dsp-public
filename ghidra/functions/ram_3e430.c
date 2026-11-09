/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e430 */

void FUN_ram_0003e430(void)

{
  uint uVar1;
  char cVar2;
  uint extraout_r2;
  int *extraout_r3;
  int extraout_r4;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  char local_9 [9];
  
  lVar10 = FUN_ram_000297bc();
  uVar7 = (undefined4)((ulonglong)lVar10 >> 0x20);
  switch(uVar7) {
  case 2:
    iVar4 = 1;
    uVar8 = 1;
    cVar9 = '\0';
    uVar7 = 2;
    break;
  default:
    iVar4 = 0;
    if (lVar10 < 0xb00000000) {
      cVar9 = '\0';
      uVar8 = 0;
      break;
    }
    uVar8 = 0;
    goto LAB_ram_0003e4b0;
  case 4:
    iVar4 = 2;
    cVar9 = '\0';
    uVar8 = 3;
    uVar7 = 4;
    break;
  case 8:
    uVar7 = 8;
    iVar4 = 3;
    uVar8 = 7;
    cVar9 = '\0';
    break;
  case 0x10:
    uVar7 = 0x10;
    iVar4 = 4;
    uVar8 = 0xf;
LAB_ram_0003e4b0:
    cVar9 = 'a';
    if (extraout_r4 == 0) {
      cVar9 = 'A';
    }
  }
  pcVar3 = local_9 + 1;
  local_9[1] = 0;
  uVar1 = extraout_r2;
  iVar6 = 0;
  do {
    iVar5 = iVar6;
    if (iVar4 == 0) {
      lVar11 = FUN_ram_0002966c(uVar1,uVar7);
    }
    else {
      lVar11 = CONCAT44(uVar8 & uVar1,uVar1 >> iVar4);
    }
    uVar1 = (uint)lVar11;
    cVar2 = (char)((ulonglong)lVar11 >> 0x20);
    if (lVar11 < 0xa00000000) {
      cVar2 = cVar2 + '0';
    }
    else {
      cVar2 = cVar2 + cVar9 + -10;
    }
    pcVar3 = pcVar3 + -1;
    *pcVar3 = cVar2;
    iVar6 = iVar5 + 1;
  } while (uVar1 != 0);
  FUN_ram_0003ec60((int)lVar10,pcVar3,iVar5 + 2);
  if (extraout_r3 != (int *)0x0) {
    *extraout_r3 = iVar6;
  }
  FUN_ram_00029810((int)lVar10);
  return;
}


