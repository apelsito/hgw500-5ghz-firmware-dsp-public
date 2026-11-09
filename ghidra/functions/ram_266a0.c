/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000266a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000266a0(int param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 == 1) && ((&DAT_ram_000622dc)[param_1 * 0x18] == '\0')) {
    lVar2 = FUN_ram_0003cd1c();
    if (param_1 == 0) {
      uVar1 = 800;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x119c);
    }
    lVar3 = FUN_ram_000405f8(uVar1,0,250000,0);
    *(longlong *)(&DAT_ram_0006230c + param_1 * 2) = lVar2 + lVar3;
  }
  (&DAT_ram_000622dc)[param_1 * 0x18] = (char)param_2;
  return;
}


