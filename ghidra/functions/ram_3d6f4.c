/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d6f4 */

void FUN_ram_0003d6f4(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  short *extraout_r2;
  int extraout_r3;
  int iVar4;
  short *psVar5;
  undefined8 uVar6;
  undefined1 auStack_c [4];
  
  uVar6 = FUN_ram_000297c4();
  iVar4 = 0;
  FUN_ram_0003e8e4(0,0);
  psVar5 = extraout_r2;
  while (((*psVar5 != 0 && (iVar4 < extraout_r3)) &&
         (iVar1 = FUN_ram_0003e8e4(auStack_c), 0 < iVar1))) {
    iVar4 = iVar4 + iVar1;
    psVar5 = psVar5 + 1;
  }
  puVar2 = (undefined1 *)(iVar4 + 4U & 0xfffffffc);
  iVar4 = -(int)puVar2;
  FUN_ram_00040344();
  uVar3 = 0xffffffff;
  if (auStack_c != puVar2) {
    FUN_ram_0003e8c0(auStack_c + iVar4,extraout_r2);
    uVar3 = (*(code *)uVar6)((int)((ulonglong)uVar6 >> 0x20),auStack_c + iVar4,extraout_r3);
  }
  FUN_ram_00029820(uVar3);
  return;
}


