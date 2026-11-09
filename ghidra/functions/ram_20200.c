/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00020200 */

ulonglong FUN_ram_00020200(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = D_CACHE_BUILD;
  if ((uVar2 & 0xff) == 0) {
    return CONCAT44(uVar2,param_1) & 0xffffffffff;
  }
  uVar1 = DC_CTRL;
  DC_CTRL = 0xc2;
  DC_IVDC = 1;
  do {
    uVar2 = DC_CTRL;
  } while ((uVar2 & 0x100) != 0);
  DC_CTRL = uVar1;
  return CONCAT44(uVar1,uVar2) & 0xffffffff00000100;
}


