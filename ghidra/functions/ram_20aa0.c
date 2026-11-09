/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00020aa0 */

void FUN_ram_00020aa0(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = STATUS32;
  if ((uVar1 & 6) != 0) {
    STATUS32 = uVar1 & 0xfffffff9;
  }
  uVar3 = param_2 + param_1;
  uVar2 = DC_CTRL;
  DC_CTRL = uVar2 & 0xffffffbf;
  for (; param_1 < uVar3; param_1 = param_1 + 0x20) {
    DC_IVDL = param_1;
  }
  STATUS32 = uVar1;
  return;
}


