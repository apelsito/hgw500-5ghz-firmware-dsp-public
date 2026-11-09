/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d7b4 */

void FUN_ram_0003d7b4(void)

{
  int iVar1;
  int extraout_r2;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_ram_000297cc();
  uVar3 = (uint)uVar6;
  uVar4 = *(undefined4 *)(extraout_r2 + 0x40);
  pcVar2 = *(code **)(extraout_r2 + 0x3c);
  puVar5 = (undefined4 *)(PTR_PTR_ram_0003dabc + (uint)((int)((ulonglong)uVar6 >> 0x20) != 0) * 4);
  iVar1 = (*pcVar2)(uVar4,*puVar5,uVar3 & 0xf);
  if (iVar1 == -1) {
LAB_ram_0003d80a:
    uVar4 = 0xffffffff;
  }
  else {
    for (; 0xf < (int)uVar3; uVar3 = uVar3 - 0x10) {
      iVar1 = (*pcVar2)(uVar4,*puVar5,0x10);
      if (iVar1 == -1) goto LAB_ram_0003d80a;
    }
    uVar4 = 0;
  }
  FUN_ram_00029830(uVar4);
  return;
}


