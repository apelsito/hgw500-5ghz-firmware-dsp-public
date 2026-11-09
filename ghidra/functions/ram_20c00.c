/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00020c00 */

void FUN_ram_00020c00(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    uVar4 = 0x20000000;
  }
  else {
    uVar4 = 0;
  }
  for (uVar1 = param_3 + 3U & 0xfffffffc; uVar1 != 0; uVar1 = uVar1 - uVar3) {
    uVar3 = uVar1;
    if (0x4000 < uVar1) {
      uVar3 = 0x4000;
    }
    BURSTSYS = param_1;
    BURSTXYM = param_2 >> 2;
    BURSTSZ = (param_5 & 3) << 0x18 | uVar4 | uVar3 - 1;
    do {
      uVar2 = XYCONFIG;
    } while ((uVar2 & 0x10) != 0);
    param_1 = param_1 + uVar3;
    param_2 = param_2 + uVar3;
  }
  return;
}


