/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00020bac */

void FUN_ram_00020bac(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = STATUS32;
  if ((uVar1 & 6) != 0) {
    STATUS32 = uVar1 & 0xfffffff9;
  }
  uVar3 = DC_CTRL;
  iVar2 = 1 - (uVar3 & 1);
  if (1 < (uVar3 & 1)) {
    iVar2 = 0;
  }
  uVar3 = param_2 + param_1;
  if (iVar2 != 0) {
    for (; param_1 < uVar3; param_1 = param_1 + 0x20) {
      DC_FLDL = param_1;
    }
    do {
      uVar3 = DC_CTRL;
    } while ((uVar3 & 0x100) != 0);
  }
  STATUS32 = uVar1;
  return;
}


