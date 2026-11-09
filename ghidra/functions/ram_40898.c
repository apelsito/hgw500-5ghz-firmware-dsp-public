/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00040898 */

void FUN_ram_00040898(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r12;
  
  puVar1 = (undefined4 *)FUN_ram_00040874();
  *puVar1 = extraout_r12;
  return;
}


