/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003ed10 */

void FUN_ram_0003ed10(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint in_lp_count;
  char in_is_in_loop;
  
  if (7 < param_3) {
    for (; ((uint)param_1 & 3) != 0; param_1 = (undefined4 *)((int)param_1 + 1)) {
      *(undefined1 *)param_1 = param_2;
      param_3 = param_3 - 1;
    }
    uVar2 = param_3 >> 2;
    param_3 = param_3 & 3;
    puVar1 = param_1;
    do {
      uVar2 = uVar2 - 1;
      param_1 = puVar1 + 1;
      *puVar1 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      puVar1 = param_1;
    } while (uVar2 != 0);
  }
  if (param_3 == 0) goto LAB_ram_0003ed56;
  if ((int)param_3 < 0) {
    param_3 = -param_3;
  }
  LP_START = 0x3ed50;
  LP_END = 0x3ed56;
  in_is_in_loop = '\x01';
  puVar1 = param_1;
  do {
    param_1 = (undefined4 *)((int)puVar1 + 1);
    *(undefined1 *)puVar1 = param_2;
    in_lp_count = param_3;
LAB_ram_0003ed56:
  } while ((in_is_in_loop != '\0') && (param_3 = in_lp_count - 1, puVar1 = param_1, param_3 != 0));
  return;
}


