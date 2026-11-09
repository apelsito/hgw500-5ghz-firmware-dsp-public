/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e8c0 */

int FUN_ram_0003e8c0(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int in_lp_count;
  
  iVar3 = 0;
  if (param_3 != 0) {
    in_lp_count = param_3;
  }
  bVar2 = false;
  if (param_3 == 0) goto LAB_ram_0003e8de;
  LP_START = 0x3e8ce;
  LP_END = 0x3e8de;
  bVar2 = true;
  do {
    cVar1 = (char)*(undefined2 *)(param_2 + iVar3 * 2);
    *(char *)(param_1 + iVar3) = cVar1;
    if (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
LAB_ram_0003e8de:
  } while ((bVar2) && (in_lp_count = in_lp_count + -1, in_lp_count != 0));
  return iVar3;
}


