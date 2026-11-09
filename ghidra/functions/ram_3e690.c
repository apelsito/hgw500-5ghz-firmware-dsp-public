/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e690 */

void FUN_ram_0003e690(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *extraout_r2;
  undefined4 uVar4;
  byte *extraout_r4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_ram_000297d0();
  puVar2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  pbVar1 = (byte *)uVar6;
  uVar4 = 0;
  uVar3 = 0;
  while ((PTR_DAT_ram_0005500d_ram_0003e83c[*pbVar1] & 4) != 0) {
    if (0x19999999 < uVar3) {
      uVar4 = 0x22;
    }
    iVar5 = *pbVar1 - 0x30;
    if (-iVar5 - 1U < uVar3 * 10) {
      uVar4 = 0x22;
    }
    uVar3 = iVar5 + uVar3 * 10;
    pbVar1 = pbVar1 + 1;
  }
  if (pbVar1 == extraout_r4) {
    uVar4 = 0xffffffff;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = pbVar1;
  }
  if (extraout_r2 != (undefined4 *)0x0) {
    *extraout_r2 = uVar4;
  }
  FUN_ram_00029838(uVar3);
  return;
}


